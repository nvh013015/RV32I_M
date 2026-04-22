module regfile(input logic clk, 
            input logic we, 
            input logic[4:0] a1, a2 , a3 , 
            input logic[31:0] wd3 ,
            output logic[31:0] rd1, output logic[31:0] rd2);
    logic [31:0] rf [0:31];
    initial begin
        foreach(rf[i]) rf[i] = 32'b0;
    end
    always_ff @( posedge clk ) begin 
        if(we && (a3 != 5'b0)) begin rf[a3] <= wd3; end
    end

    assign rd1 = (a1 != 0) ? rf[a1] : 32'b0;
    assign rd2 = (a2 != 0) ? rf[a2] : 32'b0;
endmodule