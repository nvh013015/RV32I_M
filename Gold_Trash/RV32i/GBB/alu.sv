module alu(input logic[31:0] SrcA, 
        input logic[31:0] SrcB, 
        input logic[2:0]ALUControl, 
        output logic[31:0] ALUResult, 
        output logic Zero);
        always_comb begin : alu_logic
            case(ALUControl)
                3'b000:  ALUResult = SrcA + SrcB;          // ADD
                3'b001:  ALUResult = SrcA - SrcB;          // SUB
                3'b010:  ALUResult = SrcA & SrcB;          // AND
                3'b011:  ALUResult = SrcA | SrcB;          // OR
                3'b101:  ALUResult = (SrcA < SrcB) ? 1 : 0; // SLT (Set Less Than)
            default: ALUResult = 32'bx;                // Unknown
            endcase
        end
        assign Zero = (ALUResult == 32'b0);
endmodule