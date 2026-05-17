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
    Verilated::stackCheck(306);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_Top = new VerilatedScope{this, "Top", "Top", "Top", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu = new VerilatedScope{this, "Top.cpu", "cpu", "rv32i_m", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__controller = new VerilatedScope{this, "Top.cpu.controller", "controller", "Controller", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__controller__aluC_Generator = new VerilatedScope{this, "Top.cpu.controller.aluC_Generator", "aluC_Generator", "aluC_G", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__controller__decoder = new VerilatedScope{this, "Top.cpu.controller.decoder", "decoder", "instr_decoder", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__controller__fsm_inst = new VerilatedScope{this, "Top.cpu.controller.fsm_inst", "fsm_inst", "fsm", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__datapath = new VerilatedScope{this, "Top.cpu.datapath", "datapath", "Datapath", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__datapath__alu = new VerilatedScope{this, "Top.cpu.datapath.alu", "alu", "ALU", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__datapath__extender = new VerilatedScope{this, "Top.cpu.datapath.extender", "extender", "Extender", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__datapath__ir = new VerilatedScope{this, "Top.cpu.datapath.ir", "ir", "IR", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__datapath__mdr = new VerilatedScope{this, "Top.cpu.datapath.mdr", "mdr", "MDR", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__datapath__regFile = new VerilatedScope{this, "Top.cpu.datapath.regFile", "regFile", "Register", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__datapath__regFile__unnamedblk1 = new VerilatedScope{this, "Top.cpu.datapath.regFile.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_Top__cpu__datapath__regFile__unnamedblk2 = new VerilatedScope{this, "Top.cpu.datapath.regFile.unnamedblk2", "unnamedblk2", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_Top__cpu__datapath__sResultSrc = new VerilatedScope{this, "Top.cpu.datapath.sResultSrc", "sResultSrc", "SResultSrc", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__datapath__sdataSrc = new VerilatedScope{this, "Top.cpu.datapath.sdataSrc", "sdataSrc", "SdataSrc", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__datapath__spcSrc = new VerilatedScope{this, "Top.cpu.datapath.spcSrc", "spcSrc", "SpcSrc", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__cpu__datapath__store = new VerilatedScope{this, "Top.cpu.datapath.store", "store", "Store", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Top__memory = new VerilatedScope{this, "Top.memory", "memory", "Memory", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_Top);
    __Vhier.add(__Vscopep_Top, __Vscopep_Top__cpu);
    __Vhier.add(__Vscopep_Top, __Vscopep_Top__memory);
    __Vhier.add(__Vscopep_Top__cpu, __Vscopep_Top__cpu__controller);
    __Vhier.add(__Vscopep_Top__cpu, __Vscopep_Top__cpu__datapath);
    __Vhier.add(__Vscopep_Top__cpu__controller, __Vscopep_Top__cpu__controller__aluC_Generator);
    __Vhier.add(__Vscopep_Top__cpu__controller, __Vscopep_Top__cpu__controller__decoder);
    __Vhier.add(__Vscopep_Top__cpu__controller, __Vscopep_Top__cpu__controller__fsm_inst);
    __Vhier.add(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__alu);
    __Vhier.add(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__extender);
    __Vhier.add(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__ir);
    __Vhier.add(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__mdr);
    __Vhier.add(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__regFile);
    __Vhier.add(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__sResultSrc);
    __Vhier.add(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__sdataSrc);
    __Vhier.add(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__spcSrc);
    __Vhier.add(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__store);
    __Vhier.add(__Vscopep_Top__cpu__datapath__regFile, __Vscopep_Top__cpu__datapath__regFile__unnamedblk1);
    __Vhier.add(__Vscopep_Top__cpu__datapath__regFile, __Vscopep_Top__cpu__datapath__regFile__unnamedblk2);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("reset", &(TOP.reset), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top->varInsert("clk", &(TOP.Top__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top->varInsert("memWrite", &(TOP.Top__DOT__memWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top->varInsert("mem_addr", &(TOP.Top__DOT__mem_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top->varInsert("mem_rdata", &(TOP.Top__DOT__mem_rdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top->varInsert("mem_wdata", &(TOP.Top__DOT__mem_wdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top->varInsert("mem_wmask", &(TOP.Top__DOT__mem_wmask), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top->varInsert("reset", &(TOP.Top__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu->varInsert("ALUControl", &(TOP.Top__DOT__cpu__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu->varInsert("AdrSrc", &(TOP.Top__DOT__cpu__DOT__AdrSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu->varInsert("IRwrite", &(TOP.Top__DOT__cpu__DOT__IRwrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu->varInsert("ImmSrc", &(TOP.Top__DOT__cpu__DOT__ImmSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Top__cpu->varInsert("PCwrite", &(TOP.Top__DOT__cpu__DOT__PCwrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu->varInsert("RegWrite", &(TOP.Top__DOT__cpu__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu->varInsert("ResultSrc", &(TOP.Top__DOT__cpu__DOT__ResultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu->varInsert("SALUsrcA", &(TOP.Top__DOT__cpu__DOT__SALUsrcA), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu->varInsert("SALUsrcB", &(TOP.Top__DOT__cpu__DOT__SALUsrcB), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu->varInsert("clk", &(TOP.Top__DOT__cpu__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu->varInsert("instruction", &(TOP.Top__DOT__cpu__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu->varInsert("memWrite", &(TOP.Top__DOT__cpu__DOT__memWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu->varInsert("mem_addr", &(TOP.Top__DOT__cpu__DOT__mem_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu->varInsert("mem_rdata", &(TOP.Top__DOT__cpu__DOT__mem_rdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu->varInsert("mem_wdata", &(TOP.Top__DOT__cpu__DOT__mem_wdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu->varInsert("mem_wmask", &(TOP.Top__DOT__cpu__DOT__mem_wmask), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu->varInsert("reset", &(TOP.Top__DOT__cpu__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu->varInsert("zero", &(TOP.Top__DOT__cpu__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller->varInsert("ALUControl", &(TOP.Top__DOT__cpu__DOT__controller__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller->varInsert("ALUop", &(TOP.Top__DOT__cpu__DOT__controller__DOT__ALUop), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__controller->varInsert("AdrSrc", &(TOP.Top__DOT__cpu__DOT__controller__DOT__AdrSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller->varInsert("IRwrite", &(TOP.Top__DOT__cpu__DOT__controller__DOT__IRwrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller->varInsert("ImmSrc", &(TOP.Top__DOT__cpu__DOT__controller__DOT__ImmSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Top__cpu__controller->varInsert("MemWrite", &(TOP.Top__DOT__cpu__DOT__controller__DOT__MemWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller->varInsert("PCwrite", &(TOP.Top__DOT__cpu__DOT__controller__DOT__PCwrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller->varInsert("RegWrite", &(TOP.Top__DOT__cpu__DOT__controller__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller->varInsert("ResultSrc", &(TOP.Top__DOT__cpu__DOT__controller__DOT__ResultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__controller->varInsert("SALUSrcA", &(TOP.Top__DOT__cpu__DOT__controller__DOT__SALUSrcA), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__controller->varInsert("SALUSrcB", &(TOP.Top__DOT__cpu__DOT__controller__DOT__SALUSrcB), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__controller->varInsert("branch", &(TOP.Top__DOT__cpu__DOT__controller__DOT__branch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller->varInsert("clk", &(TOP.Top__DOT__cpu__DOT__controller__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller->varInsert("instruction", &(TOP.Top__DOT__cpu__DOT__controller__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__controller->varInsert("reset", &(TOP.Top__DOT__cpu__DOT__controller__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller->varInsert("zero", &(TOP.Top__DOT__cpu__DOT__controller__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller__aluC_Generator->varInsert("ALUControl", &(TOP.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__aluC_Generator->varInsert("ALUOp", &(TOP.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUOp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__controller__aluC_Generator->varInsert("instruction", &(TOP.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__controller__decoder->varInsert("ExtOp", &(TOP.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__ExtOp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Top__cpu__controller__decoder->varInsert("instruction", &(TOP.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("ALUCop", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("ALU_WRITEBACK", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALU_WRITEBACK))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("AdrSrc", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("BEQ", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__BEQ))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("DECODE", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__DECODE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("EXECUTE_I", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__EXECUTE_I))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("EXECUTE_R", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__EXECUTE_R))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("FETCH", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__FETCH))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("IDLE", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__IDLE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("INIT", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__INIT))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("IRWrite", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__IRWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("JAL", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__JAL))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("MEM_ADR", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MEM_ADR))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("MEM_READ", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MEM_READ))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("MEM_WRITE", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MEM_WRITE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("MEM_WRITEBACK", const_cast<void*>(static_cast<const void*>(&(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MEM_WRITEBACK))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("MemWrite", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MemWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("PCWrite", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("RegWrite", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("ResultSrc", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("SALUSrcA", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("SALUSrcB", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("branch", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__branch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("clock", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("instruction", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("next_state", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__next_state), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("reset", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("state", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__controller__fsm_inst->varInsert("zero", &(TOP.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath->varInsert("ALUControl", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__datapath->varInsert("ALUResult", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ALUResult), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("ALUSrcA", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ALUSrcA), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("ALUSrcB", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ALUSrcB), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("AdrSrc", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__AdrSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath->varInsert("IRWrite", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__IRWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath->varInsert("ImmSrc", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ImmSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Top__cpu__datapath->varInsert("Instruction", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__Instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("MemAddr", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__MemAddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("MemReadData", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__MemReadData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("MemWrite", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__MemWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath->varInsert("MemWriteData", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__MemWriteData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("MemWriteMask", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__MemWriteMask), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__datapath->varInsert("PC", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__PC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("PCWrite", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__PCWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath->varInsert("RegWrite", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath->varInsert("ResultSrc", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ResultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__datapath->varInsert("Result_From_ResultSrc", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__Result_From_ResultSrc), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("SALUsrcA", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__SALUsrcA), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__datapath->varInsert("SALUsrcB", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__SALUsrcB), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__datapath->varInsert("Zero", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__Zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath->varInsert("clock", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath->varInsert("imm", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("mdr_data", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__mdr_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("oldPC", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__oldPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("rd1", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__rd1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("rd2", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__rd2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath->varInsert("reset", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__alu->varInsert("A", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__alu->varInsert("ALUControl", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__datapath__alu->varInsert("ALUResult", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUResult), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__alu->varInsert("B", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__alu->varInsert("Zero", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__Zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_Top__cpu__datapath__extender->varInsert("ExtOp", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Top__cpu__datapath__extender->varInsert("extImm", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__extImm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__extender->varInsert("imm", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__ir->varInsert("IRWrite", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__IRWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__ir->varInsert("PC", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__PC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__ir->varInsert("clock", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__ir->varInsert("instruction", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__ir->varInsert("o_instruction", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__o_instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__ir->varInsert("oldPC", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__oldPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__ir->varInsert("reset", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__mdr->varInsert("Data", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__mdr->varInsert("What_HW_or_B", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__datapath__mdr->varInsert("Which_load_comment", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Top__cpu__datapath__mdr->varInsert("clock", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__mdr->varInsert("i_Data", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__mdr->varInsert("o_Data", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__o_Data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__mdr->varInsert("reset", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__regFile->varInsert("RegWrite", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__regFile->varInsert("clock", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__regFile->varInsert("rd_addr", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rd_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_Top__cpu__datapath__regFile->varInsert("regFile", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,31,0 ,31,0);
    __Vscopep_Top__cpu__datapath__regFile->varInsert("reset", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__regFile->varInsert("rs1_addr", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_Top__cpu__datapath__regFile->varInsert("rs1_data", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__regFile->varInsert("rs2_addr", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_Top__cpu__datapath__regFile->varInsert("rs2_data", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__regFile->varInsert("writeData", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__writeData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__regFile__unnamedblk1->varInsert("i", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__regFile__unnamedblk2->varInsert("i", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sResultSrc->varInsert("ALUout", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUout), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sResultSrc->varInsert("ALUresult", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUresult), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sResultSrc->varInsert("MemData", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__MemData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sResultSrc->varInsert("Result", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__Result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sResultSrc->varInsert("clock", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__sResultSrc->varInsert("reset", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__sResultSrc->varInsert("resultSrc", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__resultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("ALUsrcA", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("ALUsrcB", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("Data1", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__Data1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("SdataSrcA", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("SdataSrcB", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("clock", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("imm", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("newPC", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__newPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("oldPC", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__oldPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("reset", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("rs1", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__rs1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("rs2", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__rs2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__sdataSrc->varInsert("writeData", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__writeData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__spcSrc->varInsert("MemAddr", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__MemAddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__spcSrc->varInsert("PC", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__spcSrc->varInsert("PCWrite", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PCWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__spcSrc->varInsert("Result_From_ResultSrc", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Result_From_ResultSrc), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__spcSrc->varInsert("Select", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Select), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__spcSrc->varInsert("clk", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__spcSrc->varInsert("newPC", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__newPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__spcSrc->varInsert("reset", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__cpu__datapath__store->varInsert("WhichStore", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Top__cpu__datapath__store->varInsert("storeData", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__cpu__datapath__store->varInsert("storeMask", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeMask), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__cpu__datapath__store->varInsert("which_half_or_byte", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Top__cpu__datapath__store->varInsert("writeData", &(TOP.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__memory->varInsert("clk", &(TOP.Top__DOT__memory__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__memory->varInsert("memWrite", &(TOP.Top__DOT__memory__DOT__memWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Top__memory->varInsert("mem_addr", &(TOP.Top__DOT__memory__DOT__mem_addr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__memory->varInsert("mem_rdata", &(TOP.Top__DOT__memory__DOT__mem_rdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_Top__memory->varInsert("mem_wdata", &(TOP.Top__DOT__memory__DOT__mem_wdata), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Top__memory->varInsert("mem_wmask", &(TOP.Top__DOT__memory__DOT__mem_wmask), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Top__memory->varInsert("ram", &(TOP.Top__DOT__memory__DOT__ram), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,1023 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_Top);
    __Vhier.remove(__Vscopep_Top, __Vscopep_Top__cpu);
    __Vhier.remove(__Vscopep_Top, __Vscopep_Top__memory);
    __Vhier.remove(__Vscopep_Top__cpu, __Vscopep_Top__cpu__controller);
    __Vhier.remove(__Vscopep_Top__cpu, __Vscopep_Top__cpu__datapath);
    __Vhier.remove(__Vscopep_Top__cpu__controller, __Vscopep_Top__cpu__controller__aluC_Generator);
    __Vhier.remove(__Vscopep_Top__cpu__controller, __Vscopep_Top__cpu__controller__decoder);
    __Vhier.remove(__Vscopep_Top__cpu__controller, __Vscopep_Top__cpu__controller__fsm_inst);
    __Vhier.remove(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__alu);
    __Vhier.remove(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__extender);
    __Vhier.remove(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__ir);
    __Vhier.remove(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__mdr);
    __Vhier.remove(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__regFile);
    __Vhier.remove(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__sResultSrc);
    __Vhier.remove(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__sdataSrc);
    __Vhier.remove(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__spcSrc);
    __Vhier.remove(__Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath__store);
    __Vhier.remove(__Vscopep_Top__cpu__datapath__regFile, __Vscopep_Top__cpu__datapath__regFile__unnamedblk1);
    __Vhier.remove(__Vscopep_Top__cpu__datapath__regFile, __Vscopep_Top__cpu__datapath__regFile__unnamedblk2);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top, __Vscopep_Top = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu, __Vscopep_Top__cpu = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__controller, __Vscopep_Top__cpu__controller = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__controller__aluC_Generator, __Vscopep_Top__cpu__controller__aluC_Generator = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__controller__decoder, __Vscopep_Top__cpu__controller__decoder = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__controller__fsm_inst, __Vscopep_Top__cpu__controller__fsm_inst = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath, __Vscopep_Top__cpu__datapath = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__alu, __Vscopep_Top__cpu__datapath__alu = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__extender, __Vscopep_Top__cpu__datapath__extender = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__ir, __Vscopep_Top__cpu__datapath__ir = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__mdr, __Vscopep_Top__cpu__datapath__mdr = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__regFile, __Vscopep_Top__cpu__datapath__regFile = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__regFile__unnamedblk1, __Vscopep_Top__cpu__datapath__regFile__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__regFile__unnamedblk2, __Vscopep_Top__cpu__datapath__regFile__unnamedblk2 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__sResultSrc, __Vscopep_Top__cpu__datapath__sResultSrc = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__sdataSrc, __Vscopep_Top__cpu__datapath__sdataSrc = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__spcSrc, __Vscopep_Top__cpu__datapath__spcSrc = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__cpu__datapath__store, __Vscopep_Top__cpu__datapath__store = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Top__memory, __Vscopep_Top__memory = nullptr);
    // Tear down sub module instances
}
