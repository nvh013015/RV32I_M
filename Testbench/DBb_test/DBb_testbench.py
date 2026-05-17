import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotb.handle import Force, Release

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
        dut.alu.A.value = Force(a)
        dut.alu.B.value = Force(b)
        dut.alu.ALUControl.value = Force(ctrl)

        # Đợi logic tổ hợp ổn định
        await Timer(1, units="ns")
        
        # Lấy giá trị thực tế (Lưu ý: dùng .value.integer để so sánh hex/dec dễ dàng)
        actual = dut.alu.ALUResult.value.integer
        
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
    
    # Combo test: (Immediate, ExtOp, Expected, Name)
    test_vectors = [
        # I-type (ExtOp=0)
        (0x00000000, 0, 0x00000000, "I_ZERO"),
        (0x000000FF, 0, 0x000000FF, "I_POS"),
        (0x80000000, 0, 0xFFFFF800, "I_NEG"),
        
        # S-type (ExtOp=1)
        (0x00000000, 1, 0x00000000, "S_ZERO"),
        (0x00000F80, 1, 0x0000001F, "S_POS"),
        (0x88000000, 1, 0xFFFFFC00, "S_NEG"),
        
        # B-type (ExtOp=2)
        (0x00000000, 2, 0x00000000, "B_ZERO"),
        (0x7E00F80, 2, 0x000001FE, "B_POS"),
        (0x80000000, 2, 0xFFF00000, "B_NEG"),
        
        # U-type (ExtOp=3)
        (0x00000000, 3, 0x00000000, "U_ZERO"),
        (0x12345678, 3, 0x12345000, "U_POS"),
        (0x87654321, 3, 0x87654000, "U_NEG"),
        
        # J-type (ExtOp=4)
        (0x00000000, 4, 0x00000000, "J_ZERO"),
        (0x7FFFF000, 4, 0x0FFFFFE, "J_POS"),
        (0x80000000, 4, 0xFFF00000, "J_NEG"),
        
        # Default
        (0xFFFFFFFF, 5, 0x00000000, "DEFAULT")
    ]

    dut._log.info("--- BẮT ĐẦU KIỂM TRA EXTENDER ---")
    
    for imm, extop, exp, name in test_vectors:
        # Ép tín hiệu
        dut.extender.imm.value = Force(imm)
        dut.extender.ExtOp.value = Force(extop)

        # Đợi logic tổ hợp ổn định
        await Timer(1, units="ns")
        
        # Lấy giá trị thực tế
        actual = dut.extender.extImm.value.integer
        
        # Kiểm tra
        if actual == exp:
            dut._log.info(f"[PASS] {name:10} | Result: {hex(actual)}")
        else:
            dut._log.error(f"[FAIL] {name:10} | Imm:{hex(imm)} ExtOp:{extop}")
            dut._log.error(f"       Got: {hex(actual)}, Expected: {hex(exp)}")
            # raise AssertionError(f"Test {name} failed!")

    dut._log.info("--- HOÀN THÀNH KIỂM TRA EXTENDER ---")  

    