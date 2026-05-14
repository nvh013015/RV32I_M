// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
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

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv32i_m__DOT__SdataSrc = (((IData)(vlSelfRef.rv32i_m__DOT__ALUSrcA) 
                                         << 2U) | (IData)(vlSelfRef.rv32i_m__DOT__ALUSrcB));
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[(0x0000001fU 
                                                                      & vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/Testbench/../RV32I_V0/rv32i_m.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers_vec__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge rv32i_m.controller.fsm_inst.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge rv32i_m.datapath.regFile.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge rv32i_m.datapath.ir_mdr.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge rv32i_m.datapath.spcSrc.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge rv32i_m.datapath.sdataSrc.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge rv32i_m.datapath.sResultSrc.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5585208383081179762ull);
    vlSelf->mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9659133473039683418ull);
    vlSelf->mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 326597072690670135ull);
    vlSelf->mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5431754401481461448ull);
    vlSelf->rv32i_m__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7460314397410195677ull);
    vlSelf->rv32i_m__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 369177836878102938ull);
    vlSelf->rv32i_m__DOT__memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14739126720823959288ull);
    vlSelf->rv32i_m__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12497846194249140127ull);
    vlSelf->rv32i_m__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13441933422822854525ull);
    vlSelf->rv32i_m__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5973379248636602932ull);
    vlSelf->rv32i_m__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11740978564074417357ull);
    vlSelf->rv32i_m__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8881939985143127155ull);
    vlSelf->rv32i_m__DOT__PCwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5460984429292834252ull);
    vlSelf->rv32i_m__DOT__IRwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 616143546756984135ull);
    vlSelf->rv32i_m__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8883376573117927755ull);
    vlSelf->rv32i_m__DOT__AdrSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8921065155748570230ull);
    vlSelf->rv32i_m__DOT__ResultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7716559815695853552ull);
    vlSelf->rv32i_m__DOT__ALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5228603661731304774ull);
    vlSelf->rv32i_m__DOT__ALUSrcB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13301165780324570021ull);
    vlSelf->rv32i_m__DOT__ImmSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5653746732157780739ull);
    vlSelf->rv32i_m__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5892709768120990068ull);
    vlSelf->rv32i_m__DOT__controller__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17189005088404194561ull);
    vlSelf->rv32i_m__DOT__controller__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4771206728156423910ull);
    vlSelf->rv32i_m__DOT__controller__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11722353393537015054ull);
    vlSelf->rv32i_m__DOT__controller__DOT__PCwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 764738913762064239ull);
    vlSelf->rv32i_m__DOT__controller__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2067282858777870940ull);
    vlSelf->rv32i_m__DOT__controller__DOT__IRwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1728140912793099749ull);
    vlSelf->rv32i_m__DOT__controller__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4434881194628469099ull);
    vlSelf->rv32i_m__DOT__controller__DOT__AdrSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 295488622108122789ull);
    vlSelf->rv32i_m__DOT__controller__DOT__ResultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5298955226899533636ull);
    vlSelf->rv32i_m__DOT__controller__DOT__ALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13622811937830828977ull);
    vlSelf->rv32i_m__DOT__controller__DOT__ALUSrcB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8257481821809761066ull);
    vlSelf->rv32i_m__DOT__controller__DOT__ImmSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15799015841022183838ull);
    vlSelf->rv32i_m__DOT__controller__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14387039045295181114ull);
    vlSelf->rv32i_m__DOT__controller__DOT__ALUop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17909890587058309550ull);
    vlSelf->rv32i_m__DOT__controller__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13313396094494675007ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14120963357157976437ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7118721827498529712ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18331877075594578744ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10944465174041324249ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8993996633372004039ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17034777083319011770ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5483150629687680546ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17803974204162194888ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16465791456117962048ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8483332395433592001ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3906802761315112507ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9454955673314708791ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4260736258263254812ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4802544594932083666ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8004027568704473184ull);
    vlSelf->rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9584486832269211297ull);
    vlSelf->rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10577822420774905371ull);
    vlSelf->rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1255699113874998556ull);
    vlSelf->rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15659658989133242110ull);
    vlSelf->rv32i_m__DOT__controller__DOT__decoder__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8752886152774725663ull);
    vlSelf->rv32i_m__DOT__controller__DOT__decoder__DOT__ExtOp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12745268831689032366ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17640407837747276253ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13666740941395359131ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10733486665674192895ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__AdrSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14057655310341582064ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12718490136997973997ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__IRWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14211169941135677723ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14368202739378705781ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ResultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8241932189318327482ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11428755515271937110ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__SdataSrc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9236061296066625947ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ImmSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4377722456085556914ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__Instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8293834814238922744ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12755015847174228026ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__MemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18355233987191419777ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__MemWriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16603650192435686199ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__MemReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 659865525066185441ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ALUResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14262651711959065468ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 932819499411758859ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__oldPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5367056554471325266ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12924088223215936802ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__mdr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5337922371074967277ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2993147067786096418ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3707483185626157358ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7200356786530021797ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ALUSrcA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5360975002700050927ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ALUSrcB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17352130785821407744ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__regFile__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12976694568494745744ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8890649809066043643ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9467273815464041986ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__regFile__DOT__rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8578856640612492583ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__regFile__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15291426613078820961ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__regFile__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11076612913681486464ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9539592441910190778ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4230211334111235122ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 311829499222499944ull);
    }
    vlSelf->rv32i_m__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rv32i_m__DOT__datapath__DOT__extender__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2315977698067540215ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 602614296376555625ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__extender__DOT__extImm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16101694976391351126ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8819093657125898179ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14713191788545246746ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__IRWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4030956650834845273ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13304700524764135753ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14282120827878355495ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__oldPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5704514113929514085ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1133089495921029674ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15987976868673621366ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9602206904443762793ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9438692200718257455ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1727908036963361906ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__spcSrc__DOT__newPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2175579685293283306ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6296675531671031103ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10119901581559703198ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4501777516623730342ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__spcSrc__DOT__MemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8882270385934756743ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15046429453782297513ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__newPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 649667963872760280ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__oldPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14606250084942971102ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2850869764265791348ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17567140093241234782ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6814064370988905788ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 822836472353924560ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9894708245643438888ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8930468837564719698ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4782693749228494158ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14501987886140407714ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__Data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9419051332104545833ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9299913094794451822ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__alu__DOT__A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8056233215225380033ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__alu__DOT__B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3160914743661062437ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3318279854549309827ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__alu__DOT__Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5201239257080988196ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8949244609666134023ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3210417732898796103ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUresult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13366792197786701483ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__MemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11478991756927567569ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14721792144716599315ull);
    vlSelf->rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7655905930855030402ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__regFile__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
