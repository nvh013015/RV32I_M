// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__FETCH;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__DECODE;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_ADR;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_READ;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_WRITEBACK;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MEM_WRITE;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__EXECUTE_R;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALU_WRITEBACK;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__EXECUTE_I;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__JAL;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__BEQ;
constexpr CData/*3:0*/ Vtop___024root::rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IDLE;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
