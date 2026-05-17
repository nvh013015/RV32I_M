module Controller ( 
    input logic reset,
    input logic clk,
    input logic zero,
    input logic [31:0] instruction,
    output logic PCwrite,
    output logic MemWrite,
    output logic IRwrite,
    output logic RegWrite,
    output logic AdrSrc,
    output logic [1:0] ResultSrc,
    output logic [1:0] SALUSrcA,
    output logic [1:0] SALUSrcB,
    output logic [2:0] ImmSrc,
    output logic [3:0] ALUControl
);
    logic [1:0] ALUop;
    logic branch;

    fsm fsm_inst (
        .reset(reset),
        .PCWrite(PCwrite),
        .MemWrite(MemWrite),
        .IRWrite(IRwrite),
        .RegWrite(RegWrite),
        .AdrSrc(AdrSrc),
        .ResultSrc(ResultSrc),
        .SALUSrcA(SALUSrcA),
        .SALUSrcB(SALUSrcB),
        .ALUCop(ALUop),
        .branch(branch),
        .clock(clk),
        .zero(zero),
        .instruction(instruction)
    );

    aluC_G aluC_Generator (
        .instruction(instruction),
        .ALUControl(ALUControl),
        .ALUOp(ALUop)
    );

    instr_decoder decoder  (
        .instruction(instruction),
        .ExtOp(ImmSrc)
    );

endmodule