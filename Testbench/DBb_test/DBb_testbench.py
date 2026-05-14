import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

@cocotb.test()
async def alu_combo_test(dut):
    """Quét toàn bộ danh sách lệnh ALU với các giá trị biên"""
    
    # Định nghĩa các hằng số Control cho dễ đọc
    ADD=0; SUB=1; AND=2; OR=3; XOR=4; SLL=5; SLT=7; SLTU=8; SRL=13; SRA=15

    # Combo test: (A, B, Control, Expected, Name)
    test_vectors = [
        # --- Toán số học ---
        (10, 20, ADD, 30, "ADD_Positive"),
        (0xFFFFFFFF, 1, ADD, 0, "ADD_Overflow"), # -1 + 1 = 0
        (20, 10, SUB, 10, "SUB_Positive"),
        (10, 20, SUB, 0xFFFFFFF6, "SUB_Negative"), # 10 - 20 = -10 (0xFFFFFFF6)

        # --- Toán logic ---
        (0xF0F0F0F0, 0x0F0F0F0F, AND, 0x00000000, "AND_Logic"),
        (0xF0F0F0F0, 0x0F0F0F0F, OR,  0xFFFFFFFF, "OR_Logic"),
        (0xAAAAAAA, 0x5555555, XOR, 0xFFFFFFF, "XOR_Logic"),

        # --- Phép dịch (Shift) ---
        (0x00000001, 4, SLL, 0x00000010, "SLL_Basic"),
        (0x80000000, 1, SRL, 0x40000000, "SRL_Logical"),
        (0x80000000, 1, SRA, 0xC0000000, "SRA_Arithmetic"), # Giữ bit dấu

        # --- So sánh (Set Less Than) ---
        (0xFFFFFFFF, 0x00000001, SLT, 1, "SLT_Signed"),   # -1 < 1 (True)
        (0xFFFFFFFF, 0x00000001, SLTU, 0, "SLTU_Unsigned") # Lớn < 1 (False)
    ]

    dut._log.info("--- BẮT ĐẦU QUÉT COMBO ALU ---")
    
    for a, b, ctrl, exp, name in test_vectors:
        # Ép tín hiệu
        dut.A.value = a
        dut.B.value = b
        dut.ALUControl.value = ctrl
        
        # Đợi logic tổ hợp ổn định
        await Timer(1, units="ns")
        
        # Lấy giá trị thực tế (Lưu ý: dùng .value.integer để so sánh hex/dec dễ dàng)
        actual = dut.ALUResult.value.integer
        
        # Kiểm tra
        if actual == exp:
            dut._log.info(f"[PASS] {name:15} | Result: {hex(actual)}")
        else:
            dut._log.error(f"[FAIL] {name:15} | A:{hex(a)} B:{hex(b)} Ctrl:{ctrl}")
            dut._log.error(f"       Got: {hex(actual)}, Expected: {hex(exp)}")
            # Nếu muốn dừng ngay khi có lỗi, hãy bỏ comment dòng dưới:
            # raise AssertionError(f"Test {name} failed!")

    dut._log.info("--- HOÀN THÀNH KIỂM TRA ALU ---")
@cocotb.test()
async def Extender_test(dut):
    """Kiểm tra Extender với các giá trị biên của immediate"""
    
    # Combo test: (Immediate, Expected, Name)
    test_vectors = [
        (0x00000, 0x00000000, "Immediate_0"),          # 0
        (0x7FFFF, 0x0007FFFF, "Immediate_Positive"),   # Max positive 19-bit
        (0x80000, 0xFFF80000, "Immediate_Negative"),   # Min negative 19-bit (sign-extended)
        (0xFFFFF, 0xFFFFFFFF, "Immediate_AllOnes")     # -1 in 19-bit (sign-extended)
    ]

    dut._log.info("--- BẮT ĐẦU KIỂM TRA EXTENDER ---")
    
    for imm, exp, name in test_vectors:
        dut.Immediate.value = imm
        
        await Timer(1, units="ns")
        
        actual = dut.ExtendedImmediate.value.integer
        
        if actual == exp:
            dut._log.info(f"[PASS] {name:20} | Extended: {hex(actual)}")
        else:
            dut._log.error(f"[FAIL] {name:20} | Immediate: {hex(imm)}")
            dut._log.error(f"       Got: {hex(actual)}, Expected: {hex(exp)}")
            # raise AssertionError(f"Test {name} failed!")

    dut._log.info("--- HOÀN THÀNH KIỂM TRA EXTENDER ---")