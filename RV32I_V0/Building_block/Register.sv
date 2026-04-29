module Register (
    input logic clock,
    input logic [4:0] rs1_addr,
    input logic [4:0] rs2_addr,
    input logic [4:0] rd_addr,
    input logic [31:0] writeData,
    input logic regWrite,
    output logic [31:0] rs1_data,
    output logic [31:0] rs2_data
);
    logic [31:0] regFile[31:0];

    initial begin
        for (int i = 0; i < 32; i++) regFile[i] = 32'b0;
    end
    
    always_ff @( posedge clock ) begin
        if (regWrite && (rd_addr != 5'b0)) begin
            regFile[rd_addr] <= writeData;
        end
    end

    always_comb begin
        rs1_data = regFile[rs1_addr];
        rs2_data = regFile[rs2_addr];
    end
endmodule