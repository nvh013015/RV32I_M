import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

# Giả lập bộ nhớ chứa các lệnh RISC-V (mã máy hex)
# Địa chỉ 0x0: addi x1, x0, 10  (0x00a00093)
# Địa chỉ 0x4: sw x1, 100(x0)    (0x06102223)
# Địa chỉ 0x8: lw x2, 100(x0)    (0x06402103)
MEMORY = {
    0x00000000: 0x00500113, # addi x2, x0, 5
    0x00000004: 0x00C00193, # addi x3, x0, 12
    0x00000008: 0xFF718393, # addi x7, x3, -9
    0x0000000C: 0x0023E233, # or   x4, x7, x2
    0x00000010: 0x0041F2B3, # and  x5, x3, x4
    0x00000014: 0x004282B3, # add  x5, x5, x4
    0x00000018: 0x02728863, # beq  x5, x7, label
    0x0000001C: 0x0041A233, # slt  x4, x3, x4
    0x00000020: 0x00020463, # beq  x4, x0, label
    0x00000024: 0x00000293, # addi x5, x0, 0
    0x00000028: 0x0023A233, # slt  x4, x7, x2
    0x0000002C: 0x005203B3, # add  x7, x4, x5
    0x00000030: 0x402383B3, # sub  x7, x7, x2
    0x00000034: 0x0471AA23, # sw   x7, 84(x3)
    0x00000038: 0x06002103, # lw   x2, 96(x0)
    0x0000003C: 0x005104B3, # add  x9, x2, x5
    0x00000040: 0x008001EF, # jal  x3, target
    0x00000044: 0x00100113, # addi x2, x0, 1
    0x00000048: 0x00910133, # add  x2, x2, x9
    0x0000004C: 0x0221A023, # sw   x2, 32(x3)
    0x00000050: 0x00000063, # beq  x0, x0, end
}

@cocotb.test()
async def rv32i_basic_test(dut):
    """Test cơ bản cho bộ lệnh RV32I"""

    # Khởi tạo Clock 10ns (100MHz)
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Reset hệ thống
    dut.reset.value = 1
    dut.mem_rdata.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.reset.value = 0
    await RisingEdge(dut.clk)

    # Mô phỏng vòng lặp thực thi lệnh
    for i in range(200): # Tăng lên 200 chu kỳ
        await RisingEdge(dut.clk)
        
        # Cần delay một chút sau cạnh lên để tín hiệu kịp ổn định (tùy vào logic Verilog)
        await Timer(1, units="ns") 
        
        addr = dut.mem_addr.value.integer
        
        if dut.memWrite.value == 1:
            data_w = dut.mem_wdata.value.integer
            MEMORY[addr] = data_w
            dut._log.info(f"Cycle {i}: WRITE Mem[{hex(addr)}] = {hex(data_w)}")
        
        if addr in MEMORY:
            dut.mem_rdata.value = MEMORY[addr]
        else:
            # Rất quan trọng: Nếu PC nhảy đến địa chỉ lạ, ta trả về 0 để tránh lỗi
            dut.mem_rdata.value = 0 
            
        # Log thêm PC để dễ theo dõi trong terminal
        dut._log.info(f"Cycle {i}: PC_Addr={hex(addr)} | Data={hex(dut.mem_rdata.value.integer)}")

    # Kiểm tra kết quả cuối cùng (ví dụ thanh ghi x2 sau lệnh LW)
    # Lưu ý: Để truy cập tín hiệu bên trong sub-module, dùng dut.datapath.register_file...
    dut._log.info("Testbench hoàn thành.")