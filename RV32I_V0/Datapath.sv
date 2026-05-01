module Datapath (
    input logic clock,
    input logic reset,
    //Control Signals
    input logic PCWrite,
    input logic AdrSrc,
    input logic MemWrite,
    input logic IRWrite,
    input logic RegWrite,
    input logic [1:0] ResultSrc,
    input logic [3:0] ALUControl,
    input logic [3:0] SdataSrc,
    input logic [2:0] ImmSrc,
    output logic [31:0] Instruction,
    
    output logic Zero,

);

    logic [31:0] ALUSrcA;
    logic [31:0] ALUSrcB;
    logic [31:0] Result;
    SdataSrc sdataSrc (
        .clock(clock),
        .newPC(PC),
        .oldPC(PC), // Assuming oldPC is the same as PC for simplicity
        .rs1(Instruction[19:15]), // Assuming rs1 is in bits [19:15]
        .rs2(Instruction[24:20]), // Assuming rs2 is in bits [24:20]
        .imm(Instruction), // Assuming imm is the entire instruction for simplicity
        .SdataSrcA(SdataSrc[3:2]),
        .SdataSrcB(SdataSrc[1:0]),
        .writeData(), // Connect to register file write data
        .ALUsrcA(ALUSrcA), // Connect to ALU source A
        .ALUsrcB(ALUSrcB)  // Connect to ALU source B

    );
    ALU alu (
        .ALUControl(ALUControl),
        .A(ALUSrcA),
        .B(ALUSrcB),
        .ALUResult(Result),
        .Zero(Zero)
    );



endmodule