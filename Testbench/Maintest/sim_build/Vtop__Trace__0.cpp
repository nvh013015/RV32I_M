// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgBit(oldp+2,(vlSelfRef.memWrite));
    bufp->chgIData(oldp+3,(vlSelfRef.mem_rdata),32);
    bufp->chgIData(oldp+4,(vlSelfRef.mem_addr),32);
    bufp->chgIData(oldp+5,(vlSelfRef.mem_wdata),32);
    bufp->chgBit(oldp+6,(vlSelfRef.rv32i_m__DOT__clk));
    bufp->chgBit(oldp+7,(vlSelfRef.rv32i_m__DOT__reset));
    bufp->chgBit(oldp+8,(vlSelfRef.rv32i_m__DOT__memWrite));
    bufp->chgIData(oldp+9,(vlSelfRef.rv32i_m__DOT__mem_rdata),32);
    bufp->chgIData(oldp+10,(vlSelfRef.rv32i_m__DOT__mem_addr),32);
    bufp->chgIData(oldp+11,(vlSelfRef.rv32i_m__DOT__mem_wdata),32);
    bufp->chgBit(oldp+12,(vlSelfRef.rv32i_m__DOT__zero));
    bufp->chgIData(oldp+13,(vlSelfRef.rv32i_m__DOT__instruction),32);
    bufp->chgBit(oldp+14,(vlSelfRef.rv32i_m__DOT__PCwrite));
    bufp->chgBit(oldp+15,(vlSelfRef.rv32i_m__DOT__IRwrite));
    bufp->chgBit(oldp+16,(vlSelfRef.rv32i_m__DOT__RegWrite));
    bufp->chgBit(oldp+17,(vlSelfRef.rv32i_m__DOT__AdrSrc));
    bufp->chgCData(oldp+18,(vlSelfRef.rv32i_m__DOT__ResultSrc),2);
    bufp->chgCData(oldp+19,(vlSelfRef.rv32i_m__DOT__ALUSrcA),2);
    bufp->chgCData(oldp+20,(vlSelfRef.rv32i_m__DOT__ALUSrcB),2);
    bufp->chgCData(oldp+21,(vlSelfRef.rv32i_m__DOT__ImmSrc),3);
    bufp->chgCData(oldp+22,(vlSelfRef.rv32i_m__DOT__ALUControl),4);
    bufp->chgCData(oldp+23,(vlSelfRef.rv32i_m__DOT__SdataSrc),4);
    bufp->chgBit(oldp+24,(vlSelfRef.rv32i_m__DOT__controller__DOT__clk));
    bufp->chgBit(oldp+25,(vlSelfRef.rv32i_m__DOT__controller__DOT__zero));
    bufp->chgIData(oldp+26,(vlSelfRef.rv32i_m__DOT__controller__DOT__instruction),32);
    bufp->chgBit(oldp+27,(vlSelfRef.rv32i_m__DOT__controller__DOT__PCwrite));
    bufp->chgBit(oldp+28,(vlSelfRef.rv32i_m__DOT__controller__DOT__MemWrite));
    bufp->chgBit(oldp+29,(vlSelfRef.rv32i_m__DOT__controller__DOT__IRwrite));
    bufp->chgBit(oldp+30,(vlSelfRef.rv32i_m__DOT__controller__DOT__RegWrite));
    bufp->chgBit(oldp+31,(vlSelfRef.rv32i_m__DOT__controller__DOT__AdrSrc));
    bufp->chgCData(oldp+32,(vlSelfRef.rv32i_m__DOT__controller__DOT__ResultSrc),2);
    bufp->chgCData(oldp+33,(vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcA),2);
    bufp->chgCData(oldp+34,(vlSelfRef.rv32i_m__DOT__controller__DOT__ALUSrcB),2);
    bufp->chgCData(oldp+35,(vlSelfRef.rv32i_m__DOT__controller__DOT__ImmSrc),3);
    bufp->chgCData(oldp+36,(vlSelfRef.rv32i_m__DOT__controller__DOT__ALUControl),4);
    bufp->chgCData(oldp+37,(vlSelfRef.rv32i_m__DOT__controller__DOT__ALUop),2);
    bufp->chgBit(oldp+38,(vlSelfRef.rv32i_m__DOT__controller__DOT__branch));
    bufp->chgIData(oldp+39,(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__instruction),32);
    bufp->chgCData(oldp+40,(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUOp),2);
    bufp->chgCData(oldp+41,(vlSelfRef.rv32i_m__DOT__controller__DOT__aluC_Generator__DOT__ALUControl),4);
    bufp->chgIData(oldp+42,(vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__instruction),32);
    bufp->chgCData(oldp+43,(vlSelfRef.rv32i_m__DOT__controller__DOT__decoder__DOT__ExtOp),3);
    bufp->chgBit(oldp+44,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__PCWrite));
    bufp->chgBit(oldp+45,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__MemWrite));
    bufp->chgBit(oldp+46,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__IRWrite));
    bufp->chgBit(oldp+47,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__RegWrite));
    bufp->chgBit(oldp+48,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__AdrSrc));
    bufp->chgCData(oldp+49,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ResultSrc),2);
    bufp->chgCData(oldp+50,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcA),2);
    bufp->chgCData(oldp+51,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUSrcB),2);
    bufp->chgCData(oldp+52,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__ALUCop),2);
    bufp->chgBit(oldp+53,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__branch));
    bufp->chgBit(oldp+54,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__clock));
    bufp->chgBit(oldp+55,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__zero));
    bufp->chgIData(oldp+56,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__instruction),32);
    bufp->chgCData(oldp+57,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__op),7);
    bufp->chgCData(oldp+58,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__state),4);
    bufp->chgCData(oldp+59,(vlSelfRef.rv32i_m__DOT__controller__DOT__fsm_inst__DOT__next_state),4);
    bufp->chgBit(oldp+60,(vlSelfRef.rv32i_m__DOT__datapath__DOT__clock));
    bufp->chgBit(oldp+61,(vlSelfRef.rv32i_m__DOT__datapath__DOT__reset));
    bufp->chgBit(oldp+62,(vlSelfRef.rv32i_m__DOT__datapath__DOT__PCWrite));
    bufp->chgBit(oldp+63,(vlSelfRef.rv32i_m__DOT__datapath__DOT__AdrSrc));
    bufp->chgBit(oldp+64,(vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWrite));
    bufp->chgBit(oldp+65,(vlSelfRef.rv32i_m__DOT__datapath__DOT__IRWrite));
    bufp->chgBit(oldp+66,(vlSelfRef.rv32i_m__DOT__datapath__DOT__RegWrite));
    bufp->chgCData(oldp+67,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ResultSrc),2);
    bufp->chgCData(oldp+68,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUControl),4);
    bufp->chgCData(oldp+69,(vlSelfRef.rv32i_m__DOT__datapath__DOT__SdataSrc),4);
    bufp->chgCData(oldp+70,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ImmSrc),3);
    bufp->chgIData(oldp+71,(vlSelfRef.rv32i_m__DOT__datapath__DOT__Instruction),32);
    bufp->chgBit(oldp+72,(vlSelfRef.rv32i_m__DOT__datapath__DOT__Zero));
    bufp->chgIData(oldp+73,(vlSelfRef.rv32i_m__DOT__datapath__DOT__MemAddr),32);
    bufp->chgIData(oldp+74,(vlSelfRef.rv32i_m__DOT__datapath__DOT__MemWriteData),32);
    bufp->chgIData(oldp+75,(vlSelfRef.rv32i_m__DOT__datapath__DOT__MemReadData),32);
    bufp->chgIData(oldp+76,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUResult),32);
    bufp->chgIData(oldp+77,(vlSelfRef.rv32i_m__DOT__datapath__DOT__Result),32);
    bufp->chgIData(oldp+78,(vlSelfRef.rv32i_m__DOT__datapath__DOT__oldPC),32);
    bufp->chgIData(oldp+79,(vlSelfRef.rv32i_m__DOT__datapath__DOT__PC),32);
    bufp->chgIData(oldp+80,(vlSelfRef.rv32i_m__DOT__datapath__DOT__mdr_data),32);
    bufp->chgIData(oldp+81,(vlSelfRef.rv32i_m__DOT__datapath__DOT__rd1),32);
    bufp->chgIData(oldp+82,(vlSelfRef.rv32i_m__DOT__datapath__DOT__rd2),32);
    bufp->chgIData(oldp+83,(vlSelfRef.rv32i_m__DOT__datapath__DOT__imm),32);
    bufp->chgIData(oldp+84,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcA),32);
    bufp->chgIData(oldp+85,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ALUSrcB),32);
    bufp->chgCData(oldp+86,(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUControl),4);
    bufp->chgIData(oldp+87,(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__A),32);
    bufp->chgIData(oldp+88,(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__B),32);
    bufp->chgIData(oldp+89,(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__ALUResult),32);
    bufp->chgBit(oldp+90,(vlSelfRef.rv32i_m__DOT__datapath__DOT__alu__DOT__Zero));
    bufp->chgIData(oldp+91,(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__imm),32);
    bufp->chgCData(oldp+92,(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__ExtOp),3);
    bufp->chgIData(oldp+93,(vlSelfRef.rv32i_m__DOT__datapath__DOT__extender__DOT__extImm),32);
    bufp->chgBit(oldp+94,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__reset));
    bufp->chgBit(oldp+95,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__clock));
    bufp->chgBit(oldp+96,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__IRWrite));
    bufp->chgIData(oldp+97,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__instruction),32);
    bufp->chgIData(oldp+98,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__PC),32);
    bufp->chgIData(oldp+99,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__oldPC),32);
    bufp->chgIData(oldp+100,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_instruction),32);
    bufp->chgIData(oldp+101,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__Data),32);
    bufp->chgIData(oldp+102,(vlSelfRef.rv32i_m__DOT__datapath__DOT__ir_mdr__DOT__o_Data),32);
    bufp->chgBit(oldp+103,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__clock));
    bufp->chgCData(oldp+104,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_addr),5);
    bufp->chgCData(oldp+105,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_addr),5);
    bufp->chgCData(oldp+106,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rd_addr),5);
    bufp->chgIData(oldp+107,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__writeData),32);
    bufp->chgBit(oldp+108,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__RegWrite));
    bufp->chgIData(oldp+109,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs1_data),32);
    bufp->chgIData(oldp+110,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__rs2_data),32);
    bufp->chgIData(oldp+111,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[31]),32);
    bufp->chgIData(oldp+112,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[30]),32);
    bufp->chgIData(oldp+113,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[29]),32);
    bufp->chgIData(oldp+114,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[28]),32);
    bufp->chgIData(oldp+115,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[27]),32);
    bufp->chgIData(oldp+116,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[26]),32);
    bufp->chgIData(oldp+117,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[25]),32);
    bufp->chgIData(oldp+118,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[24]),32);
    bufp->chgIData(oldp+119,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[23]),32);
    bufp->chgIData(oldp+120,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[22]),32);
    bufp->chgIData(oldp+121,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[21]),32);
    bufp->chgIData(oldp+122,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[20]),32);
    bufp->chgIData(oldp+123,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[19]),32);
    bufp->chgIData(oldp+124,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[18]),32);
    bufp->chgIData(oldp+125,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[17]),32);
    bufp->chgIData(oldp+126,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[16]),32);
    bufp->chgIData(oldp+127,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[15]),32);
    bufp->chgIData(oldp+128,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[14]),32);
    bufp->chgIData(oldp+129,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[13]),32);
    bufp->chgIData(oldp+130,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[12]),32);
    bufp->chgIData(oldp+131,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[11]),32);
    bufp->chgIData(oldp+132,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[10]),32);
    bufp->chgIData(oldp+133,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[9]),32);
    bufp->chgIData(oldp+134,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[8]),32);
    bufp->chgIData(oldp+135,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[7]),32);
    bufp->chgIData(oldp+136,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[6]),32);
    bufp->chgIData(oldp+137,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[5]),32);
    bufp->chgIData(oldp+138,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[4]),32);
    bufp->chgIData(oldp+139,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[3]),32);
    bufp->chgIData(oldp+140,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[2]),32);
    bufp->chgIData(oldp+141,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[1]),32);
    bufp->chgIData(oldp+142,(vlSelfRef.rv32i_m__DOT__datapath__DOT__regFile__DOT__regFile[0]),32);
    bufp->chgBit(oldp+143,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__clock));
    bufp->chgCData(oldp+144,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__resultSrc),2);
    bufp->chgIData(oldp+145,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUresult),32);
    bufp->chgIData(oldp+146,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__MemData),32);
    bufp->chgIData(oldp+147,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__Result),32);
    bufp->chgIData(oldp+148,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sResultSrc__DOT__ALUout),32);
    bufp->chgBit(oldp+149,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__clock));
    bufp->chgIData(oldp+150,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__newPC),32);
    bufp->chgIData(oldp+151,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__oldPC),32);
    bufp->chgIData(oldp+152,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs1),32);
    bufp->chgIData(oldp+153,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__rs2),32);
    bufp->chgIData(oldp+154,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__imm),32);
    bufp->chgCData(oldp+155,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcA),2);
    bufp->chgCData(oldp+156,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__SdataSrcB),2);
    bufp->chgIData(oldp+157,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__writeData),32);
    bufp->chgIData(oldp+158,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcA),32);
    bufp->chgIData(oldp+159,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__ALUsrcB),32);
    bufp->chgIData(oldp+160,(vlSelfRef.rv32i_m__DOT__datapath__DOT__sdataSrc__DOT__Data1),32);
    bufp->chgBit(oldp+161,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__clk));
    bufp->chgBit(oldp+162,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PCWrite));
    bufp->chgIData(oldp+163,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__newPC),32);
    bufp->chgIData(oldp+164,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Result),32);
    bufp->chgBit(oldp+165,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__Select));
    bufp->chgIData(oldp+166,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__PC),32);
    bufp->chgIData(oldp+167,(vlSelfRef.rv32i_m__DOT__datapath__DOT__spcSrc__DOT__MemAddr),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
