module Extender (
    input logic [31:0] imm,
    input logic [2:0] ExtOp,
    output logic [31:0] extImm
);
    always_comb begin
        case (ExtOp)
            3'b000: extImm = {{20{imm[31]}}, imm[31:20]}; // I-type
            3'b001: extImm = {{20{imm[31]}}, imm[31:25], imm[11:7]}; // S-type
            3'b010: extImm = {{20{imm[31]}}, imm[7], imm[30:25],imm [11:8], 1'b0 }; // B-type
            3'b011: extImm = {imm[31:12], 12'b0}; // U-type
            3'b100: extImm = {{12{imm[31]}}, imm[19:12], imm[20], imm[30:21], 1'b0}; // J-type
            default: extImm = 32'b0; // Default case
        endcase
    end
endmodule