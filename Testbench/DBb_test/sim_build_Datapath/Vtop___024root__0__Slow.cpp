// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.Datapath__DOT__regFile__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, vlSelfRef.Datapath__DOT__regFile__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.Datapath__DOT__regFile__DOT__regFile[(0x0000001fU 
                                                        & vlSelfRef.Datapath__DOT__regFile__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.Datapath__DOT__regFile__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.Datapath__DOT__regFile__DOT__unnamedblk1__DOT__i);
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
            VL_FATAL_MT("/home/nvh-0502/Documents/Git/RV32I_M/RV32I_V0/Datapath.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge Datapath.regFile.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge Datapath.ir.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge Datapath.mdr.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge Datapath.spcSrc.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge Datapath.sdataSrc.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge Datapath.sResultSrc.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5049867245517871442ull);
    vlSelf->AdrSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2445725712452279387ull);
    vlSelf->MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6222392603918024337ull);
    vlSelf->IRWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7021792388536529238ull);
    vlSelf->RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806711693106967809ull);
    vlSelf->ResultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2013901377351345292ull);
    vlSelf->ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12027995870610903095ull);
    vlSelf->SdataSrc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1115467483943526790ull);
    vlSelf->ImmSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15954635039253431936ull);
    vlSelf->Instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6259496675603560950ull);
    vlSelf->Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11690423782136958100ull);
    vlSelf->MemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14206314125122513421ull);
    vlSelf->MemWriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16088217852827146957ull);
    vlSelf->MemWriteMask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1752002591235800690ull);
    vlSelf->MemReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13595288136106938695ull);
    vlSelf->Datapath__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11605874115290971085ull);
    vlSelf->Datapath__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5712635685957717329ull);
    vlSelf->Datapath__DOT__PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10635180612558639283ull);
    vlSelf->Datapath__DOT__AdrSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12353515946308714827ull);
    vlSelf->Datapath__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5380929959847851798ull);
    vlSelf->Datapath__DOT__IRWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6209793941954174871ull);
    vlSelf->Datapath__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7765584812442138939ull);
    vlSelf->Datapath__DOT__ResultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3843648629794218723ull);
    vlSelf->Datapath__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9648513020513744030ull);
    vlSelf->Datapath__DOT__SdataSrc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11545431220799116905ull);
    vlSelf->Datapath__DOT__ImmSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3350199140945519973ull);
    vlSelf->Datapath__DOT__Instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 552357355549868642ull);
    vlSelf->Datapath__DOT__Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11636414760352382438ull);
    vlSelf->Datapath__DOT__MemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1099804591281999969ull);
    vlSelf->Datapath__DOT__MemWriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4246261048021338660ull);
    vlSelf->Datapath__DOT__MemWriteMask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2045938541877649659ull);
    vlSelf->Datapath__DOT__MemReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5659343850182561059ull);
    vlSelf->Datapath__DOT__ALUResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5902369032818635819ull);
    vlSelf->Datapath__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7678414866240049499ull);
    vlSelf->Datapath__DOT__oldPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14667775001602132415ull);
    vlSelf->Datapath__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8818022193856271058ull);
    vlSelf->Datapath__DOT__mdr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16661299948978108608ull);
    vlSelf->Datapath__DOT__rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2561090422012257820ull);
    vlSelf->Datapath__DOT__rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12907392691103759654ull);
    vlSelf->Datapath__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5812690558392156015ull);
    vlSelf->Datapath__DOT__ALUSrcA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11665739934669905490ull);
    vlSelf->Datapath__DOT__ALUSrcB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14630309250571108629ull);
    vlSelf->Datapath__DOT__regFile__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5486411380247614466ull);
    vlSelf->Datapath__DOT__regFile__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12402340794766279946ull);
    vlSelf->Datapath__DOT__regFile__DOT__rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16873190304318391895ull);
    vlSelf->Datapath__DOT__regFile__DOT__rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13490425418695874853ull);
    vlSelf->Datapath__DOT__regFile__DOT__rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12633428118040888519ull);
    vlSelf->Datapath__DOT__regFile__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2978510843293179454ull);
    vlSelf->Datapath__DOT__regFile__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17706133334336840942ull);
    vlSelf->Datapath__DOT__regFile__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 190313874219199232ull);
    vlSelf->Datapath__DOT__regFile__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1559830290656562198ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Datapath__DOT__regFile__DOT__regFile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16320134062054981490ull);
    }
    vlSelf->Datapath__DOT__regFile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->Datapath__DOT__regFile__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->Datapath__DOT__extender__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10129245073732381193ull);
    vlSelf->Datapath__DOT__extender__DOT__ExtOp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10166682780094688346ull);
    vlSelf->Datapath__DOT__extender__DOT__extImm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10822794594262763102ull);
    vlSelf->Datapath__DOT__ir__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14194030650964792780ull);
    vlSelf->Datapath__DOT__ir__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13605060769674229037ull);
    vlSelf->Datapath__DOT__ir__DOT__IRWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2660197010080560715ull);
    vlSelf->Datapath__DOT__ir__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9065417382479052971ull);
    vlSelf->Datapath__DOT__ir__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9640068086827746421ull);
    vlSelf->Datapath__DOT__ir__DOT__oldPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3311550872309882451ull);
    vlSelf->Datapath__DOT__ir__DOT__o_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18379665758776064434ull);
    vlSelf->Datapath__DOT__mdr__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15161166923604810582ull);
    vlSelf->Datapath__DOT__mdr__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15645311972022133984ull);
    vlSelf->Datapath__DOT__mdr__DOT__Which_load_comment = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2516577205093981273ull);
    vlSelf->Datapath__DOT__mdr__DOT__What_HW_or_B = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15829237830447762309ull);
    vlSelf->Datapath__DOT__mdr__DOT__Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12318850833564189572ull);
    vlSelf->Datapath__DOT__mdr__DOT__o_Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12474797493081186990ull);
    vlSelf->Datapath__DOT__mdr__DOT__i_Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17613136750753901525ull);
    vlSelf->Datapath__DOT__store__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1797264324670162344ull);
    vlSelf->Datapath__DOT__store__DOT__WhichStore = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6959822534473171413ull);
    vlSelf->Datapath__DOT__store__DOT__which_half_or_byte = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14870781539709934963ull);
    vlSelf->Datapath__DOT__store__DOT__storeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7324918576999053354ull);
    vlSelf->Datapath__DOT__store__DOT__storeMask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13419619472055068756ull);
    vlSelf->Datapath__DOT__spcSrc__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4866046355883695297ull);
    vlSelf->Datapath__DOT__spcSrc__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 262306301865401648ull);
    vlSelf->Datapath__DOT__spcSrc__DOT__PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17787535598762396834ull);
    vlSelf->Datapath__DOT__spcSrc__DOT__newPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13349645762884146624ull);
    vlSelf->Datapath__DOT__spcSrc__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15461377561462653435ull);
    vlSelf->Datapath__DOT__spcSrc__DOT__Select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9895709574308349218ull);
    vlSelf->Datapath__DOT__spcSrc__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13191297023702665291ull);
    vlSelf->Datapath__DOT__spcSrc__DOT__MemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13417789983740724805ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14616800167434818534ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13731154671614907197ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__newPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8115588887505504084ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__oldPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10476793124954602913ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5793774176933424658ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13490468440344487054ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11997736083893132846ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__SdataSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11694272168457878244ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__SdataSrcB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 712981866475348932ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__ALUsrcA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11359086381336062137ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__ALUsrcB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4221142593463295048ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__Data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16696234447301421919ull);
    vlSelf->Datapath__DOT__sdataSrc__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16101808731568125204ull);
    vlSelf->Datapath__DOT__alu__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14868614400646296066ull);
    vlSelf->Datapath__DOT__alu__DOT__A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9906173190575569438ull);
    vlSelf->Datapath__DOT__alu__DOT__B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3708062653203722920ull);
    vlSelf->Datapath__DOT__alu__DOT__ALUResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17482569061948460793ull);
    vlSelf->Datapath__DOT__alu__DOT__Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 117309716888968970ull);
    vlSelf->Datapath__DOT__sResultSrc__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6260128351326011007ull);
    vlSelf->Datapath__DOT__sResultSrc__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12795871697367419060ull);
    vlSelf->Datapath__DOT__sResultSrc__DOT__resultSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12380109379225814419ull);
    vlSelf->Datapath__DOT__sResultSrc__DOT__ALUresult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10513279104672982680ull);
    vlSelf->Datapath__DOT__sResultSrc__DOT__MemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17918231542837079830ull);
    vlSelf->Datapath__DOT__sResultSrc__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16579606072898109230ull);
    vlSelf->Datapath__DOT__sResultSrc__DOT__ALUout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10224832356562593711ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__Datapath__DOT__regFile__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Datapath__DOT__ir__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Datapath__DOT__mdr__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Datapath__DOT__spcSrc__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Datapath__DOT__sdataSrc__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Datapath__DOT__sResultSrc__DOT__clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
