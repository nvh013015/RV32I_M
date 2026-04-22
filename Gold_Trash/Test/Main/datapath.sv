module datapath(
    input logic clk, reset,
    output logic[31:0] PC,
)
logic[31:0] PCnext, PCplus4;
logic[31:0] Immext;
regfile rf(clk, RegWrite, Instr[19:15], Instr[24:20],
                Instr[11:7], Result,SrcA,WriteData);
alu alu(SrcA,SrcB, ALUControl, ALUResult, Zero);

endmodule