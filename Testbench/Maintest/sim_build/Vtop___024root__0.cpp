// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    // Body
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 0U;
    vlSelfRef.rv32i_m__DOT__reset = vlSelfRef.reset;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWriteData 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__writeData;
    vlSelfRef.rv32i_m__DOT__mem_rdata = vlSelfRef.mem_rdata;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 0U;
    vlSelfRef.rv32i_m__DOT__clk = vlSelfRef.clk;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite = 1U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
            vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite = 1U;
                }
            }
        }
    }
    vlSelfRef.rv32i_m__DOT__datapath__DOT__mdr_data 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_Data;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__oldPC = vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__oldPC;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__PC = vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PC;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__SdataSrc 
        = vlSelfRef.rv32i_m__DOT__SdataSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_instruction;
    if ((8U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__branch = 1U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 0U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 2U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 2U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 1U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
            } else {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 1U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 2U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 2U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 1U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
                }
            }
        }
        vlSelfRef.rv32i_m__DOT__controller__DOT__branch 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__branch;
        vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcB 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB;
        vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcA 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__reset 
            = vlSelfRef.rv32i_m__DOT__reset;
        vlSelfRef.rv32i_m__DOT__mem_wdata = vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWriteData;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__MemReadData 
            = vlSelfRef.rv32i_m__DOT__mem_rdata;
        vlSelfRef.rv32i_m__DOT__controller__DOT__RegWrite 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite;
        vlSelfRef.rv32i_m__DOT__controller__DOT__IRwrite 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite;
        vlSelfRef.rv32i_m__DOT__controller__DOT__MemWrite 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite;
        vlSelfRef.rv32i_m__DOT__controller__DOT__PCwrite 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite;
        vlSelfRef.rv32i_m__DOT__controller__DOT__clk 
            = vlSelfRef.rv32i_m__DOT__clk;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__clock 
            = vlSelfRef.rv32i_m__DOT__clk;
        vlSelfRef.rv32i_m__DOT__controller__DOT__AdrSrc 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__MemData 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__mdr_data;
        vlSelfRef.rv32i_m__DOT__controller__DOT__ResultSrc 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__oldPC 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__oldPC;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__PC 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__PC;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__newPC 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__PC;
    } else {
        vlSelfRef.rv32i_m__DOT__controller__DOT__branch 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__branch;
        if ((4U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 0U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 2U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 2U;
                }
                if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 2U;
                }
            } else {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc 
                    = ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                        ? 0U : 1U);
            }
        } else if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 1U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 2U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
            }
            if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
            }
        } else {
            if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 1U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 1U;
            } else {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 2U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 2U;
            }
            vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
        }
        vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcB 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB;
        vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcA 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__reset 
            = vlSelfRef.rv32i_m__DOT__reset;
        vlSelfRef.rv32i_m__DOT__mem_wdata = vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWriteData;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__MemReadData 
            = vlSelfRef.rv32i_m__DOT__mem_rdata;
        vlSelfRef.rv32i_m__DOT__controller__DOT__RegWrite 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite;
        vlSelfRef.rv32i_m__DOT__controller__DOT__IRwrite 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite;
        vlSelfRef.rv32i_m__DOT__controller__DOT__MemWrite 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite;
        if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 1U;
                }
            }
        }
        vlSelfRef.rv32i_m__DOT__controller__DOT__PCwrite 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite;
        vlSelfRef.rv32i_m__DOT__controller__DOT__clk 
            = vlSelfRef.rv32i_m__DOT__clk;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__clock 
            = vlSelfRef.rv32i_m__DOT__clk;
        vlSelfRef.rv32i_m__DOT__controller__DOT__AdrSrc 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__MemData 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__mdr_data;
        vlSelfRef.rv32i_m__DOT__controller__DOT__ResultSrc 
            = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__oldPC 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__oldPC;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__PC 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__PC;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__newPC 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__PC;
    }
    vlSelfRef.rv32i_m__DOT__controller__DOT__ALUop 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB 
        = (3U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__SdataSrc));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA 
        = (3U & ((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__SdataSrc) 
                 >> 2U));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rd_addr 
        = (0x0000001fU & (vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction 
                          >> 7U));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_addr 
        = (0x0000001fU & (vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction 
                          >> 0x0000000fU));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_addr 
        = (0x0000001fU & (vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction 
                          >> 0x00000014U));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction;
    vlSelfRef.rv32i_m__DOT__instruction = vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction;
    vlSelfRef.rv32i_m__DOT__ALUSrcB = vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcB;
    vlSelfRef.rv32i_m__DOT__ALUSrcA = vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcA;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__reset 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__reset;
    vlSelfRef.mem_wdata = vlSelfRef.rv32i_m__DOT__mem_wdata;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__instruction 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__MemReadData;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__Data 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__MemReadData;
    vlSelfRef.rv32i_m__DOT__RegWrite = vlSelfRef.rv32i_m__DOT__controller__DOT__RegWrite;
    vlSelfRef.rv32i_m__DOT__IRwrite = vlSelfRef.rv32i_m__DOT__controller__DOT__IRwrite;
    vlSelfRef.rv32i_m__DOT__memWrite = vlSelfRef.rv32i_m__DOT__controller__DOT__MemWrite;
    vlSelfRef.rv32i_m__DOT__PCwrite = vlSelfRef.rv32i_m__DOT__controller__DOT__PCwrite;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__clk;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__clock 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__clock;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__clock;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__clock;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__clock;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__clock;
    vlSelfRef.rv32i_m__DOT__AdrSrc = vlSelfRef.rv32i_m__DOT__controller__DOT__AdrSrc;
    vlSelfRef.rv32i_m__DOT__ResultSrc = vlSelfRef.rv32i_m__DOT__controller__DOT__ResultSrc;
    vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__ALUop;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA 
        = ((0U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA))
            ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__newPC
            : ((1U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA))
                ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__oldPC
                : (vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__Data1 
                   & (- (IData)((2U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA)))))));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_data 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_addr];
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_data 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_addr];
    vlSelfRef.rv32i_m__DOT__controller__DOT__instruction 
        = vlSelfRef.rv32i_m__DOT__instruction;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__RegWrite 
        = vlSelfRef.rv32i_m__DOT__RegWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__IRWrite 
        = vlSelfRef.rv32i_m__DOT__IRwrite;
    vlSelfRef.memWrite = vlSelfRef.rv32i_m__DOT__memWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWrite 
        = vlSelfRef.rv32i_m__DOT__memWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__PCWrite 
        = vlSelfRef.rv32i_m__DOT__PCwrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__AdrSrc = vlSelfRef.rv32i_m__DOT__AdrSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ResultSrc 
        = vlSelfRef.rv32i_m__DOT__ResultSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcA 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__rd1 = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_data;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__rd2 = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_data;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__instruction 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__instruction;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op 
        = (0x0000007fU & vlSelfRef.rv32i_m__DOT__controller__DOT__instruction);
    if ((8U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state = 0x0fU;
        } else if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state = 0x0fU;
            }
        } else {
            vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state = 7U;
        }
    } else {
        vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state 
            = ((4U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                ? ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                    ? ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                        ? 0U : 7U) : 0U) : ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                                                 ? 4U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                  ? 3U
                                                  : 
                                                 ((0x23U 
                                                   == (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                   ? 5U
                                                   : 0U)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                                                 ? 
                                                ((0x00000040U 
                                                  & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                  ? 
                                                 ((0x00000020U 
                                                   & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 9U
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 0x0aU
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 
                                                 ((0x00000020U 
                                                   & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 6U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 8U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))))
                                                 : 1U)));
    }
    vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__instruction;
    vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__instruction;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__RegWrite 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__RegWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__IRWrite 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__IRWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PCWrite 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__PCWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Select 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__AdrSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ResultSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcA;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs1 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__rd1;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs2 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__rd2;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (0x0000000fU 
                                                & ((0x00002000U 
                                                    & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   ((0x00001000U 
                                                     & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                     ? 
                                                    (0x0dU 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                                      >> 0x0000001eU)))))
                                                     : 4U)));
    __VdfgRegularize_h6e95ff9d_0_0 = (7U & ((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                            >> 1U))))) 
                                            | (- (IData)(
                                                         (1U 
                                                          & (~ vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction))))));
    __VdfgRegularize_h6e95ff9d_0_10 = (7U & (3U | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)))) 
                                                   | (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                                     >> 1U))))))));
    vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUControl 
        = ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))
            ? ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))
                ? ((0x00004000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                    : ((0x00002000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                        ? ((0x00001000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                            ? 8U : 7U) : (5U & (- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                              >> 0x0000000cU)))))))
                : ((0x00004000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                    : ((0x00002000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                        ? ((0x00001000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                            ? 8U : 7U) : ((0x00001000U 
                                           & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                           ? 5U : (1U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                                    >> 0x0000001eU)))))))))
            : (1U & (- (IData)((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))))));
    vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__ExtOp 
        = (7U & ((0x00000040U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                  ? ((- (IData)((1U & (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                       >> 4U)))) | 
                     (((8U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                        ? (4U | ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                 | (- (IData)((1U & 
                                               (~ (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                   >> 2U)))))))
                        : ((4U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_0)
                            : (2U | ((- (IData)((1U 
                                                 & (~ vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)))) 
                                     | (- (IData)((1U 
                                                   & (~ 
                                                      (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                       >> 1U))))))))) 
                      | (- (IData)((1U & (~ (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                             >> 5U)))))))
                  : ((0x00000020U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                      ? ((0x00000010U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                          ? ((IData)(__VdfgRegularize_h6e95ff9d_0_10) 
                             | ((- (IData)((1U & (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 3U)))) 
                                | (- (IData)((1U & 
                                              (~ (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 2U)))))))
                          : (1U | ((- (IData)((1U & 
                                               (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                >> 2U)))) 
                                   | ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                      | (- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                       >> 3U))))))))
                      : ((0x00000010U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                          ? (((4U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                               ? (IData)(__VdfgRegularize_h6e95ff9d_0_10)
                               : (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
                             | (- (IData)((1U & (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                 >> 3U)))))
                          : ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                             | ((- (IData)((1U & (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 3U)))) 
                                | (- (IData)((1U & 
                                              (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                               >> 2U))))))))));
    vlSelfRef.rv32i_m__DOT__controller__DOT__ALUControl 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUControl;
    vlSelfRef.rv32i_m__DOT__controller__DOT__ImmSrc 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__ExtOp;
    vlSelfRef.rv32i_m__DOT__ALUControl = vlSelfRef.rv32i_m__DOT__controller__DOT__ALUControl;
    vlSelfRef.rv32i_m__DOT__ImmSrc = vlSelfRef.rv32i_m__DOT__controller__DOT__ImmSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUControl 
        = vlSelfRef.rv32i_m__DOT__ALUControl;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ImmSrc = vlSelfRef.rv32i_m__DOT__ImmSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUControl;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ImmSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__extImm 
        = ((4U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp))
            ? ((- (IData)((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp))))) 
               & ((((- (IData)((vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x00000014U) 
                   | ((((0x000001feU & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                        >> 0x0000000bU)) 
                        | (1U & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                 >> 0x00000014U))) 
                       << 0x0000000bU) | (0x000007feU 
                                          & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)))) 
                  & (- (IData)((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp) 
                                         >> 1U)))))))
            : ((2U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp))
                ? ((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp))
                    ? (0xfffff000U & vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm)
                    : (((- (IData)((vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                    >> 0x0000001fU))) 
                        << 0x0000000cU) | ((0x00000800U 
                                            & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                               << 4U)) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                                  >> 0x00000014U)) 
                                              | (0x0000001eU 
                                                 & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                                    >> 7U))))))
                : (((- (IData)((vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x0000000cU) 
                   | (0x00000fffU & ((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp))
                                      ? ((0x00000fe0U 
                                          & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                               >> 7U)))
                                      : (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                         >> 0x00000014U))))));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__imm = vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__extImm;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__imm 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__imm;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB 
        = ((0U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB))
            ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__writeData
            : ((1U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB))
                ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__imm
                : (4U & (- (IData)((2U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB)))))));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcB 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcB;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult 
        = ((8U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
            ? ((4U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                ? ((2U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? (VL_SHIFTRS_III(32,32,5, vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A, 
                                      (0x0000001fU 
                                       & vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)) 
                       & (- (IData)((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl)))))
                    : ((vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                        >> (0x0000001fU & vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)) 
                       & (- (IData)((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))))))
                : (1U & (- (IData)((IData)(((0U == 
                                             (3U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))) 
                                            & (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                                               < vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)))))))
            : ((4U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                ? ((2U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? (1U & (- (IData)(((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl) 
                                        & VL_LTS_III(32, vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A, vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)))))
                    : ((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           << (0x0000001fU & vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B))
                        : (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           ^ vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)))
                : ((2U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? ((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           | vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)
                        : (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           & vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B))
                    : ((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           - vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)
                        : (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           + vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)))));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__Zero 
        = (0U == vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult);
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUResult 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__Zero = vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__Zero;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUresult 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUResult;
    vlSelfRef.rv32i_m__DOT__zero = vlSelfRef.rv32i_m__DOT__datapath__DOT__Zero;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__Result 
        = ((0U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc))
            ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUout
            : ((1U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc))
                ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__MemData
                : (vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUresult 
                   & (- (IData)((2U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc)))))));
    vlSelfRef.rv32i_m__DOT__controller__DOT__zero = vlSelfRef.rv32i_m__DOT__zero;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__Result = vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__Result;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__zero 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__zero;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__writeData 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__Result;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__newPC 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__Result;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Result 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__Result;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__MemAddr 
        = ((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Select)
            ? vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Result
            : vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PC);
    vlSelfRef.rv32i_m__DOT__datapath__DOT__MemAddr 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__MemAddr;
    vlSelfRef.rv32i_m__DOT__mem_addr = vlSelfRef.rv32i_m__DOT__datapath__DOT__MemAddr;
    vlSelfRef.mem_addr = vlSelfRef.rv32i_m__DOT__mem_addr;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock__0))) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock__0))) 
                                                         << 4U)) 
                                                     | (((((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk__0))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock__0))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__clock) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__regFile__DOT__clock__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock__0 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__regFile__DOT__clock__0 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock__0 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk__0 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock__0 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock__0 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock;
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0;
    __VdlyVal__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0 = 0;
    CData/*4:0*/ __VdlyDim0__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0;
    __VdlyDim0__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0 = 0;
    CData/*0:0*/ __VdlySet__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0;
    __VdlySet__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0 = 0;
    // Body
    __VdlySet__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0 = 0U;
    if (((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__RegWrite) 
         & (0U != (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rd_addr)))) {
        __VdlyVal__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__writeData;
        __VdlyDim0__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rd_addr;
        __VdlySet__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0 = 1U;
    }
    if (__VdlySet__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0) {
        vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[__VdlyDim0__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0] 
            = __VdlyVal__rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile__v0;
    }
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    // Body
    if (vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__reset) {
        vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_Data = 0U;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__oldPC = 0U;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_instruction = 0U;
    } else if (vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__IRWrite) {
        vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__oldPC 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__PC;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_instruction 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__instruction;
    }
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_Data 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__Data;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__mdr_data 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_Data;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__oldPC = vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__oldPC;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_instruction;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__MemData 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__mdr_data;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__oldPC 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__oldPC;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rd_addr 
        = (0x0000001fU & (vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction 
                          >> 7U));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_addr 
        = (0x0000001fU & (vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction 
                          >> 0x0000000fU));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_addr 
        = (0x0000001fU & (vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction 
                          >> 0x00000014U));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction;
    vlSelfRef.rv32i_m__DOT__instruction = vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction;
    vlSelfRef.rv32i_m__DOT__controller__DOT__instruction 
        = vlSelfRef.rv32i_m__DOT__instruction;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__instruction 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__instruction;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op 
        = (0x0000007fU & vlSelfRef.rv32i_m__DOT__controller__DOT__instruction);
    vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__instruction;
    vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__instruction;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (0x0000000fU 
                                                & ((0x00002000U 
                                                    & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   ((0x00001000U 
                                                     & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                     ? 
                                                    (0x0dU 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                                      >> 0x0000001eU)))))
                                                     : 4U)));
    __VdfgRegularize_h6e95ff9d_0_0 = (7U & ((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                            >> 1U))))) 
                                            | (- (IData)(
                                                         (1U 
                                                          & (~ vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction))))));
    __VdfgRegularize_h6e95ff9d_0_10 = (7U & (3U | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)))) 
                                                   | (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                                     >> 1U))))))));
    vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__ExtOp 
        = (7U & ((0x00000040U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                  ? ((- (IData)((1U & (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                       >> 4U)))) | 
                     (((8U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                        ? (4U | ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                 | (- (IData)((1U & 
                                               (~ (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                   >> 2U)))))))
                        : ((4U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_0)
                            : (2U | ((- (IData)((1U 
                                                 & (~ vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)))) 
                                     | (- (IData)((1U 
                                                   & (~ 
                                                      (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                       >> 1U))))))))) 
                      | (- (IData)((1U & (~ (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                             >> 5U)))))))
                  : ((0x00000020U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                      ? ((0x00000010U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                          ? ((IData)(__VdfgRegularize_h6e95ff9d_0_10) 
                             | ((- (IData)((1U & (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 3U)))) 
                                | (- (IData)((1U & 
                                              (~ (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 2U)))))))
                          : (1U | ((- (IData)((1U & 
                                               (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                >> 2U)))) 
                                   | ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                      | (- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                       >> 3U))))))))
                      : ((0x00000010U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                          ? (((4U & vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction)
                               ? (IData)(__VdfgRegularize_h6e95ff9d_0_10)
                               : (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
                             | (- (IData)((1U & (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                 >> 3U)))))
                          : ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                             | ((- (IData)((1U & (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 3U)))) 
                                | (- (IData)((1U & 
                                              (vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction 
                                               >> 2U))))))))));
    vlSelfRef.rv32i_m__DOT__controller__DOT__ImmSrc 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__ExtOp;
    vlSelfRef.rv32i_m__DOT__ImmSrc = vlSelfRef.rv32i_m__DOT__controller__DOT__ImmSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ImmSrc = vlSelfRef.rv32i_m__DOT__ImmSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ImmSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__extImm 
        = ((4U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp))
            ? ((- (IData)((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp))))) 
               & ((((- (IData)((vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x00000014U) 
                   | ((((0x000001feU & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                        >> 0x0000000bU)) 
                        | (1U & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                 >> 0x00000014U))) 
                       << 0x0000000bU) | (0x000007feU 
                                          & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)))) 
                  & (- (IData)((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp) 
                                         >> 1U)))))))
            : ((2U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp))
                ? ((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp))
                    ? (0xfffff000U & vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm)
                    : (((- (IData)((vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                    >> 0x0000001fU))) 
                        << 0x0000000cU) | ((0x00000800U 
                                            & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                               << 4U)) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                                  >> 0x00000014U)) 
                                              | (0x0000001eU 
                                                 & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                                    >> 7U))))))
                : (((- (IData)((vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x0000000cU) 
                   | (0x00000fffU & ((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp))
                                      ? ((0x00000fe0U 
                                          & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                               >> 7U)))
                                      : (vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm 
                                         >> 0x00000014U))))));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__imm = vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__extImm;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__imm 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__imm;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUout 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUresult;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__Data1 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs1;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__writeData 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs2;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWriteData 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__writeData;
    vlSelfRef.rv32i_m__DOT__mem_wdata = vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWriteData;
    vlSelfRef.mem_wdata = vlSelfRef.rv32i_m__DOT__mem_wdata;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PCWrite) {
        vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PC 
            = vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__newPC;
    }
    vlSelfRef.rv32i_m__DOT__datapath__DOT__PC = vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PC;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__PC 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__PC;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__newPC 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__PC;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite = 1U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
            vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite = 1U;
                }
            }
        }
    }
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
    if ((8U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__branch = 1U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 0U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 2U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 2U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 1U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
            } else {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 1U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 2U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 2U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 1U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 0U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 2U;
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 2U;
                }
                if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 2U;
                }
            } else {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc 
                    = ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                        ? 0U : 1U);
            }
        } else if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 1U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 2U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
            }
            if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
            }
        } else {
            if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 1U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 1U;
            } else {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = 2U;
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 2U;
            }
            vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 1U;
                }
            }
        }
    }
    vlSelfRef.rv32i_m__DOT__controller__DOT__branch 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__branch;
    vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcB 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB;
    vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcA 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA;
    vlSelfRef.rv32i_m__DOT__controller__DOT__RegWrite 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite;
    vlSelfRef.rv32i_m__DOT__controller__DOT__IRwrite 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite;
    vlSelfRef.rv32i_m__DOT__controller__DOT__MemWrite 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite;
    vlSelfRef.rv32i_m__DOT__controller__DOT__PCwrite 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite;
    vlSelfRef.rv32i_m__DOT__controller__DOT__AdrSrc 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc;
    vlSelfRef.rv32i_m__DOT__controller__DOT__ResultSrc 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc;
    vlSelfRef.rv32i_m__DOT__controller__DOT__ALUop 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop;
    vlSelfRef.rv32i_m__DOT__ALUSrcB = vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcB;
    vlSelfRef.rv32i_m__DOT__ALUSrcA = vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcA;
    vlSelfRef.rv32i_m__DOT__RegWrite = vlSelfRef.rv32i_m__DOT__controller__DOT__RegWrite;
    vlSelfRef.rv32i_m__DOT__IRwrite = vlSelfRef.rv32i_m__DOT__controller__DOT__IRwrite;
    vlSelfRef.rv32i_m__DOT__memWrite = vlSelfRef.rv32i_m__DOT__controller__DOT__MemWrite;
    vlSelfRef.rv32i_m__DOT__PCwrite = vlSelfRef.rv32i_m__DOT__controller__DOT__PCwrite;
    vlSelfRef.rv32i_m__DOT__AdrSrc = vlSelfRef.rv32i_m__DOT__controller__DOT__AdrSrc;
    vlSelfRef.rv32i_m__DOT__ResultSrc = vlSelfRef.rv32i_m__DOT__controller__DOT__ResultSrc;
    vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__ALUop;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__RegWrite 
        = vlSelfRef.rv32i_m__DOT__RegWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__IRWrite 
        = vlSelfRef.rv32i_m__DOT__IRwrite;
    vlSelfRef.memWrite = vlSelfRef.rv32i_m__DOT__memWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWrite 
        = vlSelfRef.rv32i_m__DOT__memWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__PCWrite 
        = vlSelfRef.rv32i_m__DOT__PCwrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__AdrSrc = vlSelfRef.rv32i_m__DOT__AdrSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ResultSrc 
        = vlSelfRef.rv32i_m__DOT__ResultSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__RegWrite 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__RegWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__IRWrite 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__IRWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PCWrite 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__PCWrite;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Select 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__AdrSrc;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ResultSrc;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_data 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_addr];
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_data 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_addr];
    vlSelfRef.rv32i_m__DOT__datapath__DOT__rd1 = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_data;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__rd2 = vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_data;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs1 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__rd1;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs2 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__rd2;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB 
        = ((0U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB))
            ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__writeData
            : ((1U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB))
                ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__imm
                : (4U & (- (IData)((2U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB)))))));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcB 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcB;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA 
        = ((0U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA))
            ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__newPC
            : ((1U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA))
                ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__oldPC
                : (vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__Data1 
                   & (- (IData)((2U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA)))))));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcA 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcA;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state = 0x0fU;
        } else if ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state = 0x0fU;
            }
        } else {
            vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state = 7U;
        }
    } else {
        vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state 
            = ((4U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                ? ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                    ? ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                        ? 0U : 7U) : 0U) : ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                                                 ? 4U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                  ? 3U
                                                  : 
                                                 ((0x23U 
                                                   == (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                   ? 5U
                                                   : 0U)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state))
                                                 ? 
                                                ((0x00000040U 
                                                  & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                  ? 
                                                 ((0x00000020U 
                                                   & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 9U
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 0x0aU
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 
                                                 ((0x00000020U 
                                                   & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 6U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 8U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op))
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))))
                                                 : 1U)));
    }
    vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUControl 
        = ((2U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))
            ? ((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))
                ? ((0x00004000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                    : ((0x00002000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                        ? ((0x00001000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                            ? 8U : 7U) : (5U & (- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                              >> 0x0000000cU)))))))
                : ((0x00004000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                    : ((0x00002000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                        ? ((0x00001000U & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                            ? 8U : 7U) : ((0x00001000U 
                                           & vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                           ? 5U : (1U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                                    >> 0x0000001eU)))))))))
            : (1U & (- (IData)((1U & (IData)(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))))));
    vlSelfRef.rv32i_m__DOT__controller__DOT__ALUControl 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUControl;
    vlSelfRef.rv32i_m__DOT__ALUControl = vlSelfRef.rv32i_m__DOT__controller__DOT__ALUControl;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUControl 
        = vlSelfRef.rv32i_m__DOT__ALUControl;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUControl;
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult 
        = ((8U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
            ? ((4U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                ? ((2U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? (VL_SHIFTRS_III(32,32,5, vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A, 
                                      (0x0000001fU 
                                       & vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)) 
                       & (- (IData)((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl)))))
                    : ((vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                        >> (0x0000001fU & vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)) 
                       & (- (IData)((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))))))
                : (1U & (- (IData)((IData)(((0U == 
                                             (3U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))) 
                                            & (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                                               < vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)))))))
            : ((4U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                ? ((2U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? (1U & (- (IData)(((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl) 
                                        & VL_LTS_III(32, vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A, vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)))))
                    : ((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           << (0x0000001fU & vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B))
                        : (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           ^ vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)))
                : ((2U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? ((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           | vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)
                        : (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           & vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B))
                    : ((1U & (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           - vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)
                        : (vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A 
                           + vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B)))));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__Zero 
        = (0U == vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult);
    vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUResult 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__Zero = vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__Zero;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUresult 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUResult;
    vlSelfRef.rv32i_m__DOT__zero = vlSelfRef.rv32i_m__DOT__datapath__DOT__Zero;
    vlSelfRef.rv32i_m__DOT__controller__DOT__zero = vlSelfRef.rv32i_m__DOT__zero;
    vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__zero 
        = vlSelfRef.rv32i_m__DOT__controller__DOT__zero;
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__Result 
        = ((0U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc))
            ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUout
            : ((1U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc))
                ? vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__MemData
                : (vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUresult 
                   & (- (IData)((2U == (IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc)))))));
    vlSelfRef.rv32i_m__DOT__datapath__DOT__Result = vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__Result;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__writeData 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__Result;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__newPC 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__Result;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Result 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__Result;
    vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__MemAddr 
        = ((IData)(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Select)
            ? vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Result
            : vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PC);
    vlSelfRef.rv32i_m__DOT__datapath__DOT__MemAddr 
        = vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__MemAddr;
    vlSelfRef.rv32i_m__DOT__mem_addr = vlSelfRef.rv32i_m__DOT__datapath__DOT__MemAddr;
    vlSelfRef.mem_addr = vlSelfRef.rv32i_m__DOT__mem_addr;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000014ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000001cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x000000000000001dULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x000000000000003dULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/Testbench/../RV32I_V0/rv32i_m.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/Testbench/../RV32I_V0/rv32i_m.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/Testbench/../RV32I_V0/rv32i_m.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
