module Memory(
    input logic clk,
    input logic memWrite,
    input logic [31:0] mem_addr,
    input logic [31:0] mem_wdata,
    output logic [31:0] mem_rdata
);
    // Khai báo mảng 4KB cho nhanh
    logic [31:0] ram [0:1023];

    // Đọc không đồng bộ: Địa chỉ tới là dữ liệu ra luôn
    assign mem_rdata = ram[mem_addr[11:2]];

    // Ghi đồng bộ: Chỉ quan tâm khi cần lưu dữ liệu
    always_ff @(posedge clk) begin
        if (memWrite) ram[mem_addr[11:2]] <= mem_wdata;
    end

    // Nạp code bằng file hex trực tiếp
    initial $readmemh("program.hex", ram);
endmodule