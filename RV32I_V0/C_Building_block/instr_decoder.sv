module instr_decoder (
    input logic [31:0] instruction,
    output logic [2:0] ExtOp
);
    always_comb begin
        case (instruction[6:0])
            7'b0000011,7'b0010011,7'b1100111: ExtOp = 3'b000; // I type
            7'b0100011: ExtOp = 3'b001; // S type
            7'b1100011: ExtOp = 3'b010; // B type
            7'b1101111: ExtOp = 3'b100; // J type
            7'b0110111,7'b0010111: ExtOp = 3'b011; // U type
            default:    ExtOp = 3'b111; // Default case
        endcase
    end
endmodule   