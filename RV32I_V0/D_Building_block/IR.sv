module IR(
    input logic reset,
    input logic clock,
    //IR
    input logic IRWrite,
    input logic [31:0] instruction,
    input logic [31:0] PC,
    output logic [31:0] oldPC,
    output logic [31:0] o_instruction
);
    always_ff @( posedge clock ) begin
        if (reset) begin
            o_instruction <= 32'b0;
            oldPC         <= 32'b0;
        end
        else if (IRWrite) begin
            o_instruction <= instruction;
            oldPC         <= PC;
        end
    end
endmodule