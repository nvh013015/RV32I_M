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
    Verilated::stackCheck(262);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_Datapath = new VerilatedScope{this, "Datapath", "Datapath", "Datapath", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Datapath__alu = new VerilatedScope{this, "Datapath.alu", "alu", "ALU", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Datapath__extender = new VerilatedScope{this, "Datapath.extender", "extender", "Extender", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Datapath__ir = new VerilatedScope{this, "Datapath.ir", "ir", "IR", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Datapath__mdr = new VerilatedScope{this, "Datapath.mdr", "mdr", "MDR", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Datapath__regFile = new VerilatedScope{this, "Datapath.regFile", "regFile", "Register", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Datapath__regFile__unnamedblk1 = new VerilatedScope{this, "Datapath.regFile.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_Datapath__regFile__unnamedblk2 = new VerilatedScope{this, "Datapath.regFile.unnamedblk2", "unnamedblk2", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_Datapath__sResultSrc = new VerilatedScope{this, "Datapath.sResultSrc", "sResultSrc", "SResultSrc", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Datapath__sdataSrc = new VerilatedScope{this, "Datapath.sdataSrc", "sdataSrc", "SdataSrc", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Datapath__spcSrc = new VerilatedScope{this, "Datapath.spcSrc", "spcSrc", "SpcSrc", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_Datapath__store = new VerilatedScope{this, "Datapath.store", "store", "Store", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_Datapath);
    __Vhier.add(__Vscopep_Datapath, __Vscopep_Datapath__alu);
    __Vhier.add(__Vscopep_Datapath, __Vscopep_Datapath__extender);
    __Vhier.add(__Vscopep_Datapath, __Vscopep_Datapath__ir);
    __Vhier.add(__Vscopep_Datapath, __Vscopep_Datapath__mdr);
    __Vhier.add(__Vscopep_Datapath, __Vscopep_Datapath__regFile);
    __Vhier.add(__Vscopep_Datapath, __Vscopep_Datapath__sResultSrc);
    __Vhier.add(__Vscopep_Datapath, __Vscopep_Datapath__sdataSrc);
    __Vhier.add(__Vscopep_Datapath, __Vscopep_Datapath__spcSrc);
    __Vhier.add(__Vscopep_Datapath, __Vscopep_Datapath__store);
    __Vhier.add(__Vscopep_Datapath__regFile, __Vscopep_Datapath__regFile__unnamedblk1);
    __Vhier.add(__Vscopep_Datapath__regFile, __Vscopep_Datapath__regFile__unnamedblk2);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_Datapath->varInsert("ALUControl", &(TOP.Datapath__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Datapath->varInsert("ALUResult", &(TOP.Datapath__DOT__ALUResult), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("ALUSrcA", &(TOP.Datapath__DOT__ALUSrcA), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("ALUSrcB", &(TOP.Datapath__DOT__ALUSrcB), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("AdrSrc", &(TOP.Datapath__DOT__AdrSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath->varInsert("IRWrite", &(TOP.Datapath__DOT__IRWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath->varInsert("ImmSrc", &(TOP.Datapath__DOT__ImmSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Datapath->varInsert("Instruction", &(TOP.Datapath__DOT__Instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("MemAddr", &(TOP.Datapath__DOT__MemAddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("MemReadData", &(TOP.Datapath__DOT__MemReadData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("MemWrite", &(TOP.Datapath__DOT__MemWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath->varInsert("MemWriteData", &(TOP.Datapath__DOT__MemWriteData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("MemWriteMask", &(TOP.Datapath__DOT__MemWriteMask), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Datapath->varInsert("PC", &(TOP.Datapath__DOT__PC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("PCWrite", &(TOP.Datapath__DOT__PCWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath->varInsert("RegWrite", &(TOP.Datapath__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath->varInsert("Result", &(TOP.Datapath__DOT__Result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("ResultSrc", &(TOP.Datapath__DOT__ResultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Datapath->varInsert("SdataSrc", &(TOP.Datapath__DOT__SdataSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Datapath->varInsert("Zero", &(TOP.Datapath__DOT__Zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath->varInsert("clock", &(TOP.Datapath__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath->varInsert("imm", &(TOP.Datapath__DOT__imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("mdr_data", &(TOP.Datapath__DOT__mdr_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("oldPC", &(TOP.Datapath__DOT__oldPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("rd1", &(TOP.Datapath__DOT__rd1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("rd2", &(TOP.Datapath__DOT__rd2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath->varInsert("reset", &(TOP.Datapath__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__alu->varInsert("A", &(TOP.Datapath__DOT__alu__DOT__A), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__alu->varInsert("ALUControl", &(TOP.Datapath__DOT__alu__DOT__ALUControl), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Datapath__alu->varInsert("ALUResult", &(TOP.Datapath__DOT__alu__DOT__ALUResult), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__alu->varInsert("B", &(TOP.Datapath__DOT__alu__DOT__B), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__alu->varInsert("Zero", &(TOP.Datapath__DOT__alu__DOT__Zero), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_Datapath__extender->varInsert("ExtOp", &(TOP.Datapath__DOT__extender__DOT__ExtOp), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Datapath__extender->varInsert("extImm", &(TOP.Datapath__DOT__extender__DOT__extImm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__extender->varInsert("imm", &(TOP.Datapath__DOT__extender__DOT__imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__ir->varInsert("IRWrite", &(TOP.Datapath__DOT__ir__DOT__IRWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__ir->varInsert("PC", &(TOP.Datapath__DOT__ir__DOT__PC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__ir->varInsert("clock", &(TOP.Datapath__DOT__ir__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__ir->varInsert("instruction", &(TOP.Datapath__DOT__ir__DOT__instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__ir->varInsert("o_instruction", &(TOP.Datapath__DOT__ir__DOT__o_instruction), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__ir->varInsert("oldPC", &(TOP.Datapath__DOT__ir__DOT__oldPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__ir->varInsert("reset", &(TOP.Datapath__DOT__ir__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__mdr->varInsert("Data", &(TOP.Datapath__DOT__mdr__DOT__Data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__mdr->varInsert("What_HW_or_B", &(TOP.Datapath__DOT__mdr__DOT__What_HW_or_B), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Datapath__mdr->varInsert("Which_load_comment", &(TOP.Datapath__DOT__mdr__DOT__Which_load_comment), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Datapath__mdr->varInsert("clock", &(TOP.Datapath__DOT__mdr__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__mdr->varInsert("i_Data", &(TOP.Datapath__DOT__mdr__DOT__i_Data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__mdr->varInsert("o_Data", &(TOP.Datapath__DOT__mdr__DOT__o_Data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__mdr->varInsert("reset", &(TOP.Datapath__DOT__mdr__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__regFile->varInsert("RegWrite", &(TOP.Datapath__DOT__regFile__DOT__RegWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__regFile->varInsert("clock", &(TOP.Datapath__DOT__regFile__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__regFile->varInsert("rd_addr", &(TOP.Datapath__DOT__regFile__DOT__rd_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_Datapath__regFile->varInsert("regFile", &(TOP.Datapath__DOT__regFile__DOT__regFile), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,31,0 ,31,0);
    __Vscopep_Datapath__regFile->varInsert("reset", &(TOP.Datapath__DOT__regFile__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__regFile->varInsert("rs1_addr", &(TOP.Datapath__DOT__regFile__DOT__rs1_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_Datapath__regFile->varInsert("rs1_data", &(TOP.Datapath__DOT__regFile__DOT__rs1_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__regFile->varInsert("rs2_addr", &(TOP.Datapath__DOT__regFile__DOT__rs2_addr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_Datapath__regFile->varInsert("rs2_data", &(TOP.Datapath__DOT__regFile__DOT__rs2_data), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__regFile->varInsert("writeData", &(TOP.Datapath__DOT__regFile__DOT__writeData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__regFile__unnamedblk1->varInsert("i", &(TOP.Datapath__DOT__regFile__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_Datapath__regFile__unnamedblk2->varInsert("i", &(TOP.Datapath__DOT__regFile__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_Datapath__sResultSrc->varInsert("ALUout", &(TOP.Datapath__DOT__sResultSrc__DOT__ALUout), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sResultSrc->varInsert("ALUresult", &(TOP.Datapath__DOT__sResultSrc__DOT__ALUresult), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sResultSrc->varInsert("MemData", &(TOP.Datapath__DOT__sResultSrc__DOT__MemData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sResultSrc->varInsert("Result", &(TOP.Datapath__DOT__sResultSrc__DOT__Result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sResultSrc->varInsert("clock", &(TOP.Datapath__DOT__sResultSrc__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__sResultSrc->varInsert("reset", &(TOP.Datapath__DOT__sResultSrc__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__sResultSrc->varInsert("resultSrc", &(TOP.Datapath__DOT__sResultSrc__DOT__resultSrc), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Datapath__sdataSrc->varInsert("ALUsrcA", &(TOP.Datapath__DOT__sdataSrc__DOT__ALUsrcA), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sdataSrc->varInsert("ALUsrcB", &(TOP.Datapath__DOT__sdataSrc__DOT__ALUsrcB), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sdataSrc->varInsert("Data1", &(TOP.Datapath__DOT__sdataSrc__DOT__Data1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sdataSrc->varInsert("SdataSrcA", &(TOP.Datapath__DOT__sdataSrc__DOT__SdataSrcA), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Datapath__sdataSrc->varInsert("SdataSrcB", &(TOP.Datapath__DOT__sdataSrc__DOT__SdataSrcB), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Datapath__sdataSrc->varInsert("clock", &(TOP.Datapath__DOT__sdataSrc__DOT__clock), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__sdataSrc->varInsert("imm", &(TOP.Datapath__DOT__sdataSrc__DOT__imm), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sdataSrc->varInsert("newPC", &(TOP.Datapath__DOT__sdataSrc__DOT__newPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sdataSrc->varInsert("oldPC", &(TOP.Datapath__DOT__sdataSrc__DOT__oldPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sdataSrc->varInsert("reset", &(TOP.Datapath__DOT__sdataSrc__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__sdataSrc->varInsert("rs1", &(TOP.Datapath__DOT__sdataSrc__DOT__rs1), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sdataSrc->varInsert("rs2", &(TOP.Datapath__DOT__sdataSrc__DOT__rs2), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__sdataSrc->varInsert("writeData", &(TOP.Datapath__DOT__sdataSrc__DOT__writeData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__spcSrc->varInsert("MemAddr", &(TOP.Datapath__DOT__spcSrc__DOT__MemAddr), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__spcSrc->varInsert("PC", &(TOP.Datapath__DOT__spcSrc__DOT__PC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__spcSrc->varInsert("PCWrite", &(TOP.Datapath__DOT__spcSrc__DOT__PCWrite), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__spcSrc->varInsert("Result", &(TOP.Datapath__DOT__spcSrc__DOT__Result), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__spcSrc->varInsert("Select", &(TOP.Datapath__DOT__spcSrc__DOT__Select), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__spcSrc->varInsert("clk", &(TOP.Datapath__DOT__spcSrc__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__spcSrc->varInsert("newPC", &(TOP.Datapath__DOT__spcSrc__DOT__newPC), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__spcSrc->varInsert("reset", &(TOP.Datapath__DOT__spcSrc__DOT__reset), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_Datapath__store->varInsert("WhichStore", &(TOP.Datapath__DOT__store__DOT__WhichStore), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_Datapath__store->varInsert("storeData", &(TOP.Datapath__DOT__store__DOT__storeData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_Datapath__store->varInsert("storeMask", &(TOP.Datapath__DOT__store__DOT__storeMask), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_Datapath__store->varInsert("which_half_or_byte", &(TOP.Datapath__DOT__store__DOT__which_half_or_byte), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_Datapath__store->varInsert("writeData", &(TOP.Datapath__DOT__store__DOT__writeData), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("ALUControl", &(TOP.ALUControl), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("AdrSrc", &(TOP.AdrSrc), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("IRWrite", &(TOP.IRWrite), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("ImmSrc", &(TOP.ImmSrc), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("Instruction", &(TOP.Instruction), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("MemAddr", &(TOP.MemAddr), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("MemReadData", &(TOP.MemReadData), false, VLVT_UINT32, VLVD_IN|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("MemWrite", &(TOP.MemWrite), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("MemWriteData", &(TOP.MemWriteData), false, VLVT_UINT32, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_TOP->varInsert("MemWriteMask", &(TOP.MemWriteMask), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("PCWrite", &(TOP.PCWrite), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("RegWrite", &(TOP.RegWrite), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("ResultSrc", &(TOP.ResultSrc), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("SdataSrc", &(TOP.SdataSrc), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,3,0);
    __Vscopep_TOP->varInsert("Zero", &(TOP.Zero), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("clock", &(TOP.clock), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("reset", &(TOP.reset), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_Datapath);
    __Vhier.remove(__Vscopep_Datapath, __Vscopep_Datapath__alu);
    __Vhier.remove(__Vscopep_Datapath, __Vscopep_Datapath__extender);
    __Vhier.remove(__Vscopep_Datapath, __Vscopep_Datapath__ir);
    __Vhier.remove(__Vscopep_Datapath, __Vscopep_Datapath__mdr);
    __Vhier.remove(__Vscopep_Datapath, __Vscopep_Datapath__regFile);
    __Vhier.remove(__Vscopep_Datapath, __Vscopep_Datapath__sResultSrc);
    __Vhier.remove(__Vscopep_Datapath, __Vscopep_Datapath__sdataSrc);
    __Vhier.remove(__Vscopep_Datapath, __Vscopep_Datapath__spcSrc);
    __Vhier.remove(__Vscopep_Datapath, __Vscopep_Datapath__store);
    __Vhier.remove(__Vscopep_Datapath__regFile, __Vscopep_Datapath__regFile__unnamedblk1);
    __Vhier.remove(__Vscopep_Datapath__regFile, __Vscopep_Datapath__regFile__unnamedblk2);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_Datapath, __Vscopep_Datapath = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__alu, __Vscopep_Datapath__alu = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__extender, __Vscopep_Datapath__extender = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__ir, __Vscopep_Datapath__ir = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__mdr, __Vscopep_Datapath__mdr = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__regFile, __Vscopep_Datapath__regFile = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__regFile__unnamedblk1, __Vscopep_Datapath__regFile__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__regFile__unnamedblk2, __Vscopep_Datapath__regFile__unnamedblk2 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__sResultSrc, __Vscopep_Datapath__sResultSrc = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__sdataSrc, __Vscopep_Datapath__sdataSrc = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__spcSrc, __Vscopep_Datapath__spcSrc = nullptr);
    VL_DO_CLEAR(delete __Vscopep_Datapath__store, __Vscopep_Datapath__store = nullptr);
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    // Tear down sub module instances
}
