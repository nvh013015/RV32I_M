`timescale 1ns/1ps

module tb_alu();
    // Khai báo các tín hiệu kết nối với module ALU
    logic [3:0]  ALUControl;
    logic [31:0] A, B;
    logic [31:0] ALUResult;
    logic        Zero;

    // Khởi tạo thực thể (Instance) của ALU
    ALU dut (
        .ALUControl(ALUControl),
        .A(A),
        .B(B),
        .ALUResult(ALUResult),
        .Zero(Zero)
    );

    // Nhiệm vụ (task) để kiểm tra cho gọn code
    task check_result(input [31:0] expected, input string op_name);
        #5; // Đợi một chút cho logic tổ hợp tính toán xong
        if (ALUResult === expected) begin
            $display("[PASS] %s | A: %h, B: %h | Result: %h | Zero: %b", op_name, A, B, ALUResult, Zero);
        end else begin
            $display("[FAIL] %s | A: %h, B: %h | Expected: %h, Got: %h", op_name, A, B, expected, ALUResult);
        end
    endtask

    initial begin
        // Ghi file sóng để mở bằng GTKWave
        $dumpfile("alu_simulation.vcd");
        $dumpvars(0, tb_alu);

        $display("--- BAT DAU TEST ALU ---");

        // 1. Test ADD (0000)
        A = 32'h0000_000A; B = 32'h0000_0005; ALUControl = 4'b0000;
        check_result(32'h0000_000F, "ADD");

        // 2. Test SUB & Zero flag (0001)
        A = 32'h0000_0014; B = 32'h0000_0014; ALUControl = 4'b0001;
        check_result(32'h0000_0000, "SUB/ZERO");

        // 3. Test AND (0010)
        A = 32'hFFFF_0000; B = 32'hF0F0_F0F0; ALUControl = 4'b0010;
        check_result(32'hF0F0_0000, "AND");

        // 4. Test SLT (0111) - So sánh có dấu: -5 < 2
        A = -32'sd5; B = 32'sd2; ALUControl = 4'b0111;
        check_result(32'h0000_0001, "SLT (Signed)");

        // 5. Test SRA (1111) - Dịch phải số học (giữ dấu)
        A = 32'h8000_0000; B = 32'd4; ALUControl = 4'b1111;
        check_result(32'hF800_0000, "SRA");

        $display("--- KET THUC TEST ---");
        $finish;
    end

endmodule