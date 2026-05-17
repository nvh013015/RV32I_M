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
    input logic [1:0] SALUsrcA,
    input logic [1:0] SALUsrcB,
    input logic [2:0] ImmSrc,
    output logic [31:0] Instruction,
    
    output logic Zero,

    //Memory Interface
    output logic [31:0] MemAddr,
    output logic [31:0] MemWriteData,
    output logic [3:0] MemWriteMask,
    input logic [31:0] MemReadData
);

    logic [31:0] ALUResult;
    logic [31:0] Result_From_ResultSrc;
    logic [31:0] oldPC;
    logic [31:0] PC;
    logic [31:0] mdr_data;
    logic [31:0] rd1;
    logic [31:0] rd2;

    Register regFile (
        .reset(reset),
        .clock(clock),
        .RegWrite(RegWrite),
        .rs1_addr(Instruction[19:15]), // Assuming rs1 is in bits [19:15]
        .rs2_addr(Instruction[24:20]), // Assuming rs2 is in bits [24:20]
        .rd_addr(Instruction[11:7]),   // Assuming rd is in bits [11:7]
        .writeData(Result_From_ResultSrc),       // Connect to Result for writing back
        .rs1_data(rd1),     // Connect to ALU source A
        .rs2_data(rd2)      // Connect to ALU source B
    );

    logic [31:0] imm;
    Extender extender (
        .ExtOp(ImmSrc),
        .imm(Instruction),
        .extImm(imm)
    );

    IR ir (
        .reset(reset),
        .clock(clock),
        .IRWrite(IRWrite),
        .instruction(MemReadData), // Assuming instruction is read from memory
        .PC(PC), // Assuming PC is available
        .oldPC(oldPC), // Connect to appropriate signal if needed
        .o_instruction(Instruction)
    );

    MDR mdr (
        .reset(reset),
        .clock(clock),
        .Which_load_comment(Instruction[14:12]), // Assuming funct3 is in bits [14:12]
        .What_HW_or_B(Instruction[1:0]), // Assuming the least significant 2 bits of funct3 determine the half-word or byte selection
        .Data(MemReadData), // Connect to memory read data
        .o_Data(mdr_data) // Connect to appropriate signal for use in SResultSrc
    );

    Store store (
        .writeData(rd2), // Connect to rs2 data from register file
        .WhichStore(Instruction[14:12]), // Assuming funct3 is in bits [14:12]
        .which_half_or_byte(Instruction[1:0]), // Assuming the least significant 2 bits of funct3 determine the half-word or byte selection
        .storeData(MemWriteData), // Connect to memory write data
        .storeMask(MemWriteMask) // Connect to appropriate signal if needed for memory write mask
    );

    SpcSrc spcSrc (
        .reset(reset),
        .clk(clock),
        .PCWrite(PCWrite),
        .newPC(Result_From_ResultSrc), // Assuming newPC is the ALU result for simplicity
        .PC(PC),
        .Result_From_ResultSrc(Result_From_ResultSrc),
        .Select(AdrSrc),
        .MemAddr(MemAddr)
    );

    SdataSrc sdataSrc (
        .reset(reset),
        .clock(clock),
        .newPC(PC), // Assuming newPC is the ALU result for simplicity
        .oldPC(oldPC), // Assuming oldPC is the same as PC for simplicity
        .rs1(rd1), // Assuming rs1 is in bits [19:15]
        .rs2(rd2), // Assuming rs2 is in bits [24:20]
        .imm(imm), // Assuming imm is the extended immediate value
        .SdataSrcA(SALUsrcA),
        .SdataSrcB(SALUsrcB),
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
        .reset(reset),
        .clock(clock),
        .resultSrc(ResultSrc),
        .ALUresult(ALUResult),
        .MemData(mdr_data), // Assuming memory data is available
        .Result(Result_From_ResultSrc) // Connect to register file write data
    );



endmodule