# --- ĐƯỜNG DẪN ---
# V_DIR hiện tại là đường dẫn tuyệt đối đến thư mục RV32I_V0
RELATIVE_V_DIR = ../../RV32I_V0
V_DIR = $(abspath $(PWD)/$(RELATIVE_V_DIR))

# --- COCOTB CONFIG ---
target ?= Datapath
SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# File nguồn chính nằm ngay trong RV32I_V0
VERILOG_SOURCES = $(V_DIR)/$(target).sv
TOPLEVEL = $(target)
MODULE = DBb_testbench

# --- THÊM ĐƯỜNG DẪN THƯ MỤC CON ---
# Thêm -I kèm đường dẫn đến D_Building_block để Verilator tự tìm module con
COMPILE_ARGS += -I$(V_DIR)/D_Building_block

# Các tham số bổ trợ
COMPILE_ARGS += --public-flat-rw --trace --trace-structs --timescale 1ns/1ps
SIM_BUILD = sim_build_$(target)

# --- DEBUG ---
$(info ---------------------------------------------------)
$(info [DEBUG] File Top: $(VERILOG_SOURCES))
$(info [DEBUG] Thư mục linh kiện con: $(V_DIR)/D_Building_block)
$(if $(wildcard $(VERILOG_SOURCES)),$(info [STATUS] => THẤY FILE TOP),$(error [ERROR] => KHÔNG THẤY FILE TOP!))
$(info ---------------------------------------------------)

include $(shell cocotb-config --makefiles)/Makefile.sim