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
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(memWrite,0,0);
        CData/*0:0*/ rv32i_m__DOT__clk;
        CData/*0:0*/ rv32i_m__DOT__reset;
        CData/*0:0*/ rv32i_m__DOT__memWrite;
        CData/*0:0*/ rv32i_m__DOT__zero;
        CData/*0:0*/ rv32i_m__DOT__PCwrite;
        CData/*0:0*/ rv32i_m__DOT__IRwrite;
        CData/*0:0*/ rv32i_m__DOT__RegWrite;
        CData/*0:0*/ rv32i_m__DOT__AdrSrc;
        CData/*1:0*/ rv32i_m__DOT__ResultSrc;
        CData/*1:0*/ rv32i_m__DOT__ALUSrcA;
        CData/*1:0*/ rv32i_m__DOT__ALUSrcB;
        CData/*2:0*/ rv32i_m__DOT__ImmSrc;
        CData/*3:0*/ rv32i_m__DOT__ALUControl;
        CData/*3:0*/ rv32i_m__DOT__SdataSrc;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__clk;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__zero;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__PCwrite;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__MemWrite;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__IRwrite;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__RegWrite;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__AdrSrc;
        CData/*1:0*/ rv32i_m__DOT__controller__DOT__ResultSrc;
        CData/*1:0*/ rv32i_m__DOT__controller__DOT__ALUSrcA;
        CData/*1:0*/ rv32i_m__DOT__controller__DOT__ALUSrcB;
        CData/*2:0*/ rv32i_m__DOT__controller__DOT__ImmSrc;
        CData/*3:0*/ rv32i_m__DOT__controller__DOT__ALUControl;
        CData/*1:0*/ rv32i_m__DOT__controller__DOT__ALUop;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__branch;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc;
        CData/*1:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc;
        CData/*1:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA;
        CData/*1:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB;
        CData/*1:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__branch;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock;
        CData/*0:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__zero;
        CData/*6:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op;
        CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state;
        CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state;
        CData/*1:0*/ rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp;
        CData/*3:0*/ rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUControl;
        CData/*2:0*/ rv32i_m__DOT__controller__DOT__decoder__DOT__ExtOp;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__clock;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__reset;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__PCWrite;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__AdrSrc;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__MemWrite;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__IRWrite;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__RegWrite;
        CData/*1:0*/ rv32i_m__DOT__datapath__DOT__ResultSrc;
        CData/*3:0*/ rv32i_m__DOT__datapath__DOT__ALUControl;
        CData/*3:0*/ rv32i_m__DOT__datapath__DOT__SdataSrc;
        CData/*2:0*/ rv32i_m__DOT__datapath__DOT__ImmSrc;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__Zero;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__regFile__DOT__clock;
        CData/*4:0*/ rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_addr;
        CData/*4:0*/ rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_addr;
    };
    struct {
        CData/*4:0*/ rv32i_m__DOT__datapath__DOT__regFile__DOT__rd_addr;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__regFile__DOT__RegWrite;
        CData/*2:0*/ rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__reset;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__IRWrite;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PCWrite;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Select;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock;
        CData/*1:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA;
        CData/*1:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB;
        CData/*3:0*/ rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__alu__DOT__Zero;
        CData/*0:0*/ rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock;
        CData/*1:0*/ rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__regFile__DOT__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN(mem_rdata,31,0);
        VL_OUT(mem_addr,31,0);
        VL_OUT(mem_wdata,31,0);
        IData/*31:0*/ rv32i_m__DOT__mem_rdata;
        IData/*31:0*/ rv32i_m__DOT__mem_addr;
        IData/*31:0*/ rv32i_m__DOT__mem_wdata;
        IData/*31:0*/ rv32i_m__DOT__instruction;
        IData/*31:0*/ rv32i_m__DOT__controller__DOT__instruction;
        IData/*31:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__instruction;
        IData/*31:0*/ rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction;
        IData/*31:0*/ rv32i_m__DOT__controller__DOT__decoder__DOT__instruction;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__Instruction;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__MemAddr;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__MemWriteData;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__MemReadData;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__ALUResult;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__Result;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__oldPC;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__PC;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__mdr_data;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__rd1;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__rd2;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__imm;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__ALUSrcA;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__ALUSrcB;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__regFile__DOT__writeData;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_data;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_data;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__extender__DOT__imm;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__extender__DOT__extImm;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__instruction;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__PC;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__oldPC;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_instruction;
    };
    struct {
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__Data;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_Data;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__spcSrc__DOT__newPC;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Result;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PC;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__spcSrc__DOT__MemAddr;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__newPC;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__oldPC;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs1;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs2;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__imm;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__writeData;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__Data1;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__alu__DOT__A;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__alu__DOT__B;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUresult;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__MemData;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__Result;
        IData/*31:0*/ rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUout;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__FETCH = 0U;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__DECODE = 1U;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_ADR = 2U;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_READ = 3U;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_WRITEBACK = 4U;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_WRITE = 5U;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__EXECUTE_R = 6U;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALU_WRITEBACK = 7U;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__EXECUTE_I = 8U;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__JAL = 9U;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__BEQ = 0x0aU;
    static constexpr CData/*3:0*/ rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IDLE = 0x0fU;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
