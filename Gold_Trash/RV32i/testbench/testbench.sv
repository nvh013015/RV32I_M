`timescale 1ns / 1ps
module testbench();
    logic clk;
    logic reset;
    logic[31:0] WriteData, DataAdr;
    logic MemWrite;
    // instantiate device to be tested
    top dut(clk, reset, WriteData, DataAdr, MemWrite);
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, testbench);
    end
    //initialize test
    initial
        begin
            reset <= 1; #50; reset <= 0;
        end
    //generate clock to sequence tests
    always
        begin
            clk <= 1; #20; clk <=0; #20;
        end
    //finish error
    initial begin
        reset <= 1; #50; reset <= 0;

        // --- CƠ CHẾ DỪNG VÔ ĐIỀU KIỆN ---
        // Đợi 1000 đơn vị thời gian (hoặc tùy ông chỉnh)
        // Nếu sau 1000 ticks mà chưa chạm tới $finish ở dưới, nó sẽ tự ngắt tại đây.
      #1000; 
        
        $display("--------------------------------------------------");
        $display("TIMEOUT: Da het thoi gian cho phep! Tu dong dung mo phong.");
        $display("Hay kiem tra file dump.vcd de xem CPU bi ket o dau.");
        $display("--------------------------------------------------");
        $finish; 
    end
    //check results
    always@(negedge clk)
        begin
            if(MemWrite) begin
                if(DataAdr === 100 & WriteData === 25 ) begin
                    $display("Simulation Succeeded");
                    $finish; 
                end else if(DataAdr !==96) begin
                    $display("simulation failed");
                    $finish;
                end
            end
        end
endmodule