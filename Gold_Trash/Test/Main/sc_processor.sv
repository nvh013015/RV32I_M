module riscvsingle(input logic clk,reset,
    output logic[31:0] PC,
    input logic[31:0] Instr,
    output logic MemWrite,
    output logic[31:0] ALUResult,WriteData,
    input logic [31:0] ReadData);
    
    datapath dp(clk, reset, PC);
endmodule