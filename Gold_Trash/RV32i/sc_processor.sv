module riscvsingle(input logic clk,reset,
    output logic[31:0] PC,
    input logic[31:0] Instr,
    output logic MemWrite,
    output logic[31:0] ALUResult,WriteData,
    input logic [31:0] ReadData);
    logic  ALUSrc, RegWrite, Jump, Zero;
    logic[1:0] ResultSrc, ImmSrc;
    logic[2:0] ALUControl;
    
   controller c (
    Instr[6:0],    // op
    Instr[14:12],  // funct3
    Instr[30],     // funct7b5
    Zero,          // Zero
    ResultSrc,     // ResultSrc
    ALUControl,    // ALUControl
    ALUSrc,        // ALUSrc
    PCSrc,         // PCSrc
    ImmSrc,        // ImmSrc
    RegWrite,      // RegWrite
    MemWrite,      // MemWrite
    Jump           // Jump
    );

    datapath dp (
    clk,           // 1. clk
    reset,         // 2. reset
    ResultSrc,     // 3. ResultSrc
    PCSrc,         // 4. PCSrc
    ALUSrc,        // 5. ALUSrc
    RegWrite,      // 6. RegWrite
    ImmSrc,        // 7. ImmSrc
    ALUControl,    // 8. ALUControl 
    Zero,          // 9. Zero (Output)
    PC,            // 10. PC (Output)
    Instr,         // 11. Instr
    ALUResult,     // 12. ALUResult (Output)
    WriteData,     // 13. WriteData (Output) 
    ReadData       // 14. ReadData
    );
endmodule