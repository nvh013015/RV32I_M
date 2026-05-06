module aluC_G (
    input logic[31:0] instruction,
    input logic[1:0] ALUOp,
    output logic[3:0] ALUControl
);
    always_comb begin
        case (ALUOp)
            2'b00: ALUControl = 4'b0000; // ADD (for load/store)
            2'b01: ALUControl = 4'b0001; // SUB (for branch)
            2'b10: begin // R-type instructions
                case (instruction[14:12]) // funct3
                    3'b000: ALUControl = (instruction[30]) ? 4'b0001 : 4'b0000; // SUB/ADD
                    3'b111: ALUControl = 4'b0010; // AND
                    3'b110: ALUControl = 4'b0011; // OR
                    3'b100: ALUControl = 4'b0100; // XOR
                    3'b001: ALUControl = 4'b0101; // SLL
                    3'b101: ALUControl = (instruction[30]) ? 4'b1111 : 4'b1101; // SRA/SRL
                    3'b010: ALUControl = 4'b0111; // SLT
                    3'b011: ALUControl = 4'b1000; // SLTU
                    default: ALUControl = 4'b0000;
                endcase
            end
            2'b11: begin // I-type instructions
                case (instruction[14:12]) // funct3
                    3'b000: ALUControl = 4'b0000; // ADDI
                    3'b111: ALUControl = 4'b0010; // ANDI
                    3'b110: ALUControl = 4'b0011; // ORI
                    3'b100: ALUControl = 4'b0100; // XORI
                    3'b001: ALUControl = 4'b0101; // SLLI
                    3'b101: ALUControl = (instruction[30]) ? 4'b1111 : 4'b1101; // SRAI/SRLI
                    3'b010: ALUControl = 4'b0111; // SLTI
                    3'b011: ALUControl = 4'b1000; // SLTIU
                    default: ALUControl = 4'b0000;
                endcase
            end
            default: ALUControl = 4'b0000;
        endcase
    end

endmodule