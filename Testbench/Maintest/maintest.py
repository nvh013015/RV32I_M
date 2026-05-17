import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import os

@cocotb.test()
async def rv32i_top_test(dut):
    """Testbench chuẩn hóa thứ tự nhịp cho CPU Multicycle + RAM"""

    # --- 1. ĐỌC FILE HEX VÀ ĐỒNG BỘ ĐƯỜNG DẪN CHO VERILATOR ---
    hex_file_path = "program.hex"
    if os.path.exists(hex_file_path):
        with open(hex_file_path, "r") as f:
            instructions = [line.strip() for line in f if line.strip()]
        dut._log.info(f"Đã đọc thành công {len(instructions)} lệnh từ file {hex_file_path}")
    else:
        raise FileNotFoundError(f"Không tìm thấy file {hex_file_path} tại thư mục chạy test!")

    # Tạo bản sao vào sim_build đề phòng Verilator chạy deep-binary
    if not os.path.exists("sim_build"): 
        os.makedirs("sim_build")
    with open("sim_build/program.hex", "w") as f:
        f.write("\n".join(instructions) + "\n")

   # --- 2. KHỞI TẠO XUNG CLOCK ---
    clock = Clock(dut.clk, 20, unit="ns") 
    cocotb.start_soon(clock.start())

    # --- 3. QUY TRÌNH RESET ĐỂ GIỮ PC = 0 ---
    dut.reset.value = 1
    await Timer(40, unit="ns")  # Giữ reset trong 2 chu kỳ clock
    
    dut.reset.value = 0         # Nhả reset
    await Timer(1, unit="ns")   # Chờ 1ns delta-cycle ổn định mạch tổ hợp

    dut._log.info("--- BẮT ĐẦU THỰC THI CHƯƠNG TRÌNH RISC-V ---")

    # Khai báo các biến cờ hiệu (flags) để tự động kiểm tra kết quả mong đợi
    sw_x7_passed = False
    sw_x2_final_passed = False

    # --- 4. VÒNG LẶP MÔ PHỎNG TỰ ĐỘNG GIÁM SÁT ---
    for i in range(200):
        # Đọc dữ liệu tại thời điểm hiện tại TRƯỚC KHI kích clock
        addr   = dut.mem_addr.value.to_unsigned()
        rdata  = dut.mem_rdata.value.to_unsigned()
        wdata  = dut.mem_wdata.value.to_unsigned()
        wmask  = dut.mem_wmask.value.to_unsigned()
        wwrite = dut.memWrite.value  

        # TỰ ĐỘNG KIỂM TRA HÀNH VI GHI (Check on-the-fly)
        if wwrite == 1:
            dut._log.info(f"Cycle {i:3d}: [WRITE] Mem[{hex(addr)}] = {hex(wdata)} (Mask: {bin(wmask)})")
            
            # Kiểm tra yêu cầu 1: M[96] = 7 (Địa chỉ 96 là 0x60)
            if addr == 96:
                if wdata == 7:
                    sw_x7_passed = True
                    dut._log.info("👉 [CHECK PASSED]: Ghi đúng giá trị 7 vào ô nhớ 96 (0x60).")
                else:
                    dut._log.error(f"❌ [CHECK FAILED]: Ghi vào ô nhớ 96 bị SAI dữ liệu! Kỳ vọng: 7, Thực tế: {wdata}")

            # Kiểm tra yêu cầu 2: M[100] = 25 (Địa chỉ 100 là 0x64)
            if addr == 100:
                if wdata == 25:
                    sw_x2_final_passed = True
                    dut._log.info("👉 [CHECK PASSED]: Xuất sắc! Đã ghi đúng giá trị kết thúc 25 vào ô nhớ 100 (0x64).")
                else:
                    dut._log.error(f"❌ [CHECK FAILED]: Ghi vào ô nhớ 100 bị SAI dữ liệu! Kỳ vọng: 25, Thực tế: {wdata}")
        
        # Log trạng thái Bus
        dut._log.info(f"Cycle {i:3d}: Bus_Addr={hex(addr)} | Bus_Data={hex(rdata)}")

        # Kiểm tra điều kiện dừng sớm nếu PC đạt đến lệnh lặp cuối chương trình (0x50)
        try:
            curr_pc = dut.cpu.datapath.PC.value.to_unsigned()
            if curr_pc == 0x50:
                dut._log.info("Tìm thấy lệnh lặp vô hạn kết thúc tại PC = 0x50. Chủ động ngắt mô phỏng!")
                break
        except AttributeError:
            pass 

        # Kích cạnh lên clock
        await RisingEdge(dut.clk)
        await Timer(1, unit="ns")  

    # --- 5. TỰ ĐỘNG ĐÁNH GIÁ KẾT QUẢ CUỐI CÙNG (ASSERTION) ---
    dut._log.info("--------------------------------------------------")
    dut._log.info("--- ĐANG TỔNG HỢP VÀ TỰ ĐỘNG SO SÁNH KẾT QUẢ ---")
    
    # Assert sẽ ép cocotb đánh dấu bài test là FAIL nếu điều kiện không thỏa mãn
    assert sw_x7_passed, "Thất bại: CPU chưa bao giờ ghi đúng giá trị 7 vào địa chỉ 96 (lệnh sw x7)!"
    assert sw_x2_final_passed, "Thất bại: Ô nhớ kết quả cuối cùng M[100] không bằng 25!"

    dut._log.info("🎉 [SUCCESS]: TẤT CẢ CÁC PHÉP KIỂM TRA ĐỀU ĐÚNG! CPU ĐẠT CHUẨN HARRIS & HARRIS.")
    dut._log.info("Testbench hoàn thành.")