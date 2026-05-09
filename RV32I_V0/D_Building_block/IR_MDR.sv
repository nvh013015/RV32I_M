module IR_MDR (
    input logic reset,
    input logic clock,
    //IR
    input logic IRWrite,
    input logic [31:0] instruction,
    input logic [31:0] PC,
    output logic [31:0] oldPC,
    output logic [31:0] o_instruction,
    //MDR
    input logic [31:0] Data,
    output logic [31:0] o_Data

);
    always_ff @( posedge clock ) begin
        if (reset) begin
            o_instruction <= 32'b0;
            oldPC         <= 32'b0;
            o_Data        <= 32'b0;
        end
        else if (IRWrite) begin
            o_instruction <= instruction;
            oldPC         <= PC;
        end
        o_Data <= Data;
    end
endmodule