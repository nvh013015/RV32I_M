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
    // Body
    vlSelfRef.Datapath__DOT__MemWrite = vlSelfRef.MemWrite;
    vlSelfRef.Datapath__DOT__PCWrite = vlSelfRef.PCWrite;
    vlSelfRef.Datapath__DOT__IRWrite = vlSelfRef.IRWrite;
    vlSelfRef.Datapath__DOT__RegWrite = vlSelfRef.RegWrite;
    vlSelfRef.Datapath__DOT__MemReadData = vlSelfRef.MemReadData;
    vlSelfRef.Datapath__DOT__AdrSrc = vlSelfRef.AdrSrc;
    vlSelfRef.Datapath__DOT__clock = vlSelfRef.clock;
    vlSelfRef.Datapath__DOT__reset = vlSelfRef.reset;
    vlSelfRef.Datapath__DOT__ResultSrc = vlSelfRef.ResultSrc;
    vlSelfRef.Datapath__DOT__ALUControl = vlSelfRef.ALUControl;
    vlSelfRef.Datapath__DOT__oldPC = vlSelfRef.Datapath__DOT__ir__DOT__oldPC;
    vlSelfRef.Datapath__DOT__PC = vlSelfRef.Datapath__DOT__spcSrc__DOT__PC;
    vlSelfRef.Datapath__DOT__ImmSrc = vlSelfRef.ImmSrc;
    vlSelfRef.Datapath__DOT__SdataSrc = vlSelfRef.SdataSrc;
    vlSelfRef.Datapath__DOT__Instruction = vlSelfRef.Datapath__DOT__ir__DOT__o_instruction;
    vlSelfRef.Datapath__DOT__spcSrc__DOT__PCWrite = vlSelfRef.Datapath__DOT__PCWrite;
    vlSelfRef.Datapath__DOT__ir__DOT__IRWrite = vlSelfRef.Datapath__DOT__IRWrite;
    vlSelfRef.Datapath__DOT__regFile__DOT__RegWrite 
        = vlSelfRef.Datapath__DOT__RegWrite;
    vlSelfRef.Datapath__DOT__ir__DOT__instruction = vlSelfRef.Datapath__DOT__MemReadData;
    vlSelfRef.Datapath__DOT__mdr__DOT__Data = vlSelfRef.Datapath__DOT__MemReadData;
    vlSelfRef.Datapath__DOT__spcSrc__DOT__Select = vlSelfRef.Datapath__DOT__AdrSrc;
    vlSelfRef.Datapath__DOT__regFile__DOT__clock = vlSelfRef.Datapath__DOT__clock;
    vlSelfRef.Datapath__DOT__ir__DOT__clock = vlSelfRef.Datapath__DOT__clock;
    vlSelfRef.Datapath__DOT__mdr__DOT__clock = vlSelfRef.Datapath__DOT__clock;
    vlSelfRef.Datapath__DOT__spcSrc__DOT__clk = vlSelfRef.Datapath__DOT__clock;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__clock = vlSelfRef.Datapath__DOT__clock;
    vlSelfRef.Datapath__DOT__sResultSrc__DOT__clock 
        = vlSelfRef.Datapath__DOT__clock;
    vlSelfRef.Datapath__DOT__regFile__DOT__reset = vlSelfRef.Datapath__DOT__reset;
    vlSelfRef.Datapath__DOT__ir__DOT__reset = vlSelfRef.Datapath__DOT__reset;
    vlSelfRef.Datapath__DOT__mdr__DOT__reset = vlSelfRef.Datapath__DOT__reset;
    vlSelfRef.Datapath__DOT__spcSrc__DOT__reset = vlSelfRef.Datapath__DOT__reset;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__reset = vlSelfRef.Datapath__DOT__reset;
    vlSelfRef.Datapath__DOT__sResultSrc__DOT__reset 
        = vlSelfRef.Datapath__DOT__reset;
    vlSelfRef.Datapath__DOT__sResultSrc__DOT__resultSrc 
        = vlSelfRef.Datapath__DOT__ResultSrc;
    vlSelfRef.Datapath__DOT__alu__DOT__ALUControl = vlSelfRef.Datapath__DOT__ALUControl;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__oldPC = vlSelfRef.Datapath__DOT__oldPC;
    vlSelfRef.Datapath__DOT__ir__DOT__PC = vlSelfRef.Datapath__DOT__PC;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__newPC = vlSelfRef.Datapath__DOT__PC;
    vlSelfRef.Datapath__DOT__extender__DOT__ExtOp = vlSelfRef.Datapath__DOT__ImmSrc;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcB 
        = (3U & (IData)(vlSelfRef.Datapath__DOT__SdataSrc));
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcA 
        = (3U & ((IData)(vlSelfRef.Datapath__DOT__SdataSrc) 
                 >> 2U));
    vlSelfRef.Instruction = vlSelfRef.Datapath__DOT__Instruction;
    vlSelfRef.Datapath__DOT__regFile__DOT__rd_addr 
        = (0x0000001fU & (vlSelfRef.Datapath__DOT__Instruction 
                          >> 7U));
    vlSelfRef.Datapath__DOT__regFile__DOT__rs1_addr 
        = (0x0000001fU & (vlSelfRef.Datapath__DOT__Instruction 
                          >> 0x0000000fU));
    vlSelfRef.Datapath__DOT__store__DOT__WhichStore 
        = (7U & (vlSelfRef.Datapath__DOT__Instruction 
                 >> 0x0000000cU));
    vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte 
        = (3U & vlSelfRef.Datapath__DOT__Instruction);
    vlSelfRef.Datapath__DOT__regFile__DOT__rs2_addr 
        = (0x0000001fU & (vlSelfRef.Datapath__DOT__Instruction 
                          >> 0x00000014U));
    vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment 
        = (7U & (vlSelfRef.Datapath__DOT__Instruction 
                 >> 0x0000000cU));
    vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B 
        = (3U & vlSelfRef.Datapath__DOT__Instruction);
    vlSelfRef.Datapath__DOT__extender__DOT__imm = vlSelfRef.Datapath__DOT__Instruction;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcA 
        = ((0U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcA))
            ? vlSelfRef.Datapath__DOT__sdataSrc__DOT__newPC
            : ((1U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcA))
                ? vlSelfRef.Datapath__DOT__sdataSrc__DOT__oldPC
                : (vlSelfRef.Datapath__DOT__sdataSrc__DOT__Data1 
                   & (- (IData)((2U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcA)))))));
    vlSelfRef.Datapath__DOT__regFile__DOT__rs1_data 
        = vlSelfRef.Datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.Datapath__DOT__regFile__DOT__rs1_addr];
    vlSelfRef.Datapath__DOT__store__DOT__storeMask = 0U;
    vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data 
        = vlSelfRef.Datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.Datapath__DOT__regFile__DOT__rs2_addr];
    vlSelfRef.Datapath__DOT__mdr__DOT__o_Data = ((4U 
                                                  & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment))
                                                  ? 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment))))) 
                                                  & (((0U 
                                                       == (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                       ? 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.Datapath__DOT__mdr__DOT__i_Data)
                                                       : 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   == (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B)))) 
                                                       & VL_SHIFTR_III(32,32,32, vlSelfRef.Datapath__DOT__mdr__DOT__i_Data, 0x00000010U))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment) 
                                                                       >> 1U)))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment))
                                                    ? 
                                                   (0x000000ffU 
                                                    & ((2U 
                                                        & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                         ? 
                                                        (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                         >> 0x00000018U)
                                                         : 
                                                        (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                         >> 0x00000010U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                         ? 
                                                        (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                         >> 8U)
                                                         : vlSelfRef.Datapath__DOT__mdr__DOT__i_Data)))
                                                    : vlSelfRef.Datapath__DOT__mdr__DOT__i_Data)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                     >> 0x0000000fU)))) 
                                                      << 0x00000010U) 
                                                     | (0x0000ffffU 
                                                        & vlSelfRef.Datapath__DOT__mdr__DOT__i_Data))
                                                     : 
                                                    ((((- (IData)(
                                                                  (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                   >> 0x0000001fU))) 
                                                       << 0x00000010U) 
                                                      | (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                         >> 0x00000010U)) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   == (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                   >> 0x0000001fU))) 
                                                       << 8U) 
                                                      | (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                         >> 0x00000018U))
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                      >> 0x00000017U)))) 
                                                       << 8U) 
                                                      | (0x000000ffU 
                                                         & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                            >> 0x00000010U))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                      >> 0x0000000fU)))) 
                                                       << 8U) 
                                                      | (0x000000ffU 
                                                         & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                            >> 8U)))
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (0x000000ffU 
                                                         & vlSelfRef.Datapath__DOT__mdr__DOT__i_Data)))))));
    vlSelfRef.Datapath__DOT__extender__DOT__extImm 
        = ((4U & (IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp))
            ? ((- (IData)((1U & (~ (IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp))))) 
               & ((((- (IData)((vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x00000014U) 
                   | ((((0x000001feU & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                        >> 0x0000000bU)) 
                        | (1U & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                 >> 0x00000014U))) 
                       << 0x0000000bU) | (0x000007feU 
                                          & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)))) 
                  & (- (IData)((1U & (~ ((IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp) 
                                         >> 1U)))))))
            : ((2U & (IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp))
                ? ((1U & (IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp))
                    ? (0xfffff000U & vlSelfRef.Datapath__DOT__extender__DOT__imm)
                    : (((- (IData)((vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                    >> 0x0000001fU))) 
                        << 0x0000000cU) | ((0x00000800U 
                                            & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                               << 4U)) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                                  >> 0x00000014U)) 
                                              | (0x0000001eU 
                                                 & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                                    >> 7U))))))
                : (((- (IData)((vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x0000000cU) 
                   | (0x00000fffU & ((1U & (IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp))
                                      ? ((0x00000fe0U 
                                          & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                               >> 7U)))
                                      : (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                         >> 0x00000014U))))));
    vlSelfRef.Datapath__DOT__ALUSrcA = vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcA;
    vlSelfRef.Datapath__DOT__rd1 = vlSelfRef.Datapath__DOT__regFile__DOT__rs1_data;
    if ((0U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__WhichStore))) {
        if ((2U & (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))) {
            if ((1U & (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))) {
                vlSelfRef.Datapath__DOT__store__DOT__storeMask = 8U;
                vlSelfRef.Datapath__DOT__MemWriteMask 
                    = vlSelfRef.Datapath__DOT__store__DOT__storeMask;
                vlSelfRef.Datapath__DOT__rd2 = vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data;
                vlSelfRef.Datapath__DOT__mdr_data = vlSelfRef.Datapath__DOT__mdr__DOT__o_Data;
                vlSelfRef.Datapath__DOT__imm = vlSelfRef.Datapath__DOT__extender__DOT__extImm;
                vlSelfRef.Datapath__DOT__alu__DOT__A 
                    = vlSelfRef.Datapath__DOT__ALUSrcA;
                vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1 
                    = vlSelfRef.Datapath__DOT__rd1;
                vlSelfRef.MemWriteMask = vlSelfRef.Datapath__DOT__MemWriteMask;
                vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2 
                    = vlSelfRef.Datapath__DOT__rd2;
                vlSelfRef.Datapath__DOT__store__DOT__writeData 
                    = vlSelfRef.Datapath__DOT__rd2;
                vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData 
                    = vlSelfRef.Datapath__DOT__mdr_data;
                vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm 
                    = vlSelfRef.Datapath__DOT__imm;
                vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
                vlSelfRef.Datapath__DOT__store__DOT__storeData 
                    = (vlSelfRef.Datapath__DOT__store__DOT__writeData 
                       << 0x00000018U);
            } else {
                vlSelfRef.Datapath__DOT__store__DOT__storeMask = 4U;
                vlSelfRef.Datapath__DOT__MemWriteMask 
                    = vlSelfRef.Datapath__DOT__store__DOT__storeMask;
                vlSelfRef.Datapath__DOT__rd2 = vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data;
                vlSelfRef.Datapath__DOT__mdr_data = vlSelfRef.Datapath__DOT__mdr__DOT__o_Data;
                vlSelfRef.Datapath__DOT__imm = vlSelfRef.Datapath__DOT__extender__DOT__extImm;
                vlSelfRef.Datapath__DOT__alu__DOT__A 
                    = vlSelfRef.Datapath__DOT__ALUSrcA;
                vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1 
                    = vlSelfRef.Datapath__DOT__rd1;
                vlSelfRef.MemWriteMask = vlSelfRef.Datapath__DOT__MemWriteMask;
                vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2 
                    = vlSelfRef.Datapath__DOT__rd2;
                vlSelfRef.Datapath__DOT__store__DOT__writeData 
                    = vlSelfRef.Datapath__DOT__rd2;
                vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData 
                    = vlSelfRef.Datapath__DOT__mdr_data;
                vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm 
                    = vlSelfRef.Datapath__DOT__imm;
                vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
                vlSelfRef.Datapath__DOT__store__DOT__storeData 
                    = (0x00ff0000U & (vlSelfRef.Datapath__DOT__store__DOT__writeData 
                                      << 0x00000010U));
            }
        } else if ((1U & (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))) {
            vlSelfRef.Datapath__DOT__store__DOT__storeMask = 2U;
            vlSelfRef.Datapath__DOT__MemWriteMask = vlSelfRef.Datapath__DOT__store__DOT__storeMask;
            vlSelfRef.Datapath__DOT__rd2 = vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data;
            vlSelfRef.Datapath__DOT__mdr_data = vlSelfRef.Datapath__DOT__mdr__DOT__o_Data;
            vlSelfRef.Datapath__DOT__imm = vlSelfRef.Datapath__DOT__extender__DOT__extImm;
            vlSelfRef.Datapath__DOT__alu__DOT__A = vlSelfRef.Datapath__DOT__ALUSrcA;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1 
                = vlSelfRef.Datapath__DOT__rd1;
            vlSelfRef.MemWriteMask = vlSelfRef.Datapath__DOT__MemWriteMask;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2 
                = vlSelfRef.Datapath__DOT__rd2;
            vlSelfRef.Datapath__DOT__store__DOT__writeData 
                = vlSelfRef.Datapath__DOT__rd2;
            vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData 
                = vlSelfRef.Datapath__DOT__mdr_data;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm 
                = vlSelfRef.Datapath__DOT__imm;
            vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
            vlSelfRef.Datapath__DOT__store__DOT__storeData 
                = (0x0000ff00U & (vlSelfRef.Datapath__DOT__store__DOT__writeData 
                                  << 8U));
        } else {
            vlSelfRef.Datapath__DOT__store__DOT__storeMask = 1U;
            vlSelfRef.Datapath__DOT__MemWriteMask = vlSelfRef.Datapath__DOT__store__DOT__storeMask;
            vlSelfRef.Datapath__DOT__rd2 = vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data;
            vlSelfRef.Datapath__DOT__mdr_data = vlSelfRef.Datapath__DOT__mdr__DOT__o_Data;
            vlSelfRef.Datapath__DOT__imm = vlSelfRef.Datapath__DOT__extender__DOT__extImm;
            vlSelfRef.Datapath__DOT__alu__DOT__A = vlSelfRef.Datapath__DOT__ALUSrcA;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1 
                = vlSelfRef.Datapath__DOT__rd1;
            vlSelfRef.MemWriteMask = vlSelfRef.Datapath__DOT__MemWriteMask;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2 
                = vlSelfRef.Datapath__DOT__rd2;
            vlSelfRef.Datapath__DOT__store__DOT__writeData 
                = vlSelfRef.Datapath__DOT__rd2;
            vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData 
                = vlSelfRef.Datapath__DOT__mdr_data;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm 
                = vlSelfRef.Datapath__DOT__imm;
            vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
            vlSelfRef.Datapath__DOT__store__DOT__storeData 
                = (0x000000ffU & vlSelfRef.Datapath__DOT__store__DOT__writeData);
        }
    } else if ((1U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__WhichStore))) {
        if ((0U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))) {
            vlSelfRef.Datapath__DOT__store__DOT__storeMask = 3U;
            vlSelfRef.Datapath__DOT__MemWriteMask = vlSelfRef.Datapath__DOT__store__DOT__storeMask;
            vlSelfRef.Datapath__DOT__rd2 = vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data;
            vlSelfRef.Datapath__DOT__mdr_data = vlSelfRef.Datapath__DOT__mdr__DOT__o_Data;
            vlSelfRef.Datapath__DOT__imm = vlSelfRef.Datapath__DOT__extender__DOT__extImm;
            vlSelfRef.Datapath__DOT__alu__DOT__A = vlSelfRef.Datapath__DOT__ALUSrcA;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1 
                = vlSelfRef.Datapath__DOT__rd1;
            vlSelfRef.MemWriteMask = vlSelfRef.Datapath__DOT__MemWriteMask;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2 
                = vlSelfRef.Datapath__DOT__rd2;
            vlSelfRef.Datapath__DOT__store__DOT__writeData 
                = vlSelfRef.Datapath__DOT__rd2;
            vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData 
                = vlSelfRef.Datapath__DOT__mdr_data;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm 
                = vlSelfRef.Datapath__DOT__imm;
            vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
            vlSelfRef.Datapath__DOT__store__DOT__storeData 
                = (0x0000ffffU & vlSelfRef.Datapath__DOT__store__DOT__writeData);
        } else if ((2U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))) {
            vlSelfRef.Datapath__DOT__store__DOT__storeMask = 0x0cU;
            vlSelfRef.Datapath__DOT__MemWriteMask = vlSelfRef.Datapath__DOT__store__DOT__storeMask;
            vlSelfRef.Datapath__DOT__rd2 = vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data;
            vlSelfRef.Datapath__DOT__mdr_data = vlSelfRef.Datapath__DOT__mdr__DOT__o_Data;
            vlSelfRef.Datapath__DOT__imm = vlSelfRef.Datapath__DOT__extender__DOT__extImm;
            vlSelfRef.Datapath__DOT__alu__DOT__A = vlSelfRef.Datapath__DOT__ALUSrcA;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1 
                = vlSelfRef.Datapath__DOT__rd1;
            vlSelfRef.MemWriteMask = vlSelfRef.Datapath__DOT__MemWriteMask;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2 
                = vlSelfRef.Datapath__DOT__rd2;
            vlSelfRef.Datapath__DOT__store__DOT__writeData 
                = vlSelfRef.Datapath__DOT__rd2;
            vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData 
                = vlSelfRef.Datapath__DOT__mdr_data;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm 
                = vlSelfRef.Datapath__DOT__imm;
            vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
            vlSelfRef.Datapath__DOT__store__DOT__storeData 
                = (vlSelfRef.Datapath__DOT__store__DOT__writeData 
                   << 0x00000010U);
        } else {
            vlSelfRef.Datapath__DOT__store__DOT__storeMask = 0U;
            vlSelfRef.Datapath__DOT__MemWriteMask = vlSelfRef.Datapath__DOT__store__DOT__storeMask;
            vlSelfRef.Datapath__DOT__rd2 = vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data;
            vlSelfRef.Datapath__DOT__mdr_data = vlSelfRef.Datapath__DOT__mdr__DOT__o_Data;
            vlSelfRef.Datapath__DOT__imm = vlSelfRef.Datapath__DOT__extender__DOT__extImm;
            vlSelfRef.Datapath__DOT__alu__DOT__A = vlSelfRef.Datapath__DOT__ALUSrcA;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1 
                = vlSelfRef.Datapath__DOT__rd1;
            vlSelfRef.MemWriteMask = vlSelfRef.Datapath__DOT__MemWriteMask;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2 
                = vlSelfRef.Datapath__DOT__rd2;
            vlSelfRef.Datapath__DOT__store__DOT__writeData 
                = vlSelfRef.Datapath__DOT__rd2;
            vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData 
                = vlSelfRef.Datapath__DOT__mdr_data;
            vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm 
                = vlSelfRef.Datapath__DOT__imm;
            vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
            vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__WhichStore))) {
        vlSelfRef.Datapath__DOT__store__DOT__storeMask = 0x0fU;
        vlSelfRef.Datapath__DOT__MemWriteMask = vlSelfRef.Datapath__DOT__store__DOT__storeMask;
        vlSelfRef.Datapath__DOT__rd2 = vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data;
        vlSelfRef.Datapath__DOT__mdr_data = vlSelfRef.Datapath__DOT__mdr__DOT__o_Data;
        vlSelfRef.Datapath__DOT__imm = vlSelfRef.Datapath__DOT__extender__DOT__extImm;
        vlSelfRef.Datapath__DOT__alu__DOT__A = vlSelfRef.Datapath__DOT__ALUSrcA;
        vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1 
            = vlSelfRef.Datapath__DOT__rd1;
        vlSelfRef.MemWriteMask = vlSelfRef.Datapath__DOT__MemWriteMask;
        vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2 
            = vlSelfRef.Datapath__DOT__rd2;
        vlSelfRef.Datapath__DOT__store__DOT__writeData 
            = vlSelfRef.Datapath__DOT__rd2;
        vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData 
            = vlSelfRef.Datapath__DOT__mdr_data;
        vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm 
            = vlSelfRef.Datapath__DOT__imm;
        vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
        vlSelfRef.Datapath__DOT__store__DOT__storeData 
            = vlSelfRef.Datapath__DOT__store__DOT__writeData;
    } else {
        vlSelfRef.Datapath__DOT__store__DOT__storeMask = 0U;
        vlSelfRef.Datapath__DOT__MemWriteMask = vlSelfRef.Datapath__DOT__store__DOT__storeMask;
        vlSelfRef.Datapath__DOT__rd2 = vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data;
        vlSelfRef.Datapath__DOT__mdr_data = vlSelfRef.Datapath__DOT__mdr__DOT__o_Data;
        vlSelfRef.Datapath__DOT__imm = vlSelfRef.Datapath__DOT__extender__DOT__extImm;
        vlSelfRef.Datapath__DOT__alu__DOT__A = vlSelfRef.Datapath__DOT__ALUSrcA;
        vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1 
            = vlSelfRef.Datapath__DOT__rd1;
        vlSelfRef.MemWriteMask = vlSelfRef.Datapath__DOT__MemWriteMask;
        vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2 
            = vlSelfRef.Datapath__DOT__rd2;
        vlSelfRef.Datapath__DOT__store__DOT__writeData 
            = vlSelfRef.Datapath__DOT__rd2;
        vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData 
            = vlSelfRef.Datapath__DOT__mdr_data;
        vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm 
            = vlSelfRef.Datapath__DOT__imm;
        vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
        vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
    }
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcB 
        = ((0U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcB))
            ? vlSelfRef.Datapath__DOT__sdataSrc__DOT__writeData
            : ((1U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcB))
                ? vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm
                : (4U & (- (IData)((2U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcB)))))));
    vlSelfRef.Datapath__DOT__MemWriteData = vlSelfRef.Datapath__DOT__store__DOT__storeData;
    vlSelfRef.Datapath__DOT__ALUSrcB = vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcB;
    vlSelfRef.MemWriteData = vlSelfRef.Datapath__DOT__MemWriteData;
    vlSelfRef.Datapath__DOT__alu__DOT__B = vlSelfRef.Datapath__DOT__ALUSrcB;
    vlSelfRef.Datapath__DOT__alu__DOT__ALUResult = 
        ((8U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
          ? ((4U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
              ? ((2U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                  ? (VL_SHIFTRS_III(32,32,5, vlSelfRef.Datapath__DOT__alu__DOT__A, 
                                    (0x0000001fU & vlSelfRef.Datapath__DOT__alu__DOT__B)) 
                     & (- (IData)((1U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl)))))
                  : ((vlSelfRef.Datapath__DOT__alu__DOT__A 
                      >> (0x0000001fU & vlSelfRef.Datapath__DOT__alu__DOT__B)) 
                     & (- (IData)((1U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))))))
              : (1U & (- (IData)((IData)(((0U == (3U 
                                                  & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))) 
                                          & (vlSelfRef.Datapath__DOT__alu__DOT__A 
                                             < vlSelfRef.Datapath__DOT__alu__DOT__B)))))))
          : ((4U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
              ? ((2U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                  ? (1U & (- (IData)(((IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl) 
                                      & VL_LTS_III(32, vlSelfRef.Datapath__DOT__alu__DOT__A, vlSelfRef.Datapath__DOT__alu__DOT__B)))))
                  : ((1U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                      ? (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         << (0x0000001fU & vlSelfRef.Datapath__DOT__alu__DOT__B))
                      : (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         ^ vlSelfRef.Datapath__DOT__alu__DOT__B)))
              : ((2U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                  ? ((1U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                      ? (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         | vlSelfRef.Datapath__DOT__alu__DOT__B)
                      : (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         & vlSelfRef.Datapath__DOT__alu__DOT__B))
                  : ((1U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                      ? (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         - vlSelfRef.Datapath__DOT__alu__DOT__B)
                      : (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         + vlSelfRef.Datapath__DOT__alu__DOT__B)))));
    vlSelfRef.Datapath__DOT__alu__DOT__Zero = (0U == vlSelfRef.Datapath__DOT__alu__DOT__ALUResult);
    vlSelfRef.Datapath__DOT__ALUResult = vlSelfRef.Datapath__DOT__alu__DOT__ALUResult;
    vlSelfRef.Datapath__DOT__Zero = vlSelfRef.Datapath__DOT__alu__DOT__Zero;
    vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUresult 
        = vlSelfRef.Datapath__DOT__ALUResult;
    vlSelfRef.Zero = vlSelfRef.Datapath__DOT__Zero;
    vlSelfRef.Datapath__DOT__sResultSrc__DOT__Result 
        = ((0U == (IData)(vlSelfRef.Datapath__DOT__sResultSrc__DOT__resultSrc))
            ? vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUout
            : ((1U == (IData)(vlSelfRef.Datapath__DOT__sResultSrc__DOT__resultSrc))
                ? vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData
                : (vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUresult 
                   & (- (IData)((2U == (IData)(vlSelfRef.Datapath__DOT__sResultSrc__DOT__resultSrc)))))));
    vlSelfRef.Datapath__DOT__Result = vlSelfRef.Datapath__DOT__sResultSrc__DOT__Result;
    vlSelfRef.Datapath__DOT__regFile__DOT__writeData 
        = vlSelfRef.Datapath__DOT__Result;
    vlSelfRef.Datapath__DOT__spcSrc__DOT__newPC = vlSelfRef.Datapath__DOT__Result;
    vlSelfRef.Datapath__DOT__spcSrc__DOT__Result = vlSelfRef.Datapath__DOT__Result;
    vlSelfRef.Datapath__DOT__spcSrc__DOT__MemAddr = 
        ((IData)(vlSelfRef.Datapath__DOT__spcSrc__DOT__Select)
          ? vlSelfRef.Datapath__DOT__spcSrc__DOT__Result
          : vlSelfRef.Datapath__DOT__spcSrc__DOT__PC);
    vlSelfRef.Datapath__DOT__MemAddr = vlSelfRef.Datapath__DOT__spcSrc__DOT__MemAddr;
    vlSelfRef.MemAddr = vlSelfRef.Datapath__DOT__MemAddr;
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
                                                    (((((IData)(vlSelfRef.Datapath__DOT__sResultSrc__DOT__clock) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__sResultSrc__DOT__clock__0))) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__clock) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__sdataSrc__DOT__clock__0))) 
                                                         << 4U)) 
                                                     | (((((IData)(vlSelfRef.Datapath__DOT__spcSrc__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__spcSrc__DOT__clk__0))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.Datapath__DOT__mdr__DOT__clock) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__mdr__DOT__clock__0))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.Datapath__DOT__ir__DOT__clock) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__ir__DOT__clock__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.Datapath__DOT__regFile__DOT__clock) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__regFile__DOT__clock__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__regFile__DOT__clock__0 
        = vlSelfRef.Datapath__DOT__regFile__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__ir__DOT__clock__0 
        = vlSelfRef.Datapath__DOT__ir__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__mdr__DOT__clock__0 
        = vlSelfRef.Datapath__DOT__mdr__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__spcSrc__DOT__clk__0 
        = vlSelfRef.Datapath__DOT__spcSrc__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__sdataSrc__DOT__clock__0 
        = vlSelfRef.Datapath__DOT__sdataSrc__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__Datapath__DOT__sResultSrc__DOT__clock__0 
        = vlSelfRef.Datapath__DOT__sResultSrc__DOT__clock;
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
    // Body
    vlSelfRef.Datapath__DOT__mdr__DOT__i_Data = ((IData)(vlSelfRef.Datapath__DOT__mdr__DOT__reset)
                                                  ? 0U
                                                  : vlSelfRef.Datapath__DOT__mdr__DOT__Data);
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUout 
        = ((IData)(vlSelfRef.Datapath__DOT__sResultSrc__DOT__reset)
            ? 0U : vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUresult);
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __VdlyDim0__Datapath__DOT__regFile__DOT__regFile__v0;
    __VdlyDim0__Datapath__DOT__regFile__DOT__regFile__v0 = 0;
    IData/*31:0*/ __VdlyVal__Datapath__DOT__regFile__DOT__regFile__v1;
    __VdlyVal__Datapath__DOT__regFile__DOT__regFile__v1 = 0;
    CData/*4:0*/ __VdlyDim0__Datapath__DOT__regFile__DOT__regFile__v1;
    __VdlyDim0__Datapath__DOT__regFile__DOT__regFile__v1 = 0;
    // Body
    if (vlSelfRef.Datapath__DOT__regFile__DOT__reset) {
        vlSelfRef.Datapath__DOT__regFile__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000020U, vlSelfRef.Datapath__DOT__regFile__DOT__unnamedblk2__DOT__i)) {
            __VdlyDim0__Datapath__DOT__regFile__DOT__regFile__v0 
                = (0x0000001fU & vlSelfRef.Datapath__DOT__regFile__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueueDatapath__DOT__regFile__DOT__regFile.enqueue(0U, (IData)(__VdlyDim0__Datapath__DOT__regFile__DOT__regFile__v0));
            vlSelfRef.Datapath__DOT__regFile__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.Datapath__DOT__regFile__DOT__unnamedblk2__DOT__i);
        }
    } else if (((IData)(vlSelfRef.Datapath__DOT__regFile__DOT__RegWrite) 
                & (0U != (IData)(vlSelfRef.Datapath__DOT__regFile__DOT__rd_addr)))) {
        __VdlyVal__Datapath__DOT__regFile__DOT__regFile__v1 
            = vlSelfRef.Datapath__DOT__regFile__DOT__writeData;
        __VdlyDim0__Datapath__DOT__regFile__DOT__regFile__v1 
            = vlSelfRef.Datapath__DOT__regFile__DOT__rd_addr;
        vlSelfRef.__VdlyCommitQueueDatapath__DOT__regFile__DOT__regFile.enqueue(__VdlyVal__Datapath__DOT__regFile__DOT__regFile__v1, (IData)(__VdlyDim0__Datapath__DOT__regFile__DOT__regFile__v1));
    }
    vlSelfRef.__VdlyCommitQueueDatapath__DOT__regFile__DOT__regFile.commit(vlSelfRef.Datapath__DOT__regFile__DOT__regFile);
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.Datapath__DOT__sdataSrc__DOT__reset) {
        vlSelfRef.Datapath__DOT__sdataSrc__DOT__writeData = 0U;
        vlSelfRef.Datapath__DOT__sdataSrc__DOT__Data1 = 0U;
    } else {
        vlSelfRef.Datapath__DOT__sdataSrc__DOT__writeData 
            = vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2;
        vlSelfRef.Datapath__DOT__sdataSrc__DOT__Data1 
            = vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1;
    }
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.Datapath__DOT__ir__DOT__reset) {
        vlSelfRef.Datapath__DOT__ir__DOT__oldPC = 0U;
        vlSelfRef.Datapath__DOT__ir__DOT__o_instruction = 0U;
    } else if (vlSelfRef.Datapath__DOT__ir__DOT__IRWrite) {
        vlSelfRef.Datapath__DOT__ir__DOT__oldPC = vlSelfRef.Datapath__DOT__ir__DOT__PC;
        vlSelfRef.Datapath__DOT__ir__DOT__o_instruction 
            = vlSelfRef.Datapath__DOT__ir__DOT__instruction;
    }
    vlSelfRef.Datapath__DOT__oldPC = vlSelfRef.Datapath__DOT__ir__DOT__oldPC;
    vlSelfRef.Datapath__DOT__Instruction = vlSelfRef.Datapath__DOT__ir__DOT__o_instruction;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__oldPC = vlSelfRef.Datapath__DOT__oldPC;
    vlSelfRef.Instruction = vlSelfRef.Datapath__DOT__Instruction;
    vlSelfRef.Datapath__DOT__regFile__DOT__rd_addr 
        = (0x0000001fU & (vlSelfRef.Datapath__DOT__Instruction 
                          >> 7U));
    vlSelfRef.Datapath__DOT__regFile__DOT__rs1_addr 
        = (0x0000001fU & (vlSelfRef.Datapath__DOT__Instruction 
                          >> 0x0000000fU));
    vlSelfRef.Datapath__DOT__store__DOT__WhichStore 
        = (7U & (vlSelfRef.Datapath__DOT__Instruction 
                 >> 0x0000000cU));
    vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte 
        = (3U & vlSelfRef.Datapath__DOT__Instruction);
    vlSelfRef.Datapath__DOT__regFile__DOT__rs2_addr 
        = (0x0000001fU & (vlSelfRef.Datapath__DOT__Instruction 
                          >> 0x00000014U));
    vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment 
        = (7U & (vlSelfRef.Datapath__DOT__Instruction 
                 >> 0x0000000cU));
    vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B 
        = (3U & vlSelfRef.Datapath__DOT__Instruction);
    vlSelfRef.Datapath__DOT__extender__DOT__imm = vlSelfRef.Datapath__DOT__Instruction;
    vlSelfRef.Datapath__DOT__store__DOT__storeMask = 0U;
    vlSelfRef.Datapath__DOT__store__DOT__storeMask 
        = ((0U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__WhichStore))
            ? ((2U & (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))
                ? ((1U & (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))
                    ? 8U : 4U) : ((1U & (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))
                                   ? 2U : 1U)) : ((1U 
                                                   == (IData)(vlSelfRef.Datapath__DOT__store__DOT__WhichStore))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))
                                                     ? 0x0cU
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.Datapath__DOT__store__DOT__WhichStore))
                                                    ? 0x0fU
                                                    : 0U)));
    vlSelfRef.Datapath__DOT__extender__DOT__extImm 
        = ((4U & (IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp))
            ? ((- (IData)((1U & (~ (IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp))))) 
               & ((((- (IData)((vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x00000014U) 
                   | ((((0x000001feU & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                        >> 0x0000000bU)) 
                        | (1U & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                 >> 0x00000014U))) 
                       << 0x0000000bU) | (0x000007feU 
                                          & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)))) 
                  & (- (IData)((1U & (~ ((IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp) 
                                         >> 1U)))))))
            : ((2U & (IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp))
                ? ((1U & (IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp))
                    ? (0xfffff000U & vlSelfRef.Datapath__DOT__extender__DOT__imm)
                    : (((- (IData)((vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                    >> 0x0000001fU))) 
                        << 0x0000000cU) | ((0x00000800U 
                                            & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                               << 4U)) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                                  >> 0x00000014U)) 
                                              | (0x0000001eU 
                                                 & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                                    >> 7U))))))
                : (((- (IData)((vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                >> 0x0000001fU))) << 0x0000000cU) 
                   | (0x00000fffU & ((1U & (IData)(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp))
                                      ? ((0x00000fe0U 
                                          & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                               >> 7U)))
                                      : (vlSelfRef.Datapath__DOT__extender__DOT__imm 
                                         >> 0x00000014U))))));
    vlSelfRef.Datapath__DOT__MemWriteMask = vlSelfRef.Datapath__DOT__store__DOT__storeMask;
    vlSelfRef.Datapath__DOT__imm = vlSelfRef.Datapath__DOT__extender__DOT__extImm;
    vlSelfRef.MemWriteMask = vlSelfRef.Datapath__DOT__MemWriteMask;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm = vlSelfRef.Datapath__DOT__imm;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.Datapath__DOT__spcSrc__DOT__reset) {
        vlSelfRef.Datapath__DOT__spcSrc__DOT__PC = 0U;
    } else if (vlSelfRef.Datapath__DOT__spcSrc__DOT__PCWrite) {
        vlSelfRef.Datapath__DOT__spcSrc__DOT__PC = vlSelfRef.Datapath__DOT__spcSrc__DOT__newPC;
    }
    vlSelfRef.Datapath__DOT__PC = vlSelfRef.Datapath__DOT__spcSrc__DOT__PC;
    vlSelfRef.Datapath__DOT__ir__DOT__PC = vlSelfRef.Datapath__DOT__PC;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__newPC = vlSelfRef.Datapath__DOT__PC;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Datapath__DOT__regFile__DOT__rs1_data 
        = vlSelfRef.Datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.Datapath__DOT__regFile__DOT__rs1_addr];
    vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data 
        = vlSelfRef.Datapath__DOT__regFile__DOT__regFile
        [vlSelfRef.Datapath__DOT__regFile__DOT__rs2_addr];
    vlSelfRef.Datapath__DOT__rd1 = vlSelfRef.Datapath__DOT__regFile__DOT__rs1_data;
    vlSelfRef.Datapath__DOT__rd2 = vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1 = vlSelfRef.Datapath__DOT__rd1;
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2 = vlSelfRef.Datapath__DOT__rd2;
    vlSelfRef.Datapath__DOT__store__DOT__writeData 
        = vlSelfRef.Datapath__DOT__rd2;
    vlSelfRef.Datapath__DOT__store__DOT__storeData = 0U;
    vlSelfRef.Datapath__DOT__store__DOT__storeData 
        = ((0U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__WhichStore))
            ? ((2U & (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))
                ? ((1U & (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))
                    ? (vlSelfRef.Datapath__DOT__store__DOT__writeData 
                       << 0x00000018U) : (0x00ff0000U 
                                          & (vlSelfRef.Datapath__DOT__store__DOT__writeData 
                                             << 0x00000010U)))
                : ((1U & (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))
                    ? (0x0000ff00U & (vlSelfRef.Datapath__DOT__store__DOT__writeData 
                                      << 8U)) : (0x000000ffU 
                                                 & vlSelfRef.Datapath__DOT__store__DOT__writeData)))
            : ((1U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__WhichStore))
                ? ((0U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))
                    ? (0x0000ffffU & vlSelfRef.Datapath__DOT__store__DOT__writeData)
                    : ((2U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte))
                        ? (vlSelfRef.Datapath__DOT__store__DOT__writeData 
                           << 0x00000010U) : 0U)) : 
               ((2U == (IData)(vlSelfRef.Datapath__DOT__store__DOT__WhichStore))
                 ? vlSelfRef.Datapath__DOT__store__DOT__writeData
                 : 0U)));
    vlSelfRef.Datapath__DOT__MemWriteData = vlSelfRef.Datapath__DOT__store__DOT__storeData;
    vlSelfRef.MemWriteData = vlSelfRef.Datapath__DOT__MemWriteData;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Datapath__DOT__mdr__DOT__o_Data = ((4U 
                                                  & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment))
                                                  ? 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment))))) 
                                                  & (((0U 
                                                       == (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                       ? 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.Datapath__DOT__mdr__DOT__i_Data)
                                                       : 
                                                      ((- (IData)(
                                                                  (1U 
                                                                   == (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B)))) 
                                                       & VL_SHIFTR_III(32,32,32, vlSelfRef.Datapath__DOT__mdr__DOT__i_Data, 0x00000010U))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment) 
                                                                       >> 1U)))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment))
                                                    ? 
                                                   (0x000000ffU 
                                                    & ((2U 
                                                        & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                         ? 
                                                        (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                         >> 0x00000018U)
                                                         : 
                                                        (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                         >> 0x00000010U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                         ? 
                                                        (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                         >> 8U)
                                                         : vlSelfRef.Datapath__DOT__mdr__DOT__i_Data)))
                                                    : vlSelfRef.Datapath__DOT__mdr__DOT__i_Data)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                     >> 0x0000000fU)))) 
                                                      << 0x00000010U) 
                                                     | (0x0000ffffU 
                                                        & vlSelfRef.Datapath__DOT__mdr__DOT__i_Data))
                                                     : 
                                                    ((((- (IData)(
                                                                  (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                   >> 0x0000001fU))) 
                                                       << 0x00000010U) 
                                                      | (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                         >> 0x00000010U)) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   == (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                   >> 0x0000001fU))) 
                                                       << 8U) 
                                                      | (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                         >> 0x00000018U))
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                      >> 0x00000017U)))) 
                                                       << 8U) 
                                                      | (0x000000ffU 
                                                         & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                            >> 0x00000010U))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                      >> 0x0000000fU)))) 
                                                       << 8U) 
                                                      | (0x000000ffU 
                                                         & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                            >> 8U)))
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.Datapath__DOT__mdr__DOT__i_Data 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (0x000000ffU 
                                                         & vlSelfRef.Datapath__DOT__mdr__DOT__i_Data)))))));
    vlSelfRef.Datapath__DOT__mdr_data = vlSelfRef.Datapath__DOT__mdr__DOT__o_Data;
    vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData 
        = vlSelfRef.Datapath__DOT__mdr_data;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcB 
        = ((0U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcB))
            ? vlSelfRef.Datapath__DOT__sdataSrc__DOT__writeData
            : ((1U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcB))
                ? vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm
                : (4U & (- (IData)((2U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcB)))))));
    vlSelfRef.Datapath__DOT__ALUSrcB = vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcB;
    vlSelfRef.Datapath__DOT__alu__DOT__B = vlSelfRef.Datapath__DOT__ALUSrcB;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcA 
        = ((0U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcA))
            ? vlSelfRef.Datapath__DOT__sdataSrc__DOT__newPC
            : ((1U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcA))
                ? vlSelfRef.Datapath__DOT__sdataSrc__DOT__oldPC
                : (vlSelfRef.Datapath__DOT__sdataSrc__DOT__Data1 
                   & (- (IData)((2U == (IData)(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcA)))))));
    vlSelfRef.Datapath__DOT__ALUSrcA = vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcA;
    vlSelfRef.Datapath__DOT__alu__DOT__A = vlSelfRef.Datapath__DOT__ALUSrcA;
    vlSelfRef.Datapath__DOT__alu__DOT__ALUResult = 
        ((8U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
          ? ((4U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
              ? ((2U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                  ? (VL_SHIFTRS_III(32,32,5, vlSelfRef.Datapath__DOT__alu__DOT__A, 
                                    (0x0000001fU & vlSelfRef.Datapath__DOT__alu__DOT__B)) 
                     & (- (IData)((1U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl)))))
                  : ((vlSelfRef.Datapath__DOT__alu__DOT__A 
                      >> (0x0000001fU & vlSelfRef.Datapath__DOT__alu__DOT__B)) 
                     & (- (IData)((1U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))))))
              : (1U & (- (IData)((IData)(((0U == (3U 
                                                  & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))) 
                                          & (vlSelfRef.Datapath__DOT__alu__DOT__A 
                                             < vlSelfRef.Datapath__DOT__alu__DOT__B)))))))
          : ((4U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
              ? ((2U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                  ? (1U & (- (IData)(((IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl) 
                                      & VL_LTS_III(32, vlSelfRef.Datapath__DOT__alu__DOT__A, vlSelfRef.Datapath__DOT__alu__DOT__B)))))
                  : ((1U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                      ? (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         << (0x0000001fU & vlSelfRef.Datapath__DOT__alu__DOT__B))
                      : (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         ^ vlSelfRef.Datapath__DOT__alu__DOT__B)))
              : ((2U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                  ? ((1U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                      ? (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         | vlSelfRef.Datapath__DOT__alu__DOT__B)
                      : (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         & vlSelfRef.Datapath__DOT__alu__DOT__B))
                  : ((1U & (IData)(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl))
                      ? (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         - vlSelfRef.Datapath__DOT__alu__DOT__B)
                      : (vlSelfRef.Datapath__DOT__alu__DOT__A 
                         + vlSelfRef.Datapath__DOT__alu__DOT__B)))));
    vlSelfRef.Datapath__DOT__alu__DOT__Zero = (0U == vlSelfRef.Datapath__DOT__alu__DOT__ALUResult);
    vlSelfRef.Datapath__DOT__ALUResult = vlSelfRef.Datapath__DOT__alu__DOT__ALUResult;
    vlSelfRef.Datapath__DOT__Zero = vlSelfRef.Datapath__DOT__alu__DOT__Zero;
    vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUresult 
        = vlSelfRef.Datapath__DOT__ALUResult;
    vlSelfRef.Zero = vlSelfRef.Datapath__DOT__Zero;
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Datapath__DOT__sResultSrc__DOT__Result 
        = ((0U == (IData)(vlSelfRef.Datapath__DOT__sResultSrc__DOT__resultSrc))
            ? vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUout
            : ((1U == (IData)(vlSelfRef.Datapath__DOT__sResultSrc__DOT__resultSrc))
                ? vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData
                : (vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUresult 
                   & (- (IData)((2U == (IData)(vlSelfRef.Datapath__DOT__sResultSrc__DOT__resultSrc)))))));
    vlSelfRef.Datapath__DOT__Result = vlSelfRef.Datapath__DOT__sResultSrc__DOT__Result;
    vlSelfRef.Datapath__DOT__regFile__DOT__writeData 
        = vlSelfRef.Datapath__DOT__Result;
    vlSelfRef.Datapath__DOT__spcSrc__DOT__newPC = vlSelfRef.Datapath__DOT__Result;
    vlSelfRef.Datapath__DOT__spcSrc__DOT__Result = vlSelfRef.Datapath__DOT__Result;
    vlSelfRef.Datapath__DOT__spcSrc__DOT__MemAddr = 
        ((IData)(vlSelfRef.Datapath__DOT__spcSrc__DOT__Select)
          ? vlSelfRef.Datapath__DOT__spcSrc__DOT__Result
          : vlSelfRef.Datapath__DOT__spcSrc__DOT__PC);
    vlSelfRef.Datapath__DOT__MemAddr = vlSelfRef.Datapath__DOT__spcSrc__DOT__MemAddr;
    vlSelfRef.MemAddr = vlSelfRef.Datapath__DOT__MemAddr;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000000012ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x000000000000001aULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x000000000000003eULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
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
            VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/RV32I_V0/Datapath.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/RV32I_V0/Datapath.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/RV32I_V0/Datapath.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.PCWrite & 0xfeU)))) {
        Verilated::overWidthError("PCWrite");
    }
    if (VL_UNLIKELY(((vlSelfRef.AdrSrc & 0xfeU)))) {
        Verilated::overWidthError("AdrSrc");
    }
    if (VL_UNLIKELY(((vlSelfRef.MemWrite & 0xfeU)))) {
        Verilated::overWidthError("MemWrite");
    }
    if (VL_UNLIKELY(((vlSelfRef.IRWrite & 0xfeU)))) {
        Verilated::overWidthError("IRWrite");
    }
    if (VL_UNLIKELY(((vlSelfRef.RegWrite & 0xfeU)))) {
        Verilated::overWidthError("RegWrite");
    }
    if (VL_UNLIKELY(((vlSelfRef.ResultSrc & 0xfcU)))) {
        Verilated::overWidthError("ResultSrc");
    }
    if (VL_UNLIKELY(((vlSelfRef.ALUControl & 0xf0U)))) {
        Verilated::overWidthError("ALUControl");
    }
    if (VL_UNLIKELY(((vlSelfRef.SdataSrc & 0xf0U)))) {
        Verilated::overWidthError("SdataSrc");
    }
    if (VL_UNLIKELY(((vlSelfRef.ImmSrc & 0xf8U)))) {
        Verilated::overWidthError("ImmSrc");
    }
}
#endif  // VL_DEBUG
