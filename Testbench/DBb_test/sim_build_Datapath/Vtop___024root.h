// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(PCWrite,0,0);
        VL_IN8(AdrSrc,0,0);
        VL_IN8(MemWrite,0,0);
        VL_IN8(IRWrite,0,0);
        VL_IN8(RegWrite,0,0);
        VL_IN8(ResultSrc,1,0);
        VL_IN8(ALUControl,3,0);
        VL_IN8(SdataSrc,3,0);
        VL_IN8(ImmSrc,2,0);
        VL_OUT8(Zero,0,0);
        VL_OUT8(MemWriteMask,3,0);
        CData/*0:0*/ Datapath__DOT__clock;
        CData/*0:0*/ Datapath__DOT__reset;
        CData/*0:0*/ Datapath__DOT__PCWrite;
        CData/*0:0*/ Datapath__DOT__AdrSrc;
        CData/*0:0*/ Datapath__DOT__MemWrite;
        CData/*0:0*/ Datapath__DOT__IRWrite;
        CData/*0:0*/ Datapath__DOT__RegWrite;
        CData/*1:0*/ Datapath__DOT__ResultSrc;
        CData/*3:0*/ Datapath__DOT__ALUControl;
        CData/*3:0*/ Datapath__DOT__SdataSrc;
        CData/*2:0*/ Datapath__DOT__ImmSrc;
        CData/*0:0*/ Datapath__DOT__Zero;
        CData/*3:0*/ Datapath__DOT__MemWriteMask;
        CData/*0:0*/ Datapath__DOT__regFile__DOT__clock;
        CData/*0:0*/ Datapath__DOT__regFile__DOT__reset;
        CData/*4:0*/ Datapath__DOT__regFile__DOT__rs1_addr;
        CData/*4:0*/ Datapath__DOT__regFile__DOT__rs2_addr;
        CData/*4:0*/ Datapath__DOT__regFile__DOT__rd_addr;
        CData/*0:0*/ Datapath__DOT__regFile__DOT__RegWrite;
        CData/*2:0*/ Datapath__DOT__extender__DOT__ExtOp;
        CData/*0:0*/ Datapath__DOT__ir__DOT__reset;
        CData/*0:0*/ Datapath__DOT__ir__DOT__clock;
        CData/*0:0*/ Datapath__DOT__ir__DOT__IRWrite;
        CData/*0:0*/ Datapath__DOT__mdr__DOT__reset;
        CData/*0:0*/ Datapath__DOT__mdr__DOT__clock;
        CData/*2:0*/ Datapath__DOT__mdr__DOT__Which_load_comment;
        CData/*1:0*/ Datapath__DOT__mdr__DOT__What_HW_or_B;
        CData/*2:0*/ Datapath__DOT__store__DOT__WhichStore;
        CData/*1:0*/ Datapath__DOT__store__DOT__which_half_or_byte;
        CData/*3:0*/ Datapath__DOT__store__DOT__storeMask;
        CData/*0:0*/ Datapath__DOT__spcSrc__DOT__clk;
        CData/*0:0*/ Datapath__DOT__spcSrc__DOT__reset;
        CData/*0:0*/ Datapath__DOT__spcSrc__DOT__PCWrite;
        CData/*0:0*/ Datapath__DOT__spcSrc__DOT__Select;
        CData/*0:0*/ Datapath__DOT__sdataSrc__DOT__clock;
        CData/*0:0*/ Datapath__DOT__sdataSrc__DOT__reset;
        CData/*1:0*/ Datapath__DOT__sdataSrc__DOT__SdataSrcA;
        CData/*1:0*/ Datapath__DOT__sdataSrc__DOT__SdataSrcB;
        CData/*3:0*/ Datapath__DOT__alu__DOT__ALUControl;
        CData/*0:0*/ Datapath__DOT__alu__DOT__Zero;
        CData/*0:0*/ Datapath__DOT__sResultSrc__DOT__clock;
        CData/*0:0*/ Datapath__DOT__sResultSrc__DOT__reset;
        CData/*1:0*/ Datapath__DOT__sResultSrc__DOT__resultSrc;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Datapath__DOT__regFile__DOT__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Datapath__DOT__ir__DOT__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Datapath__DOT__mdr__DOT__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Datapath__DOT__spcSrc__DOT__clk__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__Datapath__DOT__sdataSrc__DOT__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Datapath__DOT__sResultSrc__DOT__clock__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_OUT(Instruction,31,0);
        VL_OUT(MemAddr,31,0);
        VL_OUT(MemWriteData,31,0);
        VL_IN(MemReadData,31,0);
        IData/*31:0*/ Datapath__DOT__Instruction;
        IData/*31:0*/ Datapath__DOT__MemAddr;
        IData/*31:0*/ Datapath__DOT__MemWriteData;
        IData/*31:0*/ Datapath__DOT__MemReadData;
        IData/*31:0*/ Datapath__DOT__ALUResult;
        IData/*31:0*/ Datapath__DOT__Result;
        IData/*31:0*/ Datapath__DOT__oldPC;
        IData/*31:0*/ Datapath__DOT__PC;
        IData/*31:0*/ Datapath__DOT__mdr_data;
        IData/*31:0*/ Datapath__DOT__rd1;
        IData/*31:0*/ Datapath__DOT__rd2;
        IData/*31:0*/ Datapath__DOT__imm;
        IData/*31:0*/ Datapath__DOT__ALUSrcA;
        IData/*31:0*/ Datapath__DOT__ALUSrcB;
        IData/*31:0*/ Datapath__DOT__regFile__DOT__writeData;
        IData/*31:0*/ Datapath__DOT__regFile__DOT__rs1_data;
        IData/*31:0*/ Datapath__DOT__regFile__DOT__rs2_data;
        IData/*31:0*/ Datapath__DOT__regFile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ Datapath__DOT__regFile__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ Datapath__DOT__extender__DOT__imm;
        IData/*31:0*/ Datapath__DOT__extender__DOT__extImm;
        IData/*31:0*/ Datapath__DOT__ir__DOT__instruction;
        IData/*31:0*/ Datapath__DOT__ir__DOT__PC;
        IData/*31:0*/ Datapath__DOT__ir__DOT__oldPC;
        IData/*31:0*/ Datapath__DOT__ir__DOT__o_instruction;
        IData/*31:0*/ Datapath__DOT__mdr__DOT__Data;
        IData/*31:0*/ Datapath__DOT__mdr__DOT__o_Data;
        IData/*31:0*/ Datapath__DOT__mdr__DOT__i_Data;
        IData/*31:0*/ Datapath__DOT__store__DOT__writeData;
        IData/*31:0*/ Datapath__DOT__store__DOT__storeData;
        IData/*31:0*/ Datapath__DOT__spcSrc__DOT__newPC;
        IData/*31:0*/ Datapath__DOT__spcSrc__DOT__Result;
        IData/*31:0*/ Datapath__DOT__spcSrc__DOT__PC;
        IData/*31:0*/ Datapath__DOT__spcSrc__DOT__MemAddr;
        IData/*31:0*/ Datapath__DOT__sdataSrc__DOT__newPC;
        IData/*31:0*/ Datapath__DOT__sdataSrc__DOT__oldPC;
        IData/*31:0*/ Datapath__DOT__sdataSrc__DOT__rs1;
        IData/*31:0*/ Datapath__DOT__sdataSrc__DOT__rs2;
        IData/*31:0*/ Datapath__DOT__sdataSrc__DOT__imm;
        IData/*31:0*/ Datapath__DOT__sdataSrc__DOT__ALUsrcA;
        IData/*31:0*/ Datapath__DOT__sdataSrc__DOT__ALUsrcB;
        IData/*31:0*/ Datapath__DOT__sdataSrc__DOT__Data1;
        IData/*31:0*/ Datapath__DOT__sdataSrc__DOT__writeData;
        IData/*31:0*/ Datapath__DOT__alu__DOT__A;
        IData/*31:0*/ Datapath__DOT__alu__DOT__B;
        IData/*31:0*/ Datapath__DOT__alu__DOT__ALUResult;
        IData/*31:0*/ Datapath__DOT__sResultSrc__DOT__ALUresult;
        IData/*31:0*/ Datapath__DOT__sResultSrc__DOT__MemData;
        IData/*31:0*/ Datapath__DOT__sResultSrc__DOT__Result;
        IData/*31:0*/ Datapath__DOT__sResultSrc__DOT__ALUout;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> Datapath__DOT__regFile__DOT__regFile;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 32>, false, IData/*31:0*/, 1> __VdlyCommitQueueDatapath__DOT__regFile__DOT__regFile;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
