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
    vlSelfRef.ALU__DOT__ALUControl = vlSelfRef.ALUControl;
    vlSelfRef.ALU__DOT__A = vlSelfRef.A;
    vlSelfRef.ALU__DOT__B = vlSelfRef.B;
    vlSelfRef.ALU__DOT__ALUResult = ((8U & (IData)(vlSelfRef.ALU__DOT__ALUControl))
                                      ? ((4U & (IData)(vlSelfRef.ALU__DOT__ALUControl))
                                          ? ((2U & (IData)(vlSelfRef.ALU__DOT__ALUControl))
                                              ? (VL_SHIFTRS_III(32,32,5, vlSelfRef.ALU__DOT__A, 
                                                                (0x0000001fU 
                                                                 & vlSelfRef.ALU__DOT__B)) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.ALU__DOT__ALUControl)))))
                                              : ((vlSelfRef.ALU__DOT__A 
                                                  >> 
                                                  (0x0000001fU 
                                                   & vlSelfRef.ALU__DOT__B)) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.ALU__DOT__ALUControl))))))
                                          : (1U & (- (IData)((IData)(
                                                                     ((0U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.ALU__DOT__ALUControl))) 
                                                                      & (vlSelfRef.ALU__DOT__A 
                                                                         < vlSelfRef.ALU__DOT__B)))))))
                                      : ((4U & (IData)(vlSelfRef.ALU__DOT__ALUControl))
                                          ? ((2U & (IData)(vlSelfRef.ALU__DOT__ALUControl))
                                              ? (1U 
                                                 & (- (IData)(
                                                              ((IData)(vlSelfRef.ALU__DOT__ALUControl) 
                                                               & VL_LTS_III(32, vlSelfRef.ALU__DOT__A, vlSelfRef.ALU__DOT__B)))))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.ALU__DOT__ALUControl))
                                                  ? 
                                                 (vlSelfRef.ALU__DOT__A 
                                                  << 
                                                  (0x0000001fU 
                                                   & vlSelfRef.ALU__DOT__B))
                                                  : 
                                                 (vlSelfRef.ALU__DOT__A 
                                                  ^ vlSelfRef.ALU__DOT__B)))
                                          : ((2U & (IData)(vlSelfRef.ALU__DOT__ALUControl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.ALU__DOT__ALUControl))
                                                  ? 
                                                 (vlSelfRef.ALU__DOT__A 
                                                  | vlSelfRef.ALU__DOT__B)
                                                  : 
                                                 (vlSelfRef.ALU__DOT__A 
                                                  & vlSelfRef.ALU__DOT__B))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.ALU__DOT__ALUControl))
                                                  ? 
                                                 (vlSelfRef.ALU__DOT__A 
                                                  - vlSelfRef.ALU__DOT__B)
                                                  : 
                                                 (vlSelfRef.ALU__DOT__A 
                                                  + vlSelfRef.ALU__DOT__B)))));
    vlSelfRef.ALUResult = vlSelfRef.ALU__DOT__ALUResult;
    vlSelfRef.ALU__DOT__Zero = (0U == vlSelfRef.ALU__DOT__ALUResult);
    vlSelfRef.Zero = vlSelfRef.ALU__DOT__Zero;
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/RV32I_V0/D_Building_block/ALU.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.ALUControl & 0xf0U)))) {
        Verilated::overWidthError("ALUControl");
    }
}
#endif  // VL_DEBUG
