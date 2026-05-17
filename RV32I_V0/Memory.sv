module Memory(
    input logic clk,
    input logic memWrite,
    input logic [31:0] mem_addr,
    input logic [31:0] mem_wdata,
    input logic [3:0] mem_wmask,
    output logic [31:0] mem_rdata
);
    logic [31:0] ram [0:1023]; // 4KB memory
    // 1. Đọc dữ liệu (Asynchronous Read)
    // mem_addr[11:2] loại bỏ 2 bit cuối vì mỗi địa chỉ trong mảng là 4 bytes (word-aligned)
    assign mem_rdata = ram[mem_addr[11:2]];

    // 2. Ghi dữ liệu (Synchronous Write với Byte Masking)
    always_ff @(posedge clk) begin
        if (memWrite) begin
            // Kiểm tra từng bit của mask để ghi đúng byte cần thiết
            if (mem_wmask[0]) ram[mem_addr[11:2]][7:0]   <= mem_wdata[7:0];
            if (mem_wmask[1]) ram[mem_addr[11:2]][15:8]  <= mem_wdata[15:8];
            if (mem_wmask[2]) ram[mem_addr[11:2]][23:16] <= mem_wdata[23:16];
            if (mem_wmask[3]) ram[mem_addr[11:2]][31:24] <= mem_wdata[31:24];
        end
    end

    // 3. Nạp chương trình từ file Hex
    initial begin
        $readmemh("program.hex", ram);
    end
endmodule