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
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    // Body
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__IRWrite = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MemWrite = 0U;
    vlSelfRef.Top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.Top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MemWrite = 1U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
            vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__IRWrite = 1U;
                }
            }
        }
    }
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__oldPC 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__oldPC;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PC 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PC;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__o_instruction;
    if ((8U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__branch = 1U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 1U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 0U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 2U;
                }
            } else if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 2U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 1U;
            } else {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 2U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 1U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 2U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 1U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
                }
            }
        }
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__branch 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__branch;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__RegWrite 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__IRwrite 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__IRWrite;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__PCwrite 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__MemWrite 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MemWrite;
        vlSelfRef.Top__DOT__cpu__DOT__reset = vlSelfRef.Top__DOT__reset;
        vlSelfRef.Top__DOT__memory__DOT__clk = vlSelfRef.Top__DOT__clk;
        vlSelfRef.Top__DOT__cpu__DOT__clk = vlSelfRef.Top__DOT__clk;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__AdrSrc 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ResultSrc 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__oldPC 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__oldPC;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__PC 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PC;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__newPC 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PC;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ALUop 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__SALUSrcB 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB;
    } else {
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__branch 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__branch;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__RegWrite 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__IRwrite 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__IRWrite;
        if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 1U;
                }
            }
        }
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__PCwrite 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__MemWrite 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MemWrite;
        vlSelfRef.Top__DOT__cpu__DOT__reset = vlSelfRef.Top__DOT__reset;
        vlSelfRef.Top__DOT__memory__DOT__clk = vlSelfRef.Top__DOT__clk;
        vlSelfRef.Top__DOT__cpu__DOT__clk = vlSelfRef.Top__DOT__clk;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__AdrSrc 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc;
        if ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 2U;
                }
                if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 2U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 0U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 2U;
                }
            } else {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc 
                    = ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                        ? 0U : 1U);
            }
        } else if ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 1U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 2U;
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 2U;
            }
            vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
            if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 1U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 1U;
            } else {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 2U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 0U;
            }
        }
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ResultSrc 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__oldPC 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__oldPC;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__PC 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PC;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__newPC 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PC;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ALUop 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop;
        vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__SALUSrcB 
            = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB;
    }
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__SALUSrcA 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rd_addr 
        = (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
                          >> 7U));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_addr 
        = (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
                          >> 0x0000000fU));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_addr 
        = (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
                          >> 0x00000014U));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore 
        = (7U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
                 >> 0x0000000cU));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte 
        = (3U & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction);
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment 
        = (7U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
                 >> 0x0000000cU));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B 
        = (3U & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction);
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction;
    vlSelfRef.Top__DOT__cpu__DOT__instruction = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction;
    vlSelfRef.Top__DOT__cpu__DOT__RegWrite = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__RegWrite;
    vlSelfRef.Top__DOT__cpu__DOT__IRwrite = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__IRwrite;
    vlSelfRef.Top__DOT__cpu__DOT__PCwrite = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__PCwrite;
    vlSelfRef.Top__DOT__cpu__DOT__memWrite = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__MemWrite;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__reset 
        = vlSelfRef.Top__DOT__cpu__DOT__reset;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__reset 
        = vlSelfRef.Top__DOT__cpu__DOT__reset;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__clk 
        = vlSelfRef.Top__DOT__cpu__DOT__clk;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__clock 
        = vlSelfRef.Top__DOT__cpu__DOT__clk;
    vlSelfRef.Top__DOT__cpu__DOT__AdrSrc = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__AdrSrc;
    vlSelfRef.Top__DOT__cpu__DOT__ResultSrc = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUOp 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ALUop;
    vlSelfRef.Top__DOT__cpu__DOT__SALUsrcB = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__SALUSrcB;
    vlSelfRef.Top__DOT__cpu__DOT__SALUsrcA = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__SALUSrcA;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_data 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_addr];
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_data 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_addr];
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeMask = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__o_Data 
        = ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment))
            ? ((- (IData)((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment))))) 
               & (((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                    ? (0x0000ffffU & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data)
                    : ((- (IData)((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B)))) 
                       & VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data, 0x00000010U))) 
                  & (- (IData)((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment) 
                                         >> 1U)))))))
            : ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment))
                ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment))
                    ? (0x000000ffU & ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                                       ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                                           ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                              >> 0x00000018U)
                                           : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                              >> 0x00000010U))
                                       : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                                           ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                              >> 8U)
                                           : vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data)))
                    : vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data)
                : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment))
                    ? ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                        ? (((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                              >> 0x0000000fU)))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data))
                        : ((((- (IData)((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                         >> 0x0000001fU))) 
                             << 0x00000010U) | (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                                >> 0x00000010U)) 
                           & (- (IData)((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))))))
                    : ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                        ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                            ? (((- (IData)((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                            >> 0x0000001fU))) 
                                << 8U) | (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                          >> 0x00000018U))
                            : (((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                                  >> 0x00000017U)))) 
                                << 8U) | (0x000000ffU 
                                          & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                             >> 0x00000010U))))
                        : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                            ? (((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                                  >> 0x0000000fU)))) 
                                << 8U) | (0x000000ffU 
                                          & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                             >> 8U)))
                            : (((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                                  >> 7U)))) 
                                << 8U) | (0x000000ffU 
                                          & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data)))))));
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__instruction;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__RegWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__RegWrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__IRWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__IRwrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PCWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__PCwrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__memWrite;
    vlSelfRef.Top__DOT__memWrite = vlSelfRef.Top__DOT__cpu__DOT__memWrite;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__reset 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__reset;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__reset 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__reset;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__reset 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__reset;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__reset 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__reset;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__reset 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__reset;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__reset 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__reset;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__reset 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__reset;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__clock 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__clk;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__clock 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__clock;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__clock 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__clock;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__clock 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__clock;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__clk 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__clock;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__clock 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__clock;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__clock 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__clock;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__AdrSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__AdrSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ResultSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__SALUsrcB 
        = vlSelfRef.Top__DOT__cpu__DOT__SALUsrcB;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__SALUsrcA 
        = vlSelfRef.Top__DOT__cpu__DOT__SALUsrcA;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__rd1 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_data;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__rd2 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_data;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeMask 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
            ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                    ? 8U : 4U) : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                                   ? 2U : 1U)) : ((1U 
                                                   == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                                                     ? 0x0cU
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
                                                    ? 0x0fU
                                                    : 0U)));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemWriteMask 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeMask;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr_data 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__o_Data;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__instruction;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__next_state 
        = ((8U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
            ? ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                    ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                        ? 0x0fU : 0U) : 0x0fU) : ((2U 
                                                   & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                                                    ? 0x0fU
                                                    : 0U)
                                                   : 7U))
            : ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                    ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                        ? 0U : 7U) : 0U) : ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                                                 ? 4U
                                                 : 
                                                ((3U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction))
                                                  ? 3U
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction))
                                                   ? 5U
                                                   : 0U)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                                                 ? 
                                                ((0x00000040U 
                                                  & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                  ? 
                                                 ((0x00000020U 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                   ? 
                                                  ((0x00000010U 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 9U
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 0x0aU
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 
                                                 ((0x00000020U 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                   ? 
                                                  ((0x00000010U 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 6U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x00000010U 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 8U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))))
                                                 : 1U))));
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__instruction;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__instruction;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__RegWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__RegWrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__IRWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__IRWrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PCWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PCWrite;
    vlSelfRef.Top__DOT__memory__DOT__memWrite = vlSelfRef.Top__DOT__memWrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Select 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__AdrSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__resultSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__SALUsrcB;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__SALUsrcA;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__rs1 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__rd1;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__rs2 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__rd2;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__rd2;
    vlSelfRef.Top__DOT__cpu__DOT__mem_wmask = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemWriteMask;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__MemData 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr_data;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (0x0000000fU 
                                                & ((0x00002000U 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   ((0x00001000U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                     ? 
                                                    (0x0dU 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                                      >> 0x0000001eU)))))
                                                     : 4U)));
    __VdfgRegularize_h6e95ff9d_0_0 = (7U & ((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                            >> 1U))))) 
                                            | (- (IData)(
                                                         (1U 
                                                          & (~ vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction))))));
    __VdfgRegularize_h6e95ff9d_0_11 = (7U & (3U | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)))) 
                                                   | (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                                     >> 1U))))))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA))
            ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__newPC
            : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA))
                ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__oldPC
                : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__Data1 
                   & (- (IData)((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA)))))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeData = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeData 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
            ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                    ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData 
                       << 0x00000018U) : (0x00ff0000U 
                                          & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData 
                                             << 0x00000010U)))
                : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                    ? (0x0000ff00U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData 
                                      << 8U)) : (0x000000ffU 
                                                 & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData)))
            : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
                ? ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                    ? (0x0000ffffU & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData)
                    : ((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                        ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData 
                           << 0x00000010U) : 0U)) : 
               ((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
                 ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData
                 : 0U)));
    vlSelfRef.Top__DOT__mem_wmask = vlSelfRef.Top__DOT__cpu__DOT__mem_wmask;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUControl 
        = ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))
            ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))
                ? ((0x00004000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                    : ((0x00002000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                        ? ((0x00001000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                            ? 8U : 7U) : (5U & (- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                              >> 0x0000000cU)))))))
                : ((0x00004000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                    : ((0x00002000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                        ? ((0x00001000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                            ? 8U : 7U) : ((0x00001000U 
                                           & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                           ? 5U : (1U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                                    >> 0x0000001eU)))))))))
            : (1U & (- (IData)((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))))));
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__ExtOp 
        = (7U & ((0x00000040U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                  ? ((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                       >> 4U)))) | 
                     (((8U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                        ? (4U | ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                 | (- (IData)((1U & 
                                               (~ (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                   >> 2U)))))))
                        : ((4U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_0)
                            : (2U | ((- (IData)((1U 
                                                 & (~ vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)))) 
                                     | (- (IData)((1U 
                                                   & (~ 
                                                      (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                       >> 1U))))))))) 
                      | (- (IData)((1U & (~ (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                             >> 5U)))))))
                  : ((0x00000020U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                      ? ((0x00000010U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                          ? ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                             | ((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 3U)))) 
                                | (- (IData)((1U & 
                                              (~ (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 2U)))))))
                          : (1U | ((- (IData)((1U & 
                                               (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                >> 2U)))) 
                                   | ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                      | (- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                       >> 3U))))))))
                      : ((0x00000010U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                          ? (((4U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                               ? (IData)(__VdfgRegularize_h6e95ff9d_0_11)
                               : (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
                             | (- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                 >> 3U)))))
                          : ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                             | ((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 3U)))) 
                                | (- (IData)((1U & 
                                              (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                               >> 2U))))))))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUSrcA 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemWriteData 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeData;
    vlSelfRef.Top__DOT__memory__DOT__mem_wmask = vlSelfRef.Top__DOT__mem_wmask;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ALUControl 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUControl;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ImmSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__ExtOp;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUSrcA;
    vlSelfRef.Top__DOT__cpu__DOT__mem_wdata = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemWriteData;
    vlSelfRef.Top__DOT__cpu__DOT__ALUControl = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ALUControl;
    vlSelfRef.Top__DOT__cpu__DOT__ImmSrc = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ImmSrc;
    vlSelfRef.Top__DOT__mem_wdata = vlSelfRef.Top__DOT__cpu__DOT__mem_wdata;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUControl 
        = vlSelfRef.Top__DOT__cpu__DOT__ALUControl;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ImmSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__ImmSrc;
    vlSelfRef.Top__DOT__memory__DOT__mem_wdata = vlSelfRef.Top__DOT__mem_wdata;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUControl;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ImmSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__extImm 
        = ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp))
            ? ((- (IData)((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp))))) 
               & ((((- (IData)((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x00000014U) 
                   | ((((0x000001feU & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                        >> 0x0000000bU)) 
                        | (1U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                 >> 0x00000014U))) 
                       << 0x0000000bU) | (0x000007feU 
                                          & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)))) 
                  & (- (IData)((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp) 
                                         >> 1U)))))))
            : ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp))
                ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp))
                    ? (0xfffff000U & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm)
                    : (((- (IData)((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                    >> 0x0000001fU))) 
                        << 0x0000000cU) | ((0x00000800U 
                                            & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                               << 4U)) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                                  >> 0x00000014U)) 
                                              | (0x0000001eU 
                                                 & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                                    >> 7U))))))
                : (((- (IData)((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x0000000cU) 
                   | (0x00000fffU & ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp))
                                      ? ((0x00000fe0U 
                                          & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                               >> 7U)))
                                      : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                         >> 0x00000014U))))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__imm 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__extImm;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__imm 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__imm;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB))
            ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__writeData
            : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB))
                ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__imm
                : (4U & (- (IData)((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB)))))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUSrcB 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUSrcB;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUResult 
        = ((8U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
            ? ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? (VL_SHIFTRS_III(32,32,5, vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A, 
                                      (0x0000001fU 
                                       & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)) 
                       & (- (IData)((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl)))))
                    : ((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                        >> (0x0000001fU & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)) 
                       & (- (IData)((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))))))
                : (1U & (- (IData)((IData)(((0U == 
                                             (3U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))) 
                                            & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                                               < vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)))))))
            : ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? (1U & (- (IData)(((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl) 
                                        & VL_LTS_III(32, vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A, vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)))))
                    : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           << (0x0000001fU & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B))
                        : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           ^ vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)))
                : ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           | vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)
                        : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B))
                    : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           - vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)
                        : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           + vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__Zero 
        = (0U == vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUResult);
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUResult 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUResult;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Zero 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__Zero;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUresult 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUResult;
    vlSelfRef.Top__DOT__cpu__DOT__zero = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Zero;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__Result 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__resultSrc))
            ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUout
            : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__resultSrc))
                ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__MemData
                : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUresult 
                   & (- (IData)((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__resultSrc)))))));
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__zero 
        = vlSelfRef.Top__DOT__cpu__DOT__zero;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Result_From_ResultSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__Result;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__zero 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__zero;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__writeData 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Result_From_ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__newPC 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Result_From_ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Result_From_ResultSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Result_From_ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__MemAddr 
        = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Select)
            ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Result_From_ResultSrc
            : vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PC);
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemAddr 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__MemAddr;
    vlSelfRef.Top__DOT__cpu__DOT__mem_addr = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemAddr;
    vlSelfRef.Top__DOT__mem_addr = vlSelfRef.Top__DOT__cpu__DOT__mem_addr;
    vlSelfRef.Top__DOT__memory__DOT__mem_addr = vlSelfRef.Top__DOT__mem_addr;
    vlSelfRef.Top__DOT__memory__DOT__mem_rdata = vlSelfRef.Top__DOT__memory__DOT__ram
        [(0x000003ffU & (vlSelfRef.Top__DOT__memory__DOT__mem_addr 
                         >> 2U))];
    vlSelfRef.Top__DOT__mem_rdata = vlSelfRef.Top__DOT__memory__DOT__mem_rdata;
    vlSelfRef.Top__DOT__cpu__DOT__mem_rdata = vlSelfRef.Top__DOT__mem_rdata;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemReadData 
        = vlSelfRef.Top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemReadData;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Data 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemReadData;
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
                                                    (((((((IData)(vlSelfRef.Top__DOT__memory__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__memory__DOT__clk__0))) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__clock) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__clock__0))) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__clock) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__clock__0))) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__clk__0))))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__clock) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__clock__0))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__clock) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__clock__0))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__clock) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__clock__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__clock) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__clock__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__clock__0 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__clock__0 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__clock__0 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__clock__0 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__clk__0 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__clock__0 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__clock__0 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__Top__DOT__memory__DOT__clk__0 
        = vlSelfRef.Top__DOT__memory__DOT__clk;
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
    CData/*7:0*/ __VdlyVal__Top__DOT__memory__DOT__ram__v0;
    __VdlyVal__Top__DOT__memory__DOT__ram__v0 = 0;
    SData/*9:0*/ __VdlyDim0__Top__DOT__memory__DOT__ram__v0;
    __VdlyDim0__Top__DOT__memory__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__memory__DOT__ram__v0;
    __VdlySet__Top__DOT__memory__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__memory__DOT__ram__v1;
    __VdlyVal__Top__DOT__memory__DOT__ram__v1 = 0;
    SData/*9:0*/ __VdlyDim0__Top__DOT__memory__DOT__ram__v1;
    __VdlyDim0__Top__DOT__memory__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__memory__DOT__ram__v1;
    __VdlySet__Top__DOT__memory__DOT__ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__memory__DOT__ram__v2;
    __VdlyVal__Top__DOT__memory__DOT__ram__v2 = 0;
    SData/*9:0*/ __VdlyDim0__Top__DOT__memory__DOT__ram__v2;
    __VdlyDim0__Top__DOT__memory__DOT__ram__v2 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__memory__DOT__ram__v2;
    __VdlySet__Top__DOT__memory__DOT__ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__memory__DOT__ram__v3;
    __VdlyVal__Top__DOT__memory__DOT__ram__v3 = 0;
    SData/*9:0*/ __VdlyDim0__Top__DOT__memory__DOT__ram__v3;
    __VdlyDim0__Top__DOT__memory__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__memory__DOT__ram__v3;
    __VdlySet__Top__DOT__memory__DOT__ram__v3 = 0;
    // Body
    __VdlySet__Top__DOT__memory__DOT__ram__v0 = 0U;
    __VdlySet__Top__DOT__memory__DOT__ram__v1 = 0U;
    __VdlySet__Top__DOT__memory__DOT__ram__v2 = 0U;
    __VdlySet__Top__DOT__memory__DOT__ram__v3 = 0U;
    if (vlSelfRef.Top__DOT__memory__DOT__memWrite) {
        if ((1U & (IData)(vlSelfRef.Top__DOT__memory__DOT__mem_wmask))) {
            __VdlyVal__Top__DOT__memory__DOT__ram__v0 
                = (0x000000ffU & vlSelfRef.Top__DOT__memory__DOT__mem_wdata);
            __VdlyDim0__Top__DOT__memory__DOT__ram__v0 
                = (0x000003ffU & (vlSelfRef.Top__DOT__memory__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__Top__DOT__memory__DOT__ram__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.Top__DOT__memory__DOT__mem_wmask))) {
            __VdlyVal__Top__DOT__memory__DOT__ram__v1 
                = (0x000000ffU & (vlSelfRef.Top__DOT__memory__DOT__mem_wdata 
                                  >> 8U));
            __VdlyDim0__Top__DOT__memory__DOT__ram__v1 
                = (0x000003ffU & (vlSelfRef.Top__DOT__memory__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__Top__DOT__memory__DOT__ram__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.Top__DOT__memory__DOT__mem_wmask))) {
            __VdlyVal__Top__DOT__memory__DOT__ram__v2 
                = (0x000000ffU & (vlSelfRef.Top__DOT__memory__DOT__mem_wdata 
                                  >> 0x10U));
            __VdlyDim0__Top__DOT__memory__DOT__ram__v2 
                = (0x000003ffU & (vlSelfRef.Top__DOT__memory__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__Top__DOT__memory__DOT__ram__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.Top__DOT__memory__DOT__mem_wmask))) {
            __VdlyVal__Top__DOT__memory__DOT__ram__v3 
                = (vlSelfRef.Top__DOT__memory__DOT__mem_wdata 
                   >> 0x18U);
            __VdlyDim0__Top__DOT__memory__DOT__ram__v3 
                = (0x000003ffU & (vlSelfRef.Top__DOT__memory__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__Top__DOT__memory__DOT__ram__v3 = 1U;
        }
    }
    if (__VdlySet__Top__DOT__memory__DOT__ram__v0) {
        vlSelfRef.Top__DOT__memory__DOT__ram[__VdlyDim0__Top__DOT__memory__DOT__ram__v0] 
            = ((0xffffff00U & vlSelfRef.Top__DOT__memory__DOT__ram
                [__VdlyDim0__Top__DOT__memory__DOT__ram__v0]) 
               | (IData)(__VdlyVal__Top__DOT__memory__DOT__ram__v0));
    }
    if (__VdlySet__Top__DOT__memory__DOT__ram__v1) {
        vlSelfRef.Top__DOT__memory__DOT__ram[__VdlyDim0__Top__DOT__memory__DOT__ram__v1] 
            = ((0xffff00ffU & vlSelfRef.Top__DOT__memory__DOT__ram
                [__VdlyDim0__Top__DOT__memory__DOT__ram__v1]) 
               | ((IData)(__VdlyVal__Top__DOT__memory__DOT__ram__v1) 
                  << 8U));
    }
    if (__VdlySet__Top__DOT__memory__DOT__ram__v2) {
        vlSelfRef.Top__DOT__memory__DOT__ram[__VdlyDim0__Top__DOT__memory__DOT__ram__v2] 
            = ((0xff00ffffU & vlSelfRef.Top__DOT__memory__DOT__ram
                [__VdlyDim0__Top__DOT__memory__DOT__ram__v2]) 
               | ((IData)(__VdlyVal__Top__DOT__memory__DOT__ram__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__Top__DOT__memory__DOT__ram__v3) {
        vlSelfRef.Top__DOT__memory__DOT__ram[__VdlyDim0__Top__DOT__memory__DOT__ram__v3] 
            = ((0x00ffffffU & vlSelfRef.Top__DOT__memory__DOT__ram
                [__VdlyDim0__Top__DOT__memory__DOT__ram__v3]) 
               | ((IData)(__VdlyVal__Top__DOT__memory__DOT__ram__v3) 
                  << 0x00000018U));
    }
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __VdlyDim0__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v0;
    __VdlyDim0__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v0 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v1;
    __VdlyVal__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v1 = 0;
    CData/*4:0*/ __VdlyDim0__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v1;
    __VdlyDim0__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v1 = 0;
    // Body
    if (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__reset) {
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000020U, vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk2__DOT__i)) {
            __VdlyDim0__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v0 
                = (0x0000001fU & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueueTop__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile.enqueue(0U, (IData)(__VdlyDim0__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v0));
            vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk2__DOT__i);
        }
    } else if (((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__RegWrite) 
                & (0U != (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rd_addr)))) {
        __VdlyVal__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v1 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__writeData;
        __VdlyDim0__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v1 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rd_addr;
        vlSelfRef.__VdlyCommitQueueTop__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile.enqueue(__VdlyVal__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v1, (IData)(__VdlyDim0__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile__v1));
    }
    vlSelfRef.__VdlyCommitQueueTop__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile.commit(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile);
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
        = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__reset)
            ? 0U : vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Data);
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUout 
        = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__reset)
            ? 0U : vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUresult);
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__reset) {
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__writeData = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__Data1 = 0U;
    } else {
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__writeData 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__rs2;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__Data1 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__rs1;
    }
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    // Body
    if (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__reset) {
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__oldPC = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__o_instruction = 0U;
    } else if (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__IRWrite) {
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__oldPC 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__PC;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__o_instruction 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__instruction;
    }
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__oldPC 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__oldPC;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__o_instruction;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__oldPC 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__oldPC;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rd_addr 
        = (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
                          >> 7U));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_addr 
        = (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
                          >> 0x0000000fU));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_addr 
        = (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
                          >> 0x00000014U));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore 
        = (7U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
                 >> 0x0000000cU));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte 
        = (3U & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction);
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment 
        = (7U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction 
                 >> 0x0000000cU));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B 
        = (3U & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction);
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction;
    vlSelfRef.Top__DOT__cpu__DOT__instruction = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Instruction;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeMask = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeMask 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
            ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                    ? 8U : 4U) : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                                   ? 2U : 1U)) : ((1U 
                                                   == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                                                     ? 0x0cU
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
                                                    ? 0x0fU
                                                    : 0U)));
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__instruction;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemWriteMask 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeMask;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__instruction;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__instruction;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__instruction;
    vlSelfRef.Top__DOT__cpu__DOT__mem_wmask = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemWriteMask;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (0x0000000fU 
                                                & ((0x00002000U 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                    ? 
                                                   ((0x00001000U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   ((0x00001000U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                                     ? 
                                                    (0x0dU 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                                      >> 0x0000001eU)))))
                                                     : 4U)));
    __VdfgRegularize_h6e95ff9d_0_0 = (7U & ((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                            >> 1U))))) 
                                            | (- (IData)(
                                                         (1U 
                                                          & (~ vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction))))));
    __VdfgRegularize_h6e95ff9d_0_11 = (7U & (3U | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)))) 
                                                   | (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                                     >> 1U))))))));
    vlSelfRef.Top__DOT__mem_wmask = vlSelfRef.Top__DOT__cpu__DOT__mem_wmask;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__ExtOp 
        = (7U & ((0x00000040U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                  ? ((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                       >> 4U)))) | 
                     (((8U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                        ? (4U | ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                 | (- (IData)((1U & 
                                               (~ (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                   >> 2U)))))))
                        : ((4U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                            ? (IData)(__VdfgRegularize_h6e95ff9d_0_0)
                            : (2U | ((- (IData)((1U 
                                                 & (~ vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)))) 
                                     | (- (IData)((1U 
                                                   & (~ 
                                                      (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                       >> 1U))))))))) 
                      | (- (IData)((1U & (~ (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                             >> 5U)))))))
                  : ((0x00000020U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                      ? ((0x00000010U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                          ? ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                             | ((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 3U)))) 
                                | (- (IData)((1U & 
                                              (~ (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 2U)))))))
                          : (1U | ((- (IData)((1U & 
                                               (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                >> 2U)))) 
                                   | ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                      | (- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                       >> 3U))))))))
                      : ((0x00000010U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                          ? (((4U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction)
                               ? (IData)(__VdfgRegularize_h6e95ff9d_0_11)
                               : (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
                             | (- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                 >> 3U)))))
                          : ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                             | ((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                                  >> 3U)))) 
                                | (- (IData)((1U & 
                                              (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction 
                                               >> 2U))))))))));
    vlSelfRef.Top__DOT__memory__DOT__mem_wmask = vlSelfRef.Top__DOT__mem_wmask;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ImmSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__ExtOp;
    vlSelfRef.Top__DOT__cpu__DOT__ImmSrc = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ImmSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ImmSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__ImmSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ImmSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__extImm 
        = ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp))
            ? ((- (IData)((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp))))) 
               & ((((- (IData)((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x00000014U) 
                   | ((((0x000001feU & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                        >> 0x0000000bU)) 
                        | (1U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                 >> 0x00000014U))) 
                       << 0x0000000bU) | (0x000007feU 
                                          & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)))) 
                  & (- (IData)((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp) 
                                         >> 1U)))))))
            : ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp))
                ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp))
                    ? (0xfffff000U & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm)
                    : (((- (IData)((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                    >> 0x0000001fU))) 
                        << 0x0000000cU) | ((0x00000800U 
                                            & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                               << 4U)) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                                  >> 0x00000014U)) 
                                              | (0x0000001eU 
                                                 & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                                    >> 7U))))))
                : (((- (IData)((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x0000000cU) 
                   | (0x00000fffU & ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp))
                                      ? ((0x00000fe0U 
                                          & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                               >> 7U)))
                                      : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm 
                                         >> 0x00000014U))))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__imm 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__extImm;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__imm 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__imm;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__reset) {
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PC = 0U;
    } else if (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PCWrite) {
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PC 
            = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__newPC;
    }
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PC 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PC;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__PC 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PC;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__newPC 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PC;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state 
        = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__reset)
            ? 0x0eU : (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__next_state));
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__IRWrite = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MemWrite = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MemWrite = 1U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
            vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__IRWrite = 1U;
                }
            }
        }
    }
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 0U;
    if ((8U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__branch = 1U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 1U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 0U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 2U;
                }
            } else if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 2U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 1U;
            } else {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 2U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 1U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 2U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 1U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 2U;
                }
                if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 2U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 0U;
                    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 2U;
                }
            } else {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc 
                    = ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                        ? 0U : 1U);
            }
        } else if ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 1U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 2U;
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state)))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = 2U;
            }
            vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = 0U;
            if ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))) {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 1U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 1U;
            } else {
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = 2U;
                vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = 0U;
            }
        }
    }
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__branch 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__branch;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__RegWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__IRwrite 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__IRWrite;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__PCwrite 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__MemWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MemWrite;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__AdrSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ResultSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ALUop 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__SALUSrcB 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__SALUSrcA 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA;
    vlSelfRef.Top__DOT__cpu__DOT__RegWrite = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__RegWrite;
    vlSelfRef.Top__DOT__cpu__DOT__IRwrite = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__IRwrite;
    vlSelfRef.Top__DOT__cpu__DOT__PCwrite = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__PCwrite;
    vlSelfRef.Top__DOT__cpu__DOT__memWrite = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__MemWrite;
    vlSelfRef.Top__DOT__cpu__DOT__AdrSrc = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__AdrSrc;
    vlSelfRef.Top__DOT__cpu__DOT__ResultSrc = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUOp 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ALUop;
    vlSelfRef.Top__DOT__cpu__DOT__SALUsrcB = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__SALUSrcB;
    vlSelfRef.Top__DOT__cpu__DOT__SALUsrcA = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__SALUSrcA;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__RegWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__RegWrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__IRWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__IRwrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PCWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__PCwrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__memWrite;
    vlSelfRef.Top__DOT__memWrite = vlSelfRef.Top__DOT__cpu__DOT__memWrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__AdrSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__AdrSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ResultSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__SALUsrcB 
        = vlSelfRef.Top__DOT__cpu__DOT__SALUsrcB;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__SALUsrcA 
        = vlSelfRef.Top__DOT__cpu__DOT__SALUsrcA;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__RegWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__RegWrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__IRWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__IRWrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PCWrite 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__PCWrite;
    vlSelfRef.Top__DOT__memory__DOT__memWrite = vlSelfRef.Top__DOT__memWrite;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Select 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__AdrSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__resultSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__SALUsrcB;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__SALUsrcA;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_data 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_addr];
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_data 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_addr];
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__rd1 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_data;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__rd2 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_data;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__rs1 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__rd1;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__rs2 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__rd2;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__rd2;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeData = 0U;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeData 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
            ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                    ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData 
                       << 0x00000018U) : (0x00ff0000U 
                                          & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData 
                                             << 0x00000010U)))
                : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                    ? (0x0000ff00U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData 
                                      << 8U)) : (0x000000ffU 
                                                 & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData)))
            : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
                ? ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                    ? (0x0000ffffU & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData)
                    : ((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte))
                        ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData 
                           << 0x00000010U) : 0U)) : 
               ((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore))
                 ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData
                 : 0U)));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemWriteData 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeData;
    vlSelfRef.Top__DOT__cpu__DOT__mem_wdata = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemWriteData;
    vlSelfRef.Top__DOT__mem_wdata = vlSelfRef.Top__DOT__cpu__DOT__mem_wdata;
    vlSelfRef.Top__DOT__memory__DOT__mem_wdata = vlSelfRef.Top__DOT__mem_wdata;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__o_Data 
        = ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment))
            ? ((- (IData)((1U & (~ (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment))))) 
               & (((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                    ? (0x0000ffffU & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data)
                    : ((- (IData)((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B)))) 
                       & VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data, 0x00000010U))) 
                  & (- (IData)((1U & (~ ((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment) 
                                         >> 1U)))))))
            : ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment))
                ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment))
                    ? (0x000000ffU & ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                                       ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                                           ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                              >> 0x00000018U)
                                           : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                              >> 0x00000010U))
                                       : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                                           ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                              >> 8U)
                                           : vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data)))
                    : vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data)
                : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment))
                    ? ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                        ? (((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                              >> 0x0000000fU)))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data))
                        : ((((- (IData)((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                         >> 0x0000001fU))) 
                             << 0x00000010U) | (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                                >> 0x00000010U)) 
                           & (- (IData)((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))))))
                    : ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                        ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                            ? (((- (IData)((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                            >> 0x0000001fU))) 
                                << 8U) | (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                          >> 0x00000018U))
                            : (((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                                  >> 0x00000017U)))) 
                                << 8U) | (0x000000ffU 
                                          & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                             >> 0x00000010U))))
                        : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B))
                            ? (((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                                  >> 0x0000000fU)))) 
                                << 8U) | (0x000000ffU 
                                          & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                             >> 8U)))
                            : (((- (IData)((1U & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data 
                                                  >> 7U)))) 
                                << 8U) | (0x000000ffU 
                                          & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data)))))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr_data 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__o_Data;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__MemData 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr_data;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__next_state 
        = ((8U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
            ? ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                    ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                        ? 0x0fU : 0U) : 0x0fU) : ((2U 
                                                   & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                                                    ? 0x0fU
                                                    : 0U)
                                                   : 7U))
            : ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                    ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                        ? 0U : 7U) : 0U) : ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                                                 ? 4U
                                                 : 
                                                ((3U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction))
                                                  ? 3U
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction))
                                                   ? 5U
                                                   : 0U)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state))
                                                 ? 
                                                ((0x00000040U 
                                                  & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                  ? 
                                                 ((0x00000020U 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                   ? 
                                                  ((0x00000010U 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 9U
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 0x0aU
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 
                                                 ((0x00000020U 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                   ? 
                                                  ((0x00000010U 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 6U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x00000010U 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 8U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction)
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))))
                                                 : 1U))));
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUControl 
        = ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))
            ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))
                ? ((0x00004000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                    : ((0x00002000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                        ? ((0x00001000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                            ? 8U : 7U) : (5U & (- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                              >> 0x0000000cU)))))))
                : ((0x00004000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                    : ((0x00002000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                        ? ((0x00001000U & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                            ? 8U : 7U) : ((0x00001000U 
                                           & vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction)
                                           ? 5U : (1U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction 
                                                                    >> 0x0000001eU)))))))))
            : (1U & (- (IData)((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUOp))))));
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ALUControl 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUControl;
    vlSelfRef.Top__DOT__cpu__DOT__ALUControl = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__ALUControl;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUControl 
        = vlSelfRef.Top__DOT__cpu__DOT__ALUControl;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUControl;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB))
            ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__writeData
            : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB))
                ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__imm
                : (4U & (- (IData)((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB)))))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUSrcB 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUSrcB;
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA))
            ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__newPC
            : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA))
                ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__oldPC
                : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__Data1 
                   & (- (IData)((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA)))))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUSrcA 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUSrcA;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUResult 
        = ((8U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
            ? ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? (VL_SHIFTRS_III(32,32,5, vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A, 
                                      (0x0000001fU 
                                       & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)) 
                       & (- (IData)((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl)))))
                    : ((vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                        >> (0x0000001fU & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)) 
                       & (- (IData)((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))))))
                : (1U & (- (IData)((IData)(((0U == 
                                             (3U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))) 
                                            & (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                                               < vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)))))))
            : ((4U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                ? ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? (1U & (- (IData)(((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl) 
                                        & VL_LTS_III(32, vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A, vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)))))
                    : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           << (0x0000001fU & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B))
                        : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           ^ vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)))
                : ((2U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                    ? ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           | vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)
                        : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B))
                    : ((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl))
                        ? (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           - vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)
                        : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A 
                           + vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B)))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__Zero 
        = (0U == vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUResult);
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUResult 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUResult;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Zero 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__Zero;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUresult 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ALUResult;
    vlSelfRef.Top__DOT__cpu__DOT__zero = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Zero;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__zero 
        = vlSelfRef.Top__DOT__cpu__DOT__zero;
    vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__zero 
        = vlSelfRef.Top__DOT__cpu__DOT__controller__DOT__zero;
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__Result 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__resultSrc))
            ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUout
            : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__resultSrc))
                ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__MemData
                : (vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUresult 
                   & (- (IData)((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__resultSrc)))))));
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Result_From_ResultSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__Result;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__writeData 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Result_From_ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__newPC 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Result_From_ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Result_From_ResultSrc 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__Result_From_ResultSrc;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__MemAddr 
        = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Select)
            ? vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Result_From_ResultSrc
            : vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PC);
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemAddr 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__MemAddr;
    vlSelfRef.Top__DOT__cpu__DOT__mem_addr = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemAddr;
    vlSelfRef.Top__DOT__mem_addr = vlSelfRef.Top__DOT__cpu__DOT__mem_addr;
    vlSelfRef.Top__DOT__memory__DOT__mem_addr = vlSelfRef.Top__DOT__mem_addr;
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__memory__DOT__mem_rdata = vlSelfRef.Top__DOT__memory__DOT__ram
        [(0x000003ffU & (vlSelfRef.Top__DOT__memory__DOT__mem_addr 
                         >> 2U))];
    vlSelfRef.Top__DOT__mem_rdata = vlSelfRef.Top__DOT__memory__DOT__mem_rdata;
    vlSelfRef.Top__DOT__cpu__DOT__mem_rdata = vlSelfRef.Top__DOT__mem_rdata;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemReadData 
        = vlSelfRef.Top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__instruction 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemReadData;
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Data 
        = vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__MemReadData;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000025ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000000035ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x000000000000007dULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x00000000000000fdULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
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
            VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/Testbench/Maintest/../../RV32I_V0/Top.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/Testbench/Maintest/../../RV32I_V0/Top.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/Testbench/Maintest/../../RV32I_V0/Top.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
