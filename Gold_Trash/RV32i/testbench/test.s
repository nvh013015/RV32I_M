# riscvtest.s
# Tác giả: Sarah Harris & David Harris
# Chức năng: Kiểm tra các lệnh add, sub, and, or, slt, addi, lw, sw, beq, jal
# Kết quả mong muốn: Ghi giá trị 25 vào địa chỉ bộ nhớ 100 (0x64)

.text
.globl main

main:
    addi x2, x0, 5        # x2 = 5
    addi x3, x0, 12       # x3 = 12
    addi x7, x3, -9       # x7 = 12 - 9 = 3
    
    or   x4, x7, x2       # x4 = 3 OR 5 = 7
    and  x5, x3, x4       # x5 = 12 AND 7 = 4
    add  x5, x5, x4       # x5 = 4 + 7 = 11
    
    beq  x5, x7, end      # Nếu 11 == 3 (Sai), không nhảy
    
    slt  x4, x3, x4       # x4 = (12 < 7) ? 1 : 0  => x4 = 0
    beq  x4, x0, around   # Nếu 0 == 0 (Đúng), nhảy đến 'around'
    
    addi x5, x0, 0        # Lệnh này sẽ bị bỏ qua
    
around:
    slt  x4, x7, x2       # x4 = (3 < 5) ? 1 : 0  => x4 = 1
    add  x7, x4, x5       # x7 = 1 + 11 = 12
    sub  x7, x7, x2       # x7 = 12 - 5 = 7
    
    sw   x7, 84(x3)       # Lưu x7 vào địa chỉ (84 + 12) = 96. M[96] = 7
    lw   x2, 96(x0)       # Tải giá trị từ địa chỉ 96 vào x2. x2 = 7
    
    add  x9, x2, x5       # x9 = 7 + 11 = 18
    jal  x3, end          # Nhảy đến 'end', lưu địa chỉ quay lại (0x44) vào x3
    
    addi x2, x0, 1        # Lệnh này sẽ bị bỏ qua
    
end:
    add  x2, x2, x9       # x2 = 7 + 18 = 25
    sw   x2, 32(x3)       # Lưu x2 vào địa chỉ (32 + x3). 
                          # Vì x3 = 0x44 (68), 32 + 68 = 100. M[100] = 25

done:
    beq  x2, x2, done     # Vòng lặp vô tận để kết thúc chương trình