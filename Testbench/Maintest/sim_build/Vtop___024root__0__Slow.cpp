// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile[(0x0000001fU 
                                                                            & vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 1024, 0, "program.hex"s,  &(vlSelfRef.Top__DOT__memory__DOT__ram)
                 , 0, ~0ULL);
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
            VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/Testbench/Maintest/../../RV32I_V0/Top.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge Top.cpu.controller.fsm_inst.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge Top.cpu.datapath.regFile.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge Top.cpu.datapath.ir.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge Top.cpu.datapath.mdr.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge Top.cpu.datapath.spcSrc.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge Top.cpu.datapath.sdataSrc.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge Top.cpu.datapath.sResultSrc.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge Top.memory.clk)\n");
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
    vlSelf->Top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15581438347449058537ull);
    vlSelf->Top__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5576838674523384047ull);
    vlSelf->Top__DOT__memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5729213696594658927ull);
    vlSelf->Top__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12423766748037753825ull);
    vlSelf->Top__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11616067320644209941ull);
    vlSelf->Top__DOT__mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10921420263019649199ull);
    vlSelf->Top__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3159181184631437810ull);
    vlSelf->Top__DOT__cpu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7574450455385687725ull);
    vlSelf->Top__DOT__cpu__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5970887251590338191ull);
    vlSelf->Top__DOT__cpu__DOT__memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4512872901142811656ull);
    vlSelf->Top__DOT__cpu__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2037814357960884096ull);
    vlSelf->Top__DOT__cpu__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 130112119837702784ull);
    vlSelf->Top__DOT__cpu__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7845519334554174999ull);
    vlSelf->Top__DOT__cpu__DOT__mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12747878953746484427ull);
    vlSelf->Top__DOT__cpu__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5008636240274322654ull);
    vlSelf->Top__DOT__cpu__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17757476522881396545ull);
    vlSelf->Top__DOT__cpu__DOT__PCwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15851199608657043777ull);
    vlSelf->Top__DOT__cpu__DOT__IRwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1565794340503407986ull);
    vlSelf->Top__DOT__cpu__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14182419463199950822ull);
    vlSelf->Top__DOT__cpu__DOT__AdrSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14127625514155559175ull);
    vlSelf->Top__DOT__cpu__DOT__ResultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14418331671498030708ull);
    vlSelf->Top__DOT__cpu__DOT__SALUsrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2081674371224445112ull);
    vlSelf->Top__DOT__cpu__DOT__SALUsrcB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15448560270929754411ull);
    vlSelf->Top__DOT__cpu__DOT__ImmSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 463811607943449808ull);
    vlSelf->Top__DOT__cpu__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12979728923294305496ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2255149980104011214ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6880953692575933828ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6999070004612867198ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6298709910604989279ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__PCwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2016691145712698278ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17668206172173814782ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__IRwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10305144209583725581ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15877613638556014976ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__AdrSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6805740812912452024ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__ResultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14415890149804345767ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__SALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1569345039339509522ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__SALUSrcB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8556313533766653509ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__ImmSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15154934250672655933ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12569780886576385928ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__ALUop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1813185284604840135ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1442861864951227416ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11592283492625576991ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3470781846166571201ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__IRWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11331754213001834944ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5022642892098368424ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__AdrSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1792172187052145546ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ResultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3701201954368986995ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4889826332966548942ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__SALUSrcB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5041945714267041672ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__ALUCop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17322836437586090951ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1011186978275954844ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9421922414900167282ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1541271331777111104ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3005968403584809588ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3377812141138342813ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10499763959509906ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11266824273815738182ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4953102202569121186ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2053164130784128135ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__aluC_Generator__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2787548911358632691ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14542722014224459199ull);
    vlSelf->Top__DOT__cpu__DOT__controller__DOT__decoder__DOT__ExtOp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9652163295232031036ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10221466454325049740ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12731952107922917028ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9418436196286841390ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__AdrSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10692794192236668567ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1444592891599546845ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__IRWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8679969329048297550ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12266665093043095092ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ResultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5603091561156167535ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2096089284712023728ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__SALUsrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4918292781186863432ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__SALUsrcB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14511203639901550865ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ImmSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9001791649388153021ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__Instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10593436345754686450ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1876608200534317798ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__MemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1183491507735077267ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__MemWriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6502638393803081055ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__MemWriteMask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7113159052113009478ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__MemReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10972833060151286693ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ALUResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16473336835859412471ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__Result_From_ResultSrc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11712881896344566399ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__oldPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7874811036769424916ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10356137772939662619ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__mdr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6251349277060759861ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15031087061297906619ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9674830997612492785ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16012879374316520496ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ALUSrcA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7038006900922278671ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ALUSrcB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12474931123495147414ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17111198274473375836ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7455654590502699208ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7603583411815850474ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1985149922284837021ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8066306284620157526ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3773536750412382607ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14634156946824980101ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17379939444375482729ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 876963560113755936ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__regFile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8073254869090222233ull);
    }
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14526722812213178889ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__ExtOp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11110600866073098664ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__extender__DOT__extImm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15575279971224053223ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14264956162913028552ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16787905718687070203ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__IRWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4505863946782835148ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9998755520838008473ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5391373032132884649ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__oldPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5068134827422047839ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__o_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16550635052728542591ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9771663531974055374ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5375686332363319730ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Which_load_comment = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12232173827748825238ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__What_HW_or_B = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4911596139250628324ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13212159277596323511ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__o_Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2659860245247079595ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__i_Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3021145908495799226ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__store__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15041029666446139797ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__store__DOT__WhichStore = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9453097116674219234ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__store__DOT__which_half_or_byte = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10940181627771653963ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7425134811701026507ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__store__DOT__storeMask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4828054652714972180ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3954087967753708429ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13000147428757699204ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12153347839284042781ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__newPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8093116646288581139ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Result_From_ResultSrc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16222982646266546051ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__Select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9588051972559739257ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7899641850950594909ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__MemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15856031458558694210ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4916845992555899470ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6558037091337477138ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__newPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16932639272350876910ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__oldPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2763022092636242534ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6521523393377298743ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17589079483984231139ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4661412689765985012ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3536645630454863507ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6603093036630343230ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10128974276919322194ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18052529581866818689ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__Data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9365388816201829750ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4571417777226476405ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12674370260656741210ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10437307751966131330ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12281767544265617849ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__ALUResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5863831996127627116ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__alu__DOT__Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12602971815863585617ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7514545298557542335ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2250738408119164923ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__resultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11733450653216520323ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUresult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1830977057930677705ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__MemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13955311665525738509ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16072165574934988383ull);
    vlSelf->Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__ALUout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3683844073642340800ull);
    vlSelf->Top__DOT__memory__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17407180523109021890ull);
    vlSelf->Top__DOT__memory__DOT__memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8460947799145111817ull);
    vlSelf->Top__DOT__memory__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2365509651396763915ull);
    vlSelf->Top__DOT__memory__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 112579349787872790ull);
    vlSelf->Top__DOT__memory__DOT__mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3794192217261688223ull);
    vlSelf->Top__DOT__memory__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16259073242189221599ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->Top__DOT__memory__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18226569174190927246ull);
    }
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
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__controller__DOT__fsm_inst__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__regFile__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__ir__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__mdr__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__spcSrc__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__sdataSrc__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__cpu__DOT__datapath__DOT__sResultSrc__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__memory__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
