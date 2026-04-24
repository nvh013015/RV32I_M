module ALU (
    input logic[3:0] ALUControl,
    input logic[31:0] A,
    input logic[31:0] B,
    output logic[31:0] ALUResult
);
    always_comb begin : blockName
        case (ALUControl)
            4'b0000: ALUResult = A + B;          // ADD
            4'b0001: ALUResult = A - B;          // SUB
            4'b0010: ALUResult = A & B;          // AND
            4'b0011: ALUResult = A | B;          // OR
            4'b0100: ALUResult = A ^ B;          // XOR (Đã sửa từ 0111 thành 0100 để tránh trùng)
            4'b0101: ALUResult = A << B[4:0];    // SLL (Dịch trái logic)
            4'b1101: ALUResult = A >> B[4:0];    // SRL (Dịch phải logic)
            4'b1111: ALUResult = $signed(A) >>> B[4:0]; // SRA (Dịch phải số học)
        
            // SLT: Trả về 1 nếu A < B (có dấu)
            4'b0111: ALUResult = ($signed(A) < $signed(B)) ? 32'b1 : 32'b0;
        
            // SLTU: Trả về 1 nếu A < B (không dấu)
            4'b1000: ALUResult = (A < B) ? 32'b1 : 32'b0;

            default: ALUResult = 32'b0;   
        endcase
    end

endmodule
