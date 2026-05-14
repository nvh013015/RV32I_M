// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(274);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_rv32i_m = new VerilatedScope{this, "rv32i_m", "rv32i_m", "rv32i_m", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__controller = new VerilatedScope{this, "rv32i_m.controller", "controller", "Controller", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__controller__aluC_Generator = new VerilatedScope{this, "rv32i_m.controller.aluC_Generator", "aluC_Generator", "aluC_G", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__controller__decoder = new VerilatedScope{this, "rv32i_m.controller.decoder", "decoder", "instr_decoder", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__controller__fsm_inst = new VerilatedScope{this, "rv32i_m.controller.fsm_inst", "fsm_inst", "fsm", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__datapath = new VerilatedScope{this, "rv32i_m.datapath", "datapath", "Datapath", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__datapath__alu = new VerilatedScope{this, "rv32i_m.datapath.alu", "alu", "ALU", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__datapath__extender = new VerilatedScope{this, "rv32i_m.datapath.extender", "extender", "Extender", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__datapath__ir_mdr = new VerilatedScope{this, "rv32i_m.datapath.ir_mdr", "ir_mdr", "IR_MDR", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__datapath__regFile = new VerilatedScope{this, "rv32i_m.datapath.regFile", "regFile", "Register", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__datapath__regFile__unnamedblk1 = new VerilatedScope{this, "rv32i_m.datapath.regFile.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_rv32i_m__datapath__sResultSrc = new VerilatedScope{this, "rv32i_m.datapath.sResultSrc", "sResultSrc", "SResultSrc", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__datapath__sdataSrc = new VerilatedScope{this, "rv32i_m.datapath.sdataSrc", "sdataSrc", "SdataSrc", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_rv32i_m__datapath__spcSrc = new VerilatedScope{this, "rv32i_m.datapath.spcSrc", "spcSrc", "SpcSrc", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_rv32i_m);
    __Vhier.add(__Vscopep_rv32i_m, __Vscopep_rv32i_m__controller);
    __Vhier.add(__Vscopep_rv32i_m, __Vscopep_rv32i_m__datapath);
    __Vhier.add(__Vscopep_rv32i_m__controller, __Vscopep_rv32i_m__controller__aluC_Generator);
    __Vhier.add(__Vscopep_rv32i_m__controller, __Vscopep_rv32i_m__controller__decoder);
    __Vhier.add(__Vscopep_rv32i_m__controller, __Vscopep_rv32i_m__controller__fsm_inst);
    __Vhier.add(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__alu);
    __Vhier.add(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__extender);
    __Vhier.add(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__ir_mdr);
    __Vhier.add(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__regFile);
    __Vhier.add(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__sResultSrc);
    __Vhier.add(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__sdataSrc);
    __Vhier.add(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__spcSrc);
    __Vhier.add(__Vscopep_rv32i_m__datapath__regFile, __Vscopep_rv32i_m__datapath__regFile__unnamedblk1);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("memWrite", &(TOP.memWrite), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("mem_addr", &(TOP.mem_addr), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("mem_rdata", &(TOP.mem_rdata), false, VLVT_UINT32, VLVD_IN|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("mem_wdata", &(TOP.mem_wdata), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("reset", &(TOP.reset), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m->varInsert("ALUControl", &(TOP.rv32i_m__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m->varInsert("ALUSrcA", &(TOP.rv32i_m__DOT__ALUSrcA), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m->varInsert("ALUSrcB", &(TOP.rv32i_m__DOT__ALUSrcB), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m->varInsert("AdrSrc", &(TOP.rv32i_m__DOT__AdrSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m->varInsert("IRwrite", &(TOP.rv32i_m__DOT__IRwrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m->varInsert("ImmSrc", &(TOP.rv32i_m__DOT__ImmSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_rv32i_m->varInsert("PCwrite", &(TOP.rv32i_m__DOT__PCwrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m->varInsert("RegWrite", &(TOP.rv32i_m__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m->varInsert("ResultSrc", &(TOP.rv32i_m__DOT__ResultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m->varInsert("SdataSrc", &(TOP.rv32i_m__DOT__SdataSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m->varInsert("clk", &(TOP.rv32i_m__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m->varInsert("instruction", &(TOP.rv32i_m__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m->varInsert("memWrite", &(TOP.rv32i_m__DOT__memWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m->varInsert("mem_addr", &(TOP.rv32i_m__DOT__mem_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m->varInsert("mem_rdata", &(TOP.rv32i_m__DOT__mem_rdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m->varInsert("mem_wdata", &(TOP.rv32i_m__DOT__mem_wdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m->varInsert("reset", &(TOP.rv32i_m__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m->varInsert("zero", &(TOP.rv32i_m__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller->varInsert("ALUControl", &(TOP.rv32i_m__DOT__controller__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller->varInsert("ALUSrcA", &(TOP.rv32i_m__DOT__controller__DOT__ALUSrcA), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__controller->varInsert("ALUSrcB", &(TOP.rv32i_m__DOT__controller__DOT__ALUSrcB), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__controller->varInsert("ALUop", &(TOP.rv32i_m__DOT__controller__DOT__ALUop), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__controller->varInsert("AdrSrc", &(TOP.rv32i_m__DOT__controller__DOT__AdrSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller->varInsert("IRwrite", &(TOP.rv32i_m__DOT__controller__DOT__IRwrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller->varInsert("ImmSrc", &(TOP.rv32i_m__DOT__controller__DOT__ImmSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_rv32i_m__controller->varInsert("MemWrite", &(TOP.rv32i_m__DOT__controller__DOT__MemWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller->varInsert("PCwrite", &(TOP.rv32i_m__DOT__controller__DOT__PCwrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller->varInsert("RegWrite", &(TOP.rv32i_m__DOT__controller__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller->varInsert("ResultSrc", &(TOP.rv32i_m__DOT__controller__DOT__ResultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__controller->varInsert("branch", &(TOP.rv32i_m__DOT__controller__DOT__branch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller->varInsert("clk", &(TOP.rv32i_m__DOT__controller__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller->varInsert("instruction", &(TOP.rv32i_m__DOT__controller__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__controller->varInsert("zero", &(TOP.rv32i_m__DOT__controller__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller__aluC_Generator->varInsert("ALUControl", &(TOP.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__aluC_Generator->varInsert("ALUOp", &(TOP.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__controller__aluC_Generator->varInsert("instruction", &(TOP.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__controller__decoder->varInsert("ExtOp", &(TOP.rv32i_m__DOT__controller__DOT__decoder__DOT__ExtOp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_rv32i_m__controller__decoder->varInsert("instruction", &(TOP.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("ALUCop", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("ALUSrcA", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("ALUSrcB", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("ALU_WRITEBACK", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALU_WRITEBACK))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("AdrSrc", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("BEQ", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__BEQ))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("DECODE", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__DECODE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("EXECUTE_I", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__EXECUTE_I))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("EXECUTE_R", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__EXECUTE_R))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("FETCH", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__FETCH))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("IDLE", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IDLE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("IRWrite", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("JAL", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__JAL))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("MEM_ADR", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_ADR))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("MEM_READ", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_READ))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("MEM_WRITE", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_WRITE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("MEM_WRITEBACK", const_cast<void*>(static_cast<const void*>(&(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_WRITEBACK))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("MemWrite", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("PCWrite", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("RegWrite", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("ResultSrc", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("branch", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__branch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("clock", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("instruction", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("next_state", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("op", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,6,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("state", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__controller__fsm_inst->varInsert("zero", &(TOP.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath->varInsert("ALUControl", &(TOP.rv32i_m__DOT__datapath__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__datapath->varInsert("ALUResult", &(TOP.rv32i_m__DOT__datapath__DOT__ALUResult), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("ALUSrcA", &(TOP.rv32i_m__DOT__datapath__DOT__ALUSrcA), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("ALUSrcB", &(TOP.rv32i_m__DOT__datapath__DOT__ALUSrcB), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("AdrSrc", &(TOP.rv32i_m__DOT__datapath__DOT__AdrSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath->varInsert("IRWrite", &(TOP.rv32i_m__DOT__datapath__DOT__IRWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath->varInsert("ImmSrc", &(TOP.rv32i_m__DOT__datapath__DOT__ImmSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_rv32i_m__datapath->varInsert("Instruction", &(TOP.rv32i_m__DOT__datapath__DOT__Instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("MemAddr", &(TOP.rv32i_m__DOT__datapath__DOT__MemAddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("MemReadData", &(TOP.rv32i_m__DOT__datapath__DOT__MemReadData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("MemWrite", &(TOP.rv32i_m__DOT__datapath__DOT__MemWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath->varInsert("MemWriteData", &(TOP.rv32i_m__DOT__datapath__DOT__MemWriteData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("PC", &(TOP.rv32i_m__DOT__datapath__DOT__PC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("PCWrite", &(TOP.rv32i_m__DOT__datapath__DOT__PCWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath->varInsert("RegWrite", &(TOP.rv32i_m__DOT__datapath__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath->varInsert("Result", &(TOP.rv32i_m__DOT__datapath__DOT__Result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("ResultSrc", &(TOP.rv32i_m__DOT__datapath__DOT__ResultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__datapath->varInsert("SdataSrc", &(TOP.rv32i_m__DOT__datapath__DOT__SdataSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__datapath->varInsert("Zero", &(TOP.rv32i_m__DOT__datapath__DOT__Zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath->varInsert("clock", &(TOP.rv32i_m__DOT__datapath__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath->varInsert("imm", &(TOP.rv32i_m__DOT__datapath__DOT__imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("mdr_data", &(TOP.rv32i_m__DOT__datapath__DOT__mdr_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("oldPC", &(TOP.rv32i_m__DOT__datapath__DOT__oldPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("rd1", &(TOP.rv32i_m__DOT__datapath__DOT__rd1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("rd2", &(TOP.rv32i_m__DOT__datapath__DOT__rd2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath->varInsert("reset", &(TOP.rv32i_m__DOT__datapath__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__alu->varInsert("A", &(TOP.rv32i_m__DOT__datapath__DOT__alu__DOT__A), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__alu->varInsert("ALUControl", &(TOP.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_rv32i_m__datapath__alu->varInsert("ALUResult", &(TOP.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__alu->varInsert("B", &(TOP.rv32i_m__DOT__datapath__DOT__alu__DOT__B), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__alu->varInsert("Zero", &(TOP.rv32i_m__DOT__datapath__DOT__alu__DOT__Zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_rv32i_m__datapath__extender->varInsert("ExtOp", &(TOP.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_rv32i_m__datapath__extender->varInsert("extImm", &(TOP.rv32i_m__DOT__datapath__DOT__extender__DOT__extImm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__extender->varInsert("imm", &(TOP.rv32i_m__DOT__datapath__DOT__extender__DOT__imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__ir_mdr->varInsert("Data", &(TOP.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__Data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__ir_mdr->varInsert("IRWrite", &(TOP.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__IRWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__ir_mdr->varInsert("PC", &(TOP.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__PC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__ir_mdr->varInsert("clock", &(TOP.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__ir_mdr->varInsert("instruction", &(TOP.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__ir_mdr->varInsert("o_Data", &(TOP.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_Data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__ir_mdr->varInsert("o_instruction", &(TOP.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__ir_mdr->varInsert("oldPC", &(TOP.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__oldPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__ir_mdr->varInsert("reset", &(TOP.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__regFile->varInsert("RegWrite", &(TOP.rv32i_m__DOT__datapath__DOT__regFile__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__regFile->varInsert("clock", &(TOP.rv32i_m__DOT__datapath__DOT__regFile__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__regFile->varInsert("rd_addr", &(TOP.rv32i_m__DOT__datapath__DOT__regFile__DOT__rd_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_rv32i_m__datapath__regFile->varInsert("regFile", &(TOP.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,31,0 ,31,0);
    __Vscopep_rv32i_m__datapath__regFile->varInsert("rs1_addr", &(TOP.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_rv32i_m__datapath__regFile->varInsert("rs1_data", &(TOP.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__regFile->varInsert("rs2_addr", &(TOP.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_rv32i_m__datapath__regFile->varInsert("rs2_data", &(TOP.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__regFile->varInsert("writeData", &(TOP.rv32i_m__DOT__datapath__DOT__regFile__DOT__writeData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__regFile__unnamedblk1->varInsert("i", &(TOP.rv32i_m__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sResultSrc->varInsert("ALUout", &(TOP.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUout), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sResultSrc->varInsert("ALUresult", &(TOP.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUresult), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sResultSrc->varInsert("MemData", &(TOP.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__MemData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sResultSrc->varInsert("Result", &(TOP.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__Result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sResultSrc->varInsert("clock", &(TOP.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__sResultSrc->varInsert("resultSrc", &(TOP.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("ALUsrcA", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("ALUsrcB", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("Data1", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__Data1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("SdataSrcA", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("SdataSrcB", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("clock", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("imm", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("newPC", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__newPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("oldPC", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__oldPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("rs1", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("rs2", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__sdataSrc->varInsert("writeData", &(TOP.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__writeData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__spcSrc->varInsert("MemAddr", &(TOP.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__MemAddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__spcSrc->varInsert("PC", &(TOP.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__spcSrc->varInsert("PCWrite", &(TOP.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PCWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__spcSrc->varInsert("Result", &(TOP.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_rv32i_m__datapath__spcSrc->varInsert("Select", &(TOP.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Select), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__spcSrc->varInsert("clk", &(TOP.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_rv32i_m__datapath__spcSrc->varInsert("newPC", &(TOP.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__newPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_rv32i_m);
    __Vhier.remove(__Vscopep_rv32i_m, __Vscopep_rv32i_m__controller);
    __Vhier.remove(__Vscopep_rv32i_m, __Vscopep_rv32i_m__datapath);
    __Vhier.remove(__Vscopep_rv32i_m__controller, __Vscopep_rv32i_m__controller__aluC_Generator);
    __Vhier.remove(__Vscopep_rv32i_m__controller, __Vscopep_rv32i_m__controller__decoder);
    __Vhier.remove(__Vscopep_rv32i_m__controller, __Vscopep_rv32i_m__controller__fsm_inst);
    __Vhier.remove(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__alu);
    __Vhier.remove(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__extender);
    __Vhier.remove(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__ir_mdr);
    __Vhier.remove(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__regFile);
    __Vhier.remove(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__sResultSrc);
    __Vhier.remove(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__sdataSrc);
    __Vhier.remove(__Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath__spcSrc);
    __Vhier.remove(__Vscopep_rv32i_m__datapath__regFile, __Vscopep_rv32i_m__datapath__regFile__unnamedblk1);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m, __Vscopep_rv32i_m = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__controller, __Vscopep_rv32i_m__controller = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__controller__aluC_Generator, __Vscopep_rv32i_m__controller__aluC_Generator = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__controller__decoder, __Vscopep_rv32i_m__controller__decoder = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__controller__fsm_inst, __Vscopep_rv32i_m__controller__fsm_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__datapath, __Vscopep_rv32i_m__datapath = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__datapath__alu, __Vscopep_rv32i_m__datapath__alu = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__datapath__extender, __Vscopep_rv32i_m__datapath__extender = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__datapath__ir_mdr, __Vscopep_rv32i_m__datapath__ir_mdr = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__datapath__regFile, __Vscopep_rv32i_m__datapath__regFile = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__datapath__regFile__unnamedblk1, __Vscopep_rv32i_m__datapath__regFile__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__datapath__sResultSrc, __Vscopep_rv32i_m__datapath__sResultSrc = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__datapath__sdataSrc, __Vscopep_rv32i_m__datapath__sdataSrc = nullptr);
    VL_DO_CLEAR(delete __Vscopep_rv32i_m__datapath__spcSrc, __Vscopep_rv32i_m__datapath__spcSrc = nullptr);
    // Tear down sub module instances
}
