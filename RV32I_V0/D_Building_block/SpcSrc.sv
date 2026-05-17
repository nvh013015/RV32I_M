module SpcSrc (
    input logic clk,
    input logic reset,
    input logic PCWrite,
    input logic [31:0] newPC,
    input logic [31:0]Result_From_ResultSrc,
    input logic Select,
    output logic [31:0] PC,
    output logic [31:0] MemAddr
);
    always_ff @( posedge clk) begin 
        if (reset) begin
            PC <= 32'b0;
        end else if (PCWrite) begin
            PC <= newPC;
        end
    end

    always_comb begin 
        case (Select)
            1'b0: MemAddr = PC;
            1'b1: MemAddr = Result_From_ResultSrc;
            default: MemAddr = 32'b0;
        endcase
    end
endmodule