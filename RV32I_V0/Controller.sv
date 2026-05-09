module Controller ( 
    input logic clk,
    input logic zero,
    input logic [31:0] instruction,
    output logic PCwrite,
    output logic MemWrite,
    output logic IRwrite,
    output logic RegWrite,
    output logic AdrSrc,
    output logic [1:0] ResultSrc,
    output logic [1:0] ALUSrcA,
    output logic [1:0] ALUSrcB,
    output logic [2:0] ImmSrc,
    output logic [3:0] ALUControl
);
    logic [1:0] ALUop;
    logic branch;

    fsm fsm_inst (
        .PCWrite(PCwrite),
        .MemWrite(MemWrite),
        .IRWrite(IRwrite),
        .RegWrite(RegWrite),
        .AdrSrc(AdrSrc),
        .ResultSrc(ResultSrc),
        .ALUSrcA(ALUSrcA),
        .ALUSrcB(ALUSrcB),
        .ImmSrc(ImmSrc),
        .ALUCop(ALUop),
        .branch(branch),
        .clock(clk),
        .zero(zero),
        .instruction(instruction),
        .op(instruction[6:0])
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