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

    //Memory Interface
    output logic [31:0] MemAddr,
    output logic [31:0] MemWriteData,
    input logic [31:0] MemReadData
);

    logic [31:0] ALUResult;
    logic [31:0] Result;
    logic [31:0] oldPC;
    logic [31:0] PC;
    logic [31:0] mdr_data;
    logic [31:0] rd1;
    logic [31:0] rd2;

    RegisterFile regFile (
        .clock(clock),
        .RegWrite(RegWrite),
        .rs1(Instruction[19:15]), // Assuming rs1 is in bits [19:15]
        .rs2(Instruction[24:20]), // Assuming rs2 is in bits [24:20]
        .rd(Instruction[11:7]),   // Assuming rd is in bits [11:7]
        .writeData(Result),       // Connect to Result for writing back
        .readData1(rd1),     // Connect to ALU source A
        .readData2(rd2)      // Connect to ALU source B
    );

    logic [31:0] imm;
    Extender extender (
        .instruction(Instruction),
        .ImmSrc(ImmSrc),
        .imm(imm)
    );

    IR_MDR ir_mdr (
        .reset(reset),
        .clock(clock),
        .IRWrite(IRWrite),
        .instruction(MemReadData), // Assuming instruction is read from memory
        .PC(PC), // Assuming PC is available
        .oldPC(oldPC), // Connect to appropriate signal if needed
        .o_instruction(Instruction),
        .Data(MemReadData), // Assuming data is read from memory
        .o_Data(mdr_data) // Connect to appropriate signal if needed
    );

    SpcSrc spcSrc (
        .clk(clock),
        .PCWrite(PCWrite),
        .newPC(Result), // Assuming newPC is the ALU result for simplicity
        .PC(PC),
        .Result(Result),
        .Select(AdrSrc),
        .MemAddr(MemAddr)
    );

    SdataSrc sdataSrc (
        .clock(clock),
        .newPC(PC), // Assuming newPC is the ALU result for simplicity
        .oldPC(oldPC), // Assuming oldPC is the same as PC for simplicity
        .rs1(rd1), // Assuming rs1 is in bits [19:15]
        .rs2(rd2), // Assuming rs2 is in bits [24:20]
        .imm(imm), // Assuming imm is the extended immediate value
        .SdataSrcA(SdataSrc[3:2]),
        .SdataSrcB(SdataSrc[1:0]),
        .writeData(), // Connect to register file write data
        .ALUsrcA(ALUSrcA), // Connect to ALU source A
        .ALUsrcB(ALUSrcB)  // Connect to ALU source B

    );

    logic [31:0] ALUSrcA;
    logic [31:0] ALUSrcB;

    ALU alu (
        .ALUControl(ALUControl),
        .A(ALUSrcA),
        .B(ALUSrcB),
        .ALUResult(ALUResult),
        .Zero(Zero)
    );

    SResultSrc sResultSrc (
        .clock(clock),
        .resultSrc(ResultSrc),
        .ALUresult(ALUResult),
        .MemData(mdr_data), // Assuming memory data is available
        .Result(Result) // Connect to register file write data
    );



endmodule