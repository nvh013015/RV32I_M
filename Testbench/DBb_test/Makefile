# --- ĐƯỜNG DẪN DỰA TRÊN CẤY THƯ MỤC CỦA BẠN ---
# Lùi 2 cấp từ DBb_test để ra thư mục gốc, rồi vào RV32I_V0
RELATIVE_V_DIR = ../../RV32I_V0/D_Building_block

# Chuyển thành đường dẫn tuyệt đối để tránh lỗi Verilator
V_DIR = $(abspath $(PWD)/$(RELATIVE_V_DIR))

# Thiết lập Target (Mặc định là ALU)
target ?= ALU

# --- COCOTB CONFIG ---
SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# QUAN TRỌNG: Chỉ định file nguồn
VERILOG_SOURCES = $(V_DIR)/$(target).sv
TOPLEVEL = $(target)

# Chỉnh lại tên file python cho đúng với ảnh của bạn
MODULE = DBb_testbench

# --- VERILATOR ARGS ---
COMPILE_ARGS += --public-flat-rw --trace --trace-structs --timescale 1ns/1ps

# --- DÒNG DEBUG (Kiểm tra xem file có tồn tại không) ---
$(info ---------------------------------------------------)
$(info Đang tìm file: $(VERILOG_SOURCES))
$(if $(wildcard $(VERILOG_SOURCES)),$(info => STATUS: THẤY FILE),$(error => STATUS: KHÔNG THẤY FILE. Kiểm tra lại đường dẫn!))
$(info ---------------------------------------------------)

include $(shell cocotb-config --makefiles)/Makefile.sim