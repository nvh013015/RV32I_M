module dmem(input logic clk, we, input logic [31:0] a, wd, output logic [31:0] rd);
    logic [31:0] RAM[0:63];

    // FIX: khởi tạo toàn bộ RAM về 0 — tránh X-state khi lw đọc ô chưa được ghi
    integer i;
    initial begin
        for (i = 0; i < 64; i = i + 1)
            RAM[i] = 32'b0;
    end

    assign rd = RAM[a[31:2]];

    always_ff @(posedge clk)
        if (we) RAM[a[31:2]] <= wd;
endmodule