`timescale 1ns / 1ps
// ============================================================
// Testbench RV32I Single-Cycle — sinh dump.vcd cho GTKWave
// Kiểm tra: M[100] = 25 (pass) theo chuỗi lệnh test.s
// ============================================================
module testbench();

    // --- Port kết nối với top ---
    logic        clk;
    logic        reset;
    logic [31:0] WriteData;   // dữ liệu ghi vào DMEM
    logic [31:0] DataAdr;     // địa chỉ truy cập DMEM
    logic        MemWrite;    // tín hiệu ghi bộ nhớ

    // --- Tín hiệu nội bộ lấy từ datapath/controller để xem waveform ---
    logic [31:0] PC;          // Program Counter
    logic [31:0] Instr;       // Lệnh đang thực thi
    logic [31:0] ReadData;    // Dữ liệu đọc từ DMEM

    // --- Khởi tạo DUT ---
    top dut (
        .clk       (clk),
        .reset     (reset),
        .WriteData (WriteData),
        .DataAdr   (DataAdr),
        .MemWrite  (MemWrite)
    );

    // --- Lấy tín hiệu nội bộ bằng hierarchical reference ---
    assign PC       = dut.PC;
    assign Instr    = dut.Instr;
    assign ReadData = dut.ReadData;

    // --------------------------------------------------------
    // Dump VCD — ghi TOÀN BỘ tín hiệu của testbench + dut
    // --------------------------------------------------------
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, testbench);   // depth=0 → dump tất cả cấp
    end

    // --------------------------------------------------------
    // Clock: chu kỳ 40ns (25 MHz)
    // --------------------------------------------------------
    initial clk = 0;
    always #20 clk = ~clk;

    // --------------------------------------------------------
    // Reset: giữ HIGH 2 chu kỳ rồi thả
    // --------------------------------------------------------
    initial begin
        reset = 1;
        #50;
        reset = 0;
    end

    // --------------------------------------------------------
    // Timeout: tự dừng sau 10000ns nếu chưa pass/fail
    // --------------------------------------------------------
    initial begin
        #10000;
        $display("--------------------------------------------------");
        $display("TIMEOUT: CPU bi ket, kiem tra dump.vcd de debug.");
        $display("  PC hien tai = 0x%h", PC);
        $display("  Instr       = 0x%h", Instr);
        $display("--------------------------------------------------");
        $finish;
    end

    // --------------------------------------------------------
    // Kiểm tra kết quả tại cạnh xuống của clock
    // --------------------------------------------------------
    always @(negedge clk) begin
        if (MemWrite) begin

            // --- PASS: ghi đúng giá trị 25 vào địa chỉ 100 ---
            if (DataAdr === 32'd100 && WriteData === 32'd25) begin
                $display("==================================================");
                $display("SIMULATION SUCCEEDED!");
                $display("  M[100] = %0d (mong muon: 25)", WriteData);
                $display("  Thoi gian: %0t ns", $time);
                $display("==================================================");
                $finish;
            end

            // --- FAIL: ghi vào địa chỉ sai (bỏ qua địa chỉ trung gian 96) ---
            else if (DataAdr !== 32'd96) begin
                $display("==================================================");
                $display("SIMULATION FAILED!");
                $display("  MemWrite tai DataAdr = %0d, WriteData = %0d", DataAdr, WriteData);
                $display("  Mong muon: DataAdr=100, WriteData=25");
                $display("  Thoi gian: %0t ns", $time);
                $display("==================================================");
                $finish;
            end

        end
    end

    // --------------------------------------------------------
    // In log mỗi chu kỳ để theo dõi (bỏ comment nếu cần debug)
    // --------------------------------------------------------
    // always @(posedge clk) begin
    //     if (!reset)
    //         $display("t=%0t | PC=%h | Instr=%h | MemWrite=%b | Adr=%0d | WData=%0d",
    //                  $time, PC, Instr, MemWrite, DataAdr, WriteData);
    // end

endmodule