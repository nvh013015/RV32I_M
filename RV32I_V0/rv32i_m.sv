module rv32i_m (
    input logic clk,
    input logic reset,
    output logic memWrite,
    input logic [31:0] mem_rdata,
    output logic [31:0] mem_addr,
    output logic [31:0] mem_wdata
);

    logic zero;
    logic [31:0] instruction;
    logic PCwrite;
    logic IRwrite;
    logic RegWrite;
    logic AdrSrc;
    logic [1:0] ResultSrc;
    logic [1:0] ALUSrcA;
    logic [1:0] ALUSrcB;
    logic [2:0] ImmSrc;
    logic [3:0] ALUControl;


Controller controller (
    .clk(clk),
    .zero(zero),
    .instruction(instruction),
    .PCwrite(PCwrite),
    .MemWrite(memWrite),
    .IRwrite(IRwrite),
    .RegWrite(RegWrite),
    .AdrSrc(AdrSrc),
    .ResultSrc(ResultSrc),
    .ALUSrcA(ALUSrcA),
    .ALUSrcB(ALUSrcB),
    .ImmSrc(ImmSrc),
    .ALUControl(ALUControl)
);

    logic [3:0] SdataSrc = {ALUSrcA, ALUSrcB};
Datapath datapath (
    .clock(clk),
    .reset(reset),
    .PCWrite(PCwrite),
    .AdrSrc(AdrSrc),
    .MemWrite(memWrite),
    .IRWrite(IRwrite),
    .RegWrite(RegWrite),
    .ResultSrc(ResultSrc),
    .ALUControl(ALUControl),
    .SdataSrc(SdataSrc),
    .ImmSrc(ImmSrc),
    .Instruction(instruction),
    .Zero(zero),
    .MemAddr(mem_addr),
    .MemWriteData(mem_wdata),
    .MemReadData(mem_rdata)

);

endmodule