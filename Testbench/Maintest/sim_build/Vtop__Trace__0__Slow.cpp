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
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rv32i_m", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"PCwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"IRwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"AdrSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"ResultSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"ALUSrcA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"ALUSrcB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"ImmSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"ALUControl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"SdataSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "controller", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"PCwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"IRwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"AdrSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"ResultSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"ALUSrcA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"ALUSrcB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"ImmSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"ALUControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"ALUop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "aluC_Generator", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"ALUControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "decoder", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"ExtOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "fsm_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"PCWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"IRWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"AdrSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"ResultSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"ALUSrcA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"ALUSrcB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"ALUCop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"FETCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"DECODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"MEM_ADR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"MEM_WRITEBACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"EXECUTE_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"ALU_WRITEBACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"EXECUTE_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "datapath", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"AdrSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"IRWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"ResultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"SdataSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"ImmSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"Instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"MemAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"MemWriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"MemReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"oldPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"mdr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"ALUSrcA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"ALUSrcB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"ALUResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "extender", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"ExtOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"extImm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ir_mdr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"IRWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"oldPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"o_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"o_Data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "regFile", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "regFile", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+111+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "sResultSrc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"resultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+145,0,"ALUresult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+146,0,"MemData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"ALUout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "sdataSrc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"newPC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"oldPC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+152,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"SdataSrcA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"SdataSrcB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"writeData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"ALUsrcA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+159,0,"ALUsrcB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"Data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "spcSrc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+162,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"newPC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"Result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"Select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+166,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"MemAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
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

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+168,(0U),4);
    bufp->fullCData(oldp+169,(1U),4);
    bufp->fullCData(oldp+170,(2U),4);
    bufp->fullCData(oldp+171,(3U),4);
    bufp->fullCData(oldp+172,(4U),4);
    bufp->fullCData(oldp+173,(5U),4);
    bufp->fullCData(oldp+174,(6U),4);
    bufp->fullCData(oldp+175,(7U),4);
    bufp->fullCData(oldp+176,(8U),4);
    bufp->fullCData(oldp+177,(9U),4);
    bufp->fullCData(oldp+178,(0x0aU),4);
    bufp->fullCData(oldp+179,(0x0fU),4);
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
    bufp->fullBit(oldp+0,(vlSelfRef.clk));
    bufp->fullBit(oldp+1,(vlSelfRef.reset));
    bufp->fullBit(oldp+2,(vlSelfRef.memWrite));
    bufp->fullIData(oldp+3,(vlSelfRef.mem_rdata),32);
    bufp->fullIData(oldp+4,(vlSelfRef.mem_addr),32);
    bufp->fullIData(oldp+5,(vlSelfRef.mem_wdata),32);
    bufp->fullBit(oldp+6,(vlSelfRef.rv32i_m__DOT__clk));
    bufp->fullBit(oldp+7,(vlSelfRef.rv32i_m__DOT__reset));
    bufp->fullBit(oldp+8,(vlSelfRef.rv32i_m__DOT__memWrite));
    bufp->fullIData(oldp+9,(vlSelfRef.rv32i_m__DOT__mem_rdata),32);
    bufp->fullIData(oldp+10,(vlSelfRef.rv32i_m__DOT__mem_addr),32);
    bufp->fullIData(oldp+11,(vlSelfRef.rv32i_m__DOT__mem_wdata),32);
    bufp->fullBit(oldp+12,(vlSelfRef.rv32i_m__DOT__zero));
    bufp->fullIData(oldp+13,(vlSelfRef.rv32i_m__DOT__instruction),32);
    bufp->fullBit(oldp+14,(vlSelfRef.rv32i_m__DOT__PCwrite));
    bufp->fullBit(oldp+15,(vlSelfRef.rv32i_m__DOT__IRwrite));
    bufp->fullBit(oldp+16,(vlSelfRef.rv32i_m__DOT__RegWrite));
    bufp->fullBit(oldp+17,(vlSelfRef.rv32i_m__DOT__AdrSrc));
    bufp->fullCData(oldp+18,(vlSelfRef.rv32i_m__DOT__ResultSrc),2);
    bufp->fullCData(oldp+19,(vlSelfRef.rv32i_m__DOT__ALUSrcA),2);
    bufp->fullCData(oldp+20,(vlSelfRef.rv32i_m__DOT__ALUSrcB),2);
    bufp->fullCData(oldp+21,(vlSelfRef.rv32i_m__DOT__ImmSrc),3);
    bufp->fullCData(oldp+22,(vlSelfRef.rv32i_m__DOT__ALUControl),4);
    bufp->fullCData(oldp+23,(vlSelfRef.rv32i_m__DOT__SdataSrc),4);
    bufp->fullBit(oldp+24,(vlSelfRef.rv32i_m__DOT__controller__DOT__clk));
    bufp->fullBit(oldp+25,(vlSelfRef.rv32i_m__DOT__controller__DOT__zero));
    bufp->fullIData(oldp+26,(vlSelfRef.rv32i_m__DOT__controller__DOT__instruction),32);
    bufp->fullBit(oldp+27,(vlSelfRef.rv32i_m__DOT__controller__DOT__PCwrite));
    bufp->fullBit(oldp+28,(vlSelfRef.rv32i_m__DOT__controller__DOT__MemWrite));
    bufp->fullBit(oldp+29,(vlSelfRef.rv32i_m__DOT__controller__DOT__IRwrite));
    bufp->fullBit(oldp+30,(vlSelfRef.rv32i_m__DOT__controller__DOT__RegWrite));
    bufp->fullBit(oldp+31,(vlSelfRef.rv32i_m__DOT__controller__DOT__AdrSrc));
    bufp->fullCData(oldp+32,(vlSelfRef.rv32i_m__DOT__controller__DOT__ResultSrc),2);
    bufp->fullCData(oldp+33,(vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcA),2);
    bufp->fullCData(oldp+34,(vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcB),2);
    bufp->fullCData(oldp+35,(vlSelfRef.rv32i_m__DOT__controller__DOT__ImmSrc),3);
    bufp->fullCData(oldp+36,(vlSelfRef.rv32i_m__DOT__controller__DOT__ALUControl),4);
    bufp->fullCData(oldp+37,(vlSelfRef.rv32i_m__DOT__controller__DOT__ALUop),2);
    bufp->fullBit(oldp+38,(vlSelfRef.rv32i_m__DOT__controller__DOT__branch));
    bufp->fullIData(oldp+39,(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction),32);
    bufp->fullCData(oldp+40,(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp),2);
    bufp->fullCData(oldp+41,(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUControl),4);
    bufp->fullIData(oldp+42,(vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction),32);
    bufp->fullCData(oldp+43,(vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__ExtOp),3);
    bufp->fullBit(oldp+44,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite));
    bufp->fullBit(oldp+45,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite));
    bufp->fullBit(oldp+46,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite));
    bufp->fullBit(oldp+47,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite));
    bufp->fullBit(oldp+48,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc));
    bufp->fullCData(oldp+49,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc),2);
    bufp->fullCData(oldp+50,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA),2);
    bufp->fullCData(oldp+51,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB),2);
    bufp->fullCData(oldp+52,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop),2);
    bufp->fullBit(oldp+53,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__branch));
    bufp->fullBit(oldp+54,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock));
    bufp->fullBit(oldp+55,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__zero));
    bufp->fullIData(oldp+56,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__instruction),32);
    bufp->fullCData(oldp+57,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op),7);
    bufp->fullCData(oldp+58,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state),4);
    bufp->fullCData(oldp+59,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state),4);
    bufp->fullBit(oldp+60,(vlSelfRef.rv32i_m__DOT__datapath__DOT__clock));
    bufp->fullBit(oldp+61,(vlSelfRef.rv32i_m__DOT__datapath__DOT__reset));
    bufp->fullBit(oldp+62,(vlSelfRef.rv32i_m__DOT__datapath__DOT__PCWrite));
    bufp->fullBit(oldp+63,(vlSelfRef.rv32i_m__DOT__datapath__DOT__AdrSrc));
    bufp->fullBit(oldp+64,(vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWrite));
    bufp->fullBit(oldp+65,(vlSelfRef.rv32i_m__DOT__datapath__DOT__IRWrite));
    bufp->fullBit(oldp+66,(vlSelfRef.rv32i_m__DOT__datapath__DOT__RegWrite));
    bufp->fullCData(oldp+67,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ResultSrc),2);
    bufp->fullCData(oldp+68,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUControl),4);
    bufp->fullCData(oldp+69,(vlSelfRef.rv32i_m__DOT__datapath__DOT__SdataSrc),4);
    bufp->fullCData(oldp+70,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ImmSrc),3);
    bufp->fullIData(oldp+71,(vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction),32);
    bufp->fullBit(oldp+72,(vlSelfRef.rv32i_m__DOT__datapath__DOT__Zero));
    bufp->fullIData(oldp+73,(vlSelfRef.rv32i_m__DOT__datapath__DOT__MemAddr),32);
    bufp->fullIData(oldp+74,(vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWriteData),32);
    bufp->fullIData(oldp+75,(vlSelfRef.rv32i_m__DOT__datapath__DOT__MemReadData),32);
    bufp->fullIData(oldp+76,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUResult),32);
    bufp->fullIData(oldp+77,(vlSelfRef.rv32i_m__DOT__datapath__DOT__Result),32);
    bufp->fullIData(oldp+78,(vlSelfRef.rv32i_m__DOT__datapath__DOT__oldPC),32);
    bufp->fullIData(oldp+79,(vlSelfRef.rv32i_m__DOT__datapath__DOT__PC),32);
    bufp->fullIData(oldp+80,(vlSelfRef.rv32i_m__DOT__datapath__DOT__mdr_data),32);
    bufp->fullIData(oldp+81,(vlSelfRef.rv32i_m__DOT__datapath__DOT__rd1),32);
    bufp->fullIData(oldp+82,(vlSelfRef.rv32i_m__DOT__datapath__DOT__rd2),32);
    bufp->fullIData(oldp+83,(vlSelfRef.rv32i_m__DOT__datapath__DOT__imm),32);
    bufp->fullIData(oldp+84,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcA),32);
    bufp->fullIData(oldp+85,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcB),32);
    bufp->fullCData(oldp+86,(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl),4);
    bufp->fullIData(oldp+87,(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A),32);
    bufp->fullIData(oldp+88,(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B),32);
    bufp->fullIData(oldp+89,(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult),32);
    bufp->fullBit(oldp+90,(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__Zero));
    bufp->fullIData(oldp+91,(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm),32);
    bufp->fullCData(oldp+92,(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp),3);
    bufp->fullIData(oldp+93,(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__extImm),32);
    bufp->fullBit(oldp+94,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__reset));
    bufp->fullBit(oldp+95,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock));
    bufp->fullBit(oldp+96,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__IRWrite));
    bufp->fullIData(oldp+97,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__instruction),32);
    bufp->fullIData(oldp+98,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__PC),32);
    bufp->fullIData(oldp+99,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__oldPC),32);
    bufp->fullIData(oldp+100,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_instruction),32);
    bufp->fullIData(oldp+101,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__Data),32);
    bufp->fullIData(oldp+102,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_Data),32);
    bufp->fullBit(oldp+103,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__clock));
    bufp->fullCData(oldp+104,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_addr),5);
    bufp->fullCData(oldp+105,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_addr),5);
    bufp->fullCData(oldp+106,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rd_addr),5);
    bufp->fullIData(oldp+107,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__writeData),32);
    bufp->fullBit(oldp+108,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__RegWrite));
    bufp->fullIData(oldp+109,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_data),32);
    bufp->fullIData(oldp+110,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_data),32);
    bufp->fullIData(oldp+111,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[31]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[30]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[29]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[28]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[27]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[26]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[25]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[24]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[23]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[22]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[21]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[20]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[19]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[18]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[17]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[16]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[15]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[14]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[13]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[12]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[11]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[10]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[9]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[8]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[7]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[6]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[5]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[4]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[3]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[2]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[1]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[0]),32);
    bufp->fullBit(oldp+143,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock));
    bufp->fullCData(oldp+144,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc),2);
    bufp->fullIData(oldp+145,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUresult),32);
    bufp->fullIData(oldp+146,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__MemData),32);
    bufp->fullIData(oldp+147,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__Result),32);
    bufp->fullIData(oldp+148,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUout),32);
    bufp->fullBit(oldp+149,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock));
    bufp->fullIData(oldp+150,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__newPC),32);
    bufp->fullIData(oldp+151,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__oldPC),32);
    bufp->fullIData(oldp+152,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs1),32);
    bufp->fullIData(oldp+153,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs2),32);
    bufp->fullIData(oldp+154,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__imm),32);
    bufp->fullCData(oldp+155,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA),2);
    bufp->fullCData(oldp+156,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB),2);
    bufp->fullIData(oldp+157,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__writeData),32);
    bufp->fullIData(oldp+158,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA),32);
    bufp->fullIData(oldp+159,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB),32);
    bufp->fullIData(oldp+160,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__Data1),32);
    bufp->fullBit(oldp+161,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk));
    bufp->fullBit(oldp+162,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PCWrite));
    bufp->fullIData(oldp+163,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__newPC),32);
    bufp->fullIData(oldp+164,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Result),32);
    bufp->fullBit(oldp+165,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Select));
    bufp->fullIData(oldp+166,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PC),32);
    bufp->fullIData(oldp+167,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__MemAddr),32);
}
