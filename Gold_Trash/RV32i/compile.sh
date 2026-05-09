#!/bin/bash

# Gom tất cả file .sv ở thư mục gốc, thư mục GBB, Top và testbench
# Shell sẽ tự động bung các dấu * thành danh sách file thực tế
iverilog -g2012 -o simulation.vvp \
    *.sv \
    GBB/*.sv \
    Top/*.sv \
    testbench/*.sv

# Kiểm tra nếu biên dịch thành công thì chạy mô phỏng
if [ $? -eq 0 ]; then
    echo "Biên dịch thành công, đang chạy vvp..."
    vvp simulation.vvp
else
    echo "Biên dịch thất bại!"
fi