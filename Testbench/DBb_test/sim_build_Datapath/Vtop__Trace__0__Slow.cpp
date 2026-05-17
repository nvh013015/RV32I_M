// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"AdrSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"IRWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"ResultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"SdataSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"ImmSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"Instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"MemAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"MemWriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"MemWriteMask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"MemReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Datapath", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+20,0,"AdrSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"IRWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"ResultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"SdataSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"ImmSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"Instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"MemAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"MemWriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"MemWriteMask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"MemReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"oldPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"mdr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"ALUSrcA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"ALUSrcB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"ALUResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "extender", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"ExtOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"extImm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ir", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"IRWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"oldPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"o_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mdr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"Which_load_comment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"What_HW_or_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"o_Data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"i_Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "regFile", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "regFile", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+75+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "sResultSrc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"resultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"ALUresult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"MemData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"ALUout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "sdataSrc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+115,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"newPC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"oldPC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+119,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+120,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+121,0,"SdataSrcA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+122,0,"SdataSrcB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"ALUsrcA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+124,0,"ALUsrcB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"Data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+126,0,"writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "spcSrc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"newPC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"Result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"Select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"MemAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "store", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"WhichStore",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"which_half_or_byte",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+138,0,"storeData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"storeMask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.clock));
    bufp->fullBit(oldp+1,(vlSelfRef.reset));
    bufp->fullBit(oldp+2,(vlSelfRef.PCWrite));
    bufp->fullBit(oldp+3,(vlSelfRef.AdrSrc));
    bufp->fullBit(oldp+4,(vlSelfRef.MemWrite));
    bufp->fullBit(oldp+5,(vlSelfRef.IRWrite));
    bufp->fullBit(oldp+6,(vlSelfRef.RegWrite));
    bufp->fullCData(oldp+7,(vlSelfRef.ResultSrc),2);
    bufp->fullCData(oldp+8,(vlSelfRef.ALUControl),4);
    bufp->fullCData(oldp+9,(vlSelfRef.SdataSrc),4);
    bufp->fullCData(oldp+10,(vlSelfRef.ImmSrc),3);
    bufp->fullIData(oldp+11,(vlSelfRef.Instruction),32);
    bufp->fullBit(oldp+12,(vlSelfRef.Zero));
    bufp->fullIData(oldp+13,(vlSelfRef.MemAddr),32);
    bufp->fullIData(oldp+14,(vlSelfRef.MemWriteData),32);
    bufp->fullCData(oldp+15,(vlSelfRef.MemWriteMask),4);
    bufp->fullIData(oldp+16,(vlSelfRef.MemReadData),32);
    bufp->fullBit(oldp+17,(vlSelfRef.Datapath__DOT__clock));
    bufp->fullBit(oldp+18,(vlSelfRef.Datapath__DOT__reset));
    bufp->fullBit(oldp+19,(vlSelfRef.Datapath__DOT__PCWrite));
    bufp->fullBit(oldp+20,(vlSelfRef.Datapath__DOT__AdrSrc));
    bufp->fullBit(oldp+21,(vlSelfRef.Datapath__DOT__MemWrite));
    bufp->fullBit(oldp+22,(vlSelfRef.Datapath__DOT__IRWrite));
    bufp->fullBit(oldp+23,(vlSelfRef.Datapath__DOT__RegWrite));
    bufp->fullCData(oldp+24,(vlSelfRef.Datapath__DOT__ResultSrc),2);
    bufp->fullCData(oldp+25,(vlSelfRef.Datapath__DOT__ALUControl),4);
    bufp->fullCData(oldp+26,(vlSelfRef.Datapath__DOT__SdataSrc),4);
    bufp->fullCData(oldp+27,(vlSelfRef.Datapath__DOT__ImmSrc),3);
    bufp->fullIData(oldp+28,(vlSelfRef.Datapath__DOT__Instruction),32);
    bufp->fullBit(oldp+29,(vlSelfRef.Datapath__DOT__Zero));
    bufp->fullIData(oldp+30,(vlSelfRef.Datapath__DOT__MemAddr),32);
    bufp->fullIData(oldp+31,(vlSelfRef.Datapath__DOT__MemWriteData),32);
    bufp->fullCData(oldp+32,(vlSelfRef.Datapath__DOT__MemWriteMask),4);
    bufp->fullIData(oldp+33,(vlSelfRef.Datapath__DOT__MemReadData),32);
    bufp->fullIData(oldp+34,(vlSelfRef.Datapath__DOT__ALUResult),32);
    bufp->fullIData(oldp+35,(vlSelfRef.Datapath__DOT__Result),32);
    bufp->fullIData(oldp+36,(vlSelfRef.Datapath__DOT__oldPC),32);
    bufp->fullIData(oldp+37,(vlSelfRef.Datapath__DOT__PC),32);
    bufp->fullIData(oldp+38,(vlSelfRef.Datapath__DOT__mdr_data),32);
    bufp->fullIData(oldp+39,(vlSelfRef.Datapath__DOT__rd1),32);
    bufp->fullIData(oldp+40,(vlSelfRef.Datapath__DOT__rd2),32);
    bufp->fullIData(oldp+41,(vlSelfRef.Datapath__DOT__imm),32);
    bufp->fullIData(oldp+42,(vlSelfRef.Datapath__DOT__ALUSrcA),32);
    bufp->fullIData(oldp+43,(vlSelfRef.Datapath__DOT__ALUSrcB),32);
    bufp->fullCData(oldp+44,(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl),4);
    bufp->fullIData(oldp+45,(vlSelfRef.Datapath__DOT__alu__DOT__A),32);
    bufp->fullIData(oldp+46,(vlSelfRef.Datapath__DOT__alu__DOT__B),32);
    bufp->fullIData(oldp+47,(vlSelfRef.Datapath__DOT__alu__DOT__ALUResult),32);
    bufp->fullBit(oldp+48,(vlSelfRef.Datapath__DOT__alu__DOT__Zero));
    bufp->fullIData(oldp+49,(vlSelfRef.Datapath__DOT__extender__DOT__imm),32);
    bufp->fullCData(oldp+50,(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp),3);
    bufp->fullIData(oldp+51,(vlSelfRef.Datapath__DOT__extender__DOT__extImm),32);
    bufp->fullBit(oldp+52,(vlSelfRef.Datapath__DOT__ir__DOT__reset));
    bufp->fullBit(oldp+53,(vlSelfRef.Datapath__DOT__ir__DOT__clock));
    bufp->fullBit(oldp+54,(vlSelfRef.Datapath__DOT__ir__DOT__IRWrite));
    bufp->fullIData(oldp+55,(vlSelfRef.Datapath__DOT__ir__DOT__instruction),32);
    bufp->fullIData(oldp+56,(vlSelfRef.Datapath__DOT__ir__DOT__PC),32);
    bufp->fullIData(oldp+57,(vlSelfRef.Datapath__DOT__ir__DOT__oldPC),32);
    bufp->fullIData(oldp+58,(vlSelfRef.Datapath__DOT__ir__DOT__o_instruction),32);
    bufp->fullBit(oldp+59,(vlSelfRef.Datapath__DOT__mdr__DOT__reset));
    bufp->fullBit(oldp+60,(vlSelfRef.Datapath__DOT__mdr__DOT__clock));
    bufp->fullCData(oldp+61,(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment),3);
    bufp->fullCData(oldp+62,(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B),2);
    bufp->fullIData(oldp+63,(vlSelfRef.Datapath__DOT__mdr__DOT__Data),32);
    bufp->fullIData(oldp+64,(vlSelfRef.Datapath__DOT__mdr__DOT__o_Data),32);
    bufp->fullIData(oldp+65,(vlSelfRef.Datapath__DOT__mdr__DOT__i_Data),32);
    bufp->fullBit(oldp+66,(vlSelfRef.Datapath__DOT__regFile__DOT__clock));
    bufp->fullBit(oldp+67,(vlSelfRef.Datapath__DOT__regFile__DOT__reset));
    bufp->fullCData(oldp+68,(vlSelfRef.Datapath__DOT__regFile__DOT__rs1_addr),5);
    bufp->fullCData(oldp+69,(vlSelfRef.Datapath__DOT__regFile__DOT__rs2_addr),5);
    bufp->fullCData(oldp+70,(vlSelfRef.Datapath__DOT__regFile__DOT__rd_addr),5);
    bufp->fullIData(oldp+71,(vlSelfRef.Datapath__DOT__regFile__DOT__writeData),32);
    bufp->fullBit(oldp+72,(vlSelfRef.Datapath__DOT__regFile__DOT__RegWrite));
    bufp->fullIData(oldp+73,(vlSelfRef.Datapath__DOT__regFile__DOT__rs1_data),32);
    bufp->fullIData(oldp+74,(vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data),32);
    bufp->fullIData(oldp+75,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[31]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[30]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[29]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[28]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[27]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[26]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[25]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[24]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[23]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[22]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[21]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[20]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[19]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[18]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[17]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[16]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[15]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[14]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[13]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[12]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[11]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[10]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[9]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[8]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[7]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[6]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[5]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[4]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[3]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[2]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[1]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[0]),32);
    bufp->fullBit(oldp+107,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__clock));
    bufp->fullBit(oldp+108,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__reset));
    bufp->fullCData(oldp+109,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__resultSrc),2);
    bufp->fullIData(oldp+110,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUresult),32);
    bufp->fullIData(oldp+111,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData),32);
    bufp->fullIData(oldp+112,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__Result),32);
    bufp->fullIData(oldp+113,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUout),32);
    bufp->fullBit(oldp+114,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__clock));
    bufp->fullBit(oldp+115,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__reset));
    bufp->fullIData(oldp+116,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__newPC),32);
    bufp->fullIData(oldp+117,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__oldPC),32);
    bufp->fullIData(oldp+118,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1),32);
    bufp->fullIData(oldp+119,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2),32);
    bufp->fullIData(oldp+120,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm),32);
    bufp->fullCData(oldp+121,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcA),2);
    bufp->fullCData(oldp+122,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcB),2);
    bufp->fullIData(oldp+123,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcA),32);
    bufp->fullIData(oldp+124,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcB),32);
    bufp->fullIData(oldp+125,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__Data1),32);
    bufp->fullIData(oldp+126,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__writeData),32);
    bufp->fullBit(oldp+127,(vlSelfRef.Datapath__DOT__spcSrc__DOT__clk));
    bufp->fullBit(oldp+128,(vlSelfRef.Datapath__DOT__spcSrc__DOT__reset));
    bufp->fullBit(oldp+129,(vlSelfRef.Datapath__DOT__spcSrc__DOT__PCWrite));
    bufp->fullIData(oldp+130,(vlSelfRef.Datapath__DOT__spcSrc__DOT__newPC),32);
    bufp->fullIData(oldp+131,(vlSelfRef.Datapath__DOT__spcSrc__DOT__Result),32);
    bufp->fullBit(oldp+132,(vlSelfRef.Datapath__DOT__spcSrc__DOT__Select));
    bufp->fullIData(oldp+133,(vlSelfRef.Datapath__DOT__spcSrc__DOT__PC),32);
    bufp->fullIData(oldp+134,(vlSelfRef.Datapath__DOT__spcSrc__DOT__MemAddr),32);
    bufp->fullIData(oldp+135,(vlSelfRef.Datapath__DOT__store__DOT__writeData),32);
    bufp->fullCData(oldp+136,(vlSelfRef.Datapath__DOT__store__DOT__WhichStore),3);
    bufp->fullCData(oldp+137,(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte),2);
    bufp->fullIData(oldp+138,(vlSelfRef.Datapath__DOT__store__DOT__storeData),32);
    bufp->fullCData(oldp+139,(vlSelfRef.Datapath__DOT__store__DOT__storeMask),4);
}
