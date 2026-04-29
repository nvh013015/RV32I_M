module Datapath (
    input logic clock,
    input logic reset,
    //Control Signals
    input logic [1:0] SdataSrcA,
    input logic [1:0] SdataSrcB,
    input logic [1:0] resultSrc,
    input logic IRWrite,
    input logic regWrite,
    input logic [2:0] ExtOp,
    //Instruction
    input logic [31:0] instruction,
    //Memory Data
    input logic [31:0] MemData,
    //Outputs
    output logic [31:0] PC,
    output logic [31:0] Result
);

endmodule