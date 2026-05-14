# Thay đổi SIM từ icarus sang verilator
SIM ?= verilator
TOPLEVEL_LANG ?= verilog

RTL_DIR = $(PWD)/../RV32I_V0

# Liệt kê file nguồn
VERILOG_SOURCES += $(RTL_DIR)/rv32i_m.sv
VERILOG_SOURCES += $(RTL_DIR)/Datapath.sv
VERILOG_SOURCES += $(RTL_DIR)/Controller.sv
VERILOG_SOURCES += $(wildcard $(RTL_DIR)/C_Building_block/*.sv)
VERILOG_SOURCES += $(wildcard $(RTL_DIR)/D_Building_block/*.sv)

TOPLEVEL = rv32i_m
MODULE = maintest

# --- CẤU HÌNH RIÊNG CHO VERILATOR ---
# Verilator cần bật tính năng dump sóng nếu bạn muốn xem GTKWave
EXTRA_ARGS += --trace --trace-structs

include $(shell cocotb-config --makefiles)/Makefile.sim