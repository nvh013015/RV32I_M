module SpcSrc (
    input logic clk,
    input logic PCWrite,
    input logic [31:0] newPC,
    input logic [31:0]Result,
    input logic Select,
    output logic [31:0] MemAddr
);
    logic [31:0] PC;
    always_ff @( posedge clk ) begin 
        if (PCWrite) begin
            PC <= newPC;
        end
    end

    always_comb begin 
        case (Select)
            1'b0: MemAddr = PC;
            1'b1: MemAddr = Result;
            default: MemAddr = 32'b0;
        endcase
    end
endmodule