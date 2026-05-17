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
    bufp->chgBit(oldp+0,(vlSelfRef.clock));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgBit(oldp+2,(vlSelfRef.PCWrite));
    bufp->chgBit(oldp+3,(vlSelfRef.AdrSrc));
    bufp->chgBit(oldp+4,(vlSelfRef.MemWrite));
    bufp->chgBit(oldp+5,(vlSelfRef.IRWrite));
    bufp->chgBit(oldp+6,(vlSelfRef.RegWrite));
    bufp->chgCData(oldp+7,(vlSelfRef.ResultSrc),2);
    bufp->chgCData(oldp+8,(vlSelfRef.ALUControl),4);
    bufp->chgCData(oldp+9,(vlSelfRef.SdataSrc),4);
    bufp->chgCData(oldp+10,(vlSelfRef.ImmSrc),3);
    bufp->chgIData(oldp+11,(vlSelfRef.Instruction),32);
    bufp->chgBit(oldp+12,(vlSelfRef.Zero));
    bufp->chgIData(oldp+13,(vlSelfRef.MemAddr),32);
    bufp->chgIData(oldp+14,(vlSelfRef.MemWriteData),32);
    bufp->chgCData(oldp+15,(vlSelfRef.MemWriteMask),4);
    bufp->chgIData(oldp+16,(vlSelfRef.MemReadData),32);
    bufp->chgBit(oldp+17,(vlSelfRef.Datapath__DOT__clock));
    bufp->chgBit(oldp+18,(vlSelfRef.Datapath__DOT__reset));
    bufp->chgBit(oldp+19,(vlSelfRef.Datapath__DOT__PCWrite));
    bufp->chgBit(oldp+20,(vlSelfRef.Datapath__DOT__AdrSrc));
    bufp->chgBit(oldp+21,(vlSelfRef.Datapath__DOT__MemWrite));
    bufp->chgBit(oldp+22,(vlSelfRef.Datapath__DOT__IRWrite));
    bufp->chgBit(oldp+23,(vlSelfRef.Datapath__DOT__RegWrite));
    bufp->chgCData(oldp+24,(vlSelfRef.Datapath__DOT__ResultSrc),2);
    bufp->chgCData(oldp+25,(vlSelfRef.Datapath__DOT__ALUControl),4);
    bufp->chgCData(oldp+26,(vlSelfRef.Datapath__DOT__SdataSrc),4);
    bufp->chgCData(oldp+27,(vlSelfRef.Datapath__DOT__ImmSrc),3);
    bufp->chgIData(oldp+28,(vlSelfRef.Datapath__DOT__Instruction),32);
    bufp->chgBit(oldp+29,(vlSelfRef.Datapath__DOT__Zero));
    bufp->chgIData(oldp+30,(vlSelfRef.Datapath__DOT__MemAddr),32);
    bufp->chgIData(oldp+31,(vlSelfRef.Datapath__DOT__MemWriteData),32);
    bufp->chgCData(oldp+32,(vlSelfRef.Datapath__DOT__MemWriteMask),4);
    bufp->chgIData(oldp+33,(vlSelfRef.Datapath__DOT__MemReadData),32);
    bufp->chgIData(oldp+34,(vlSelfRef.Datapath__DOT__ALUResult),32);
    bufp->chgIData(oldp+35,(vlSelfRef.Datapath__DOT__Result),32);
    bufp->chgIData(oldp+36,(vlSelfRef.Datapath__DOT__oldPC),32);
    bufp->chgIData(oldp+37,(vlSelfRef.Datapath__DOT__PC),32);
    bufp->chgIData(oldp+38,(vlSelfRef.Datapath__DOT__mdr_data),32);
    bufp->chgIData(oldp+39,(vlSelfRef.Datapath__DOT__rd1),32);
    bufp->chgIData(oldp+40,(vlSelfRef.Datapath__DOT__rd2),32);
    bufp->chgIData(oldp+41,(vlSelfRef.Datapath__DOT__imm),32);
    bufp->chgIData(oldp+42,(vlSelfRef.Datapath__DOT__ALUSrcA),32);
    bufp->chgIData(oldp+43,(vlSelfRef.Datapath__DOT__ALUSrcB),32);
    bufp->chgCData(oldp+44,(vlSelfRef.Datapath__DOT__alu__DOT__ALUControl),4);
    bufp->chgIData(oldp+45,(vlSelfRef.Datapath__DOT__alu__DOT__A),32);
    bufp->chgIData(oldp+46,(vlSelfRef.Datapath__DOT__alu__DOT__B),32);
    bufp->chgIData(oldp+47,(vlSelfRef.Datapath__DOT__alu__DOT__ALUResult),32);
    bufp->chgBit(oldp+48,(vlSelfRef.Datapath__DOT__alu__DOT__Zero));
    bufp->chgIData(oldp+49,(vlSelfRef.Datapath__DOT__extender__DOT__imm),32);
    bufp->chgCData(oldp+50,(vlSelfRef.Datapath__DOT__extender__DOT__ExtOp),3);
    bufp->chgIData(oldp+51,(vlSelfRef.Datapath__DOT__extender__DOT__extImm),32);
    bufp->chgBit(oldp+52,(vlSelfRef.Datapath__DOT__ir__DOT__reset));
    bufp->chgBit(oldp+53,(vlSelfRef.Datapath__DOT__ir__DOT__clock));
    bufp->chgBit(oldp+54,(vlSelfRef.Datapath__DOT__ir__DOT__IRWrite));
    bufp->chgIData(oldp+55,(vlSelfRef.Datapath__DOT__ir__DOT__instruction),32);
    bufp->chgIData(oldp+56,(vlSelfRef.Datapath__DOT__ir__DOT__PC),32);
    bufp->chgIData(oldp+57,(vlSelfRef.Datapath__DOT__ir__DOT__oldPC),32);
    bufp->chgIData(oldp+58,(vlSelfRef.Datapath__DOT__ir__DOT__o_instruction),32);
    bufp->chgBit(oldp+59,(vlSelfRef.Datapath__DOT__mdr__DOT__reset));
    bufp->chgBit(oldp+60,(vlSelfRef.Datapath__DOT__mdr__DOT__clock));
    bufp->chgCData(oldp+61,(vlSelfRef.Datapath__DOT__mdr__DOT__Which_load_comment),3);
    bufp->chgCData(oldp+62,(vlSelfRef.Datapath__DOT__mdr__DOT__What_HW_or_B),2);
    bufp->chgIData(oldp+63,(vlSelfRef.Datapath__DOT__mdr__DOT__Data),32);
    bufp->chgIData(oldp+64,(vlSelfRef.Datapath__DOT__mdr__DOT__o_Data),32);
    bufp->chgIData(oldp+65,(vlSelfRef.Datapath__DOT__mdr__DOT__i_Data),32);
    bufp->chgBit(oldp+66,(vlSelfRef.Datapath__DOT__regFile__DOT__clock));
    bufp->chgBit(oldp+67,(vlSelfRef.Datapath__DOT__regFile__DOT__reset));
    bufp->chgCData(oldp+68,(vlSelfRef.Datapath__DOT__regFile__DOT__rs1_addr),5);
    bufp->chgCData(oldp+69,(vlSelfRef.Datapath__DOT__regFile__DOT__rs2_addr),5);
    bufp->chgCData(oldp+70,(vlSelfRef.Datapath__DOT__regFile__DOT__rd_addr),5);
    bufp->chgIData(oldp+71,(vlSelfRef.Datapath__DOT__regFile__DOT__writeData),32);
    bufp->chgBit(oldp+72,(vlSelfRef.Datapath__DOT__regFile__DOT__RegWrite));
    bufp->chgIData(oldp+73,(vlSelfRef.Datapath__DOT__regFile__DOT__rs1_data),32);
    bufp->chgIData(oldp+74,(vlSelfRef.Datapath__DOT__regFile__DOT__rs2_data),32);
    bufp->chgIData(oldp+75,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[31]),32);
    bufp->chgIData(oldp+76,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[30]),32);
    bufp->chgIData(oldp+77,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[29]),32);
    bufp->chgIData(oldp+78,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[28]),32);
    bufp->chgIData(oldp+79,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[27]),32);
    bufp->chgIData(oldp+80,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[26]),32);
    bufp->chgIData(oldp+81,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[25]),32);
    bufp->chgIData(oldp+82,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[24]),32);
    bufp->chgIData(oldp+83,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[23]),32);
    bufp->chgIData(oldp+84,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[22]),32);
    bufp->chgIData(oldp+85,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[21]),32);
    bufp->chgIData(oldp+86,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[20]),32);
    bufp->chgIData(oldp+87,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[19]),32);
    bufp->chgIData(oldp+88,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[18]),32);
    bufp->chgIData(oldp+89,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[17]),32);
    bufp->chgIData(oldp+90,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[16]),32);
    bufp->chgIData(oldp+91,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[15]),32);
    bufp->chgIData(oldp+92,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[14]),32);
    bufp->chgIData(oldp+93,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[13]),32);
    bufp->chgIData(oldp+94,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[12]),32);
    bufp->chgIData(oldp+95,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[11]),32);
    bufp->chgIData(oldp+96,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[10]),32);
    bufp->chgIData(oldp+97,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[9]),32);
    bufp->chgIData(oldp+98,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[8]),32);
    bufp->chgIData(oldp+99,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[7]),32);
    bufp->chgIData(oldp+100,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[6]),32);
    bufp->chgIData(oldp+101,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[5]),32);
    bufp->chgIData(oldp+102,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[4]),32);
    bufp->chgIData(oldp+103,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[3]),32);
    bufp->chgIData(oldp+104,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[2]),32);
    bufp->chgIData(oldp+105,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[1]),32);
    bufp->chgIData(oldp+106,(vlSelfRef.Datapath__DOT__regFile__DOT__regFile[0]),32);
    bufp->chgBit(oldp+107,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__clock));
    bufp->chgBit(oldp+108,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__reset));
    bufp->chgCData(oldp+109,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__resultSrc),2);
    bufp->chgIData(oldp+110,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUresult),32);
    bufp->chgIData(oldp+111,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__MemData),32);
    bufp->chgIData(oldp+112,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__Result),32);
    bufp->chgIData(oldp+113,(vlSelfRef.Datapath__DOT__sResultSrc__DOT__ALUout),32);
    bufp->chgBit(oldp+114,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__clock));
    bufp->chgBit(oldp+115,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__reset));
    bufp->chgIData(oldp+116,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__newPC),32);
    bufp->chgIData(oldp+117,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__oldPC),32);
    bufp->chgIData(oldp+118,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs1),32);
    bufp->chgIData(oldp+119,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__rs2),32);
    bufp->chgIData(oldp+120,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__imm),32);
    bufp->chgCData(oldp+121,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcA),2);
    bufp->chgCData(oldp+122,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__SdataSrcB),2);
    bufp->chgIData(oldp+123,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcA),32);
    bufp->chgIData(oldp+124,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__ALUsrcB),32);
    bufp->chgIData(oldp+125,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__Data1),32);
    bufp->chgIData(oldp+126,(vlSelfRef.Datapath__DOT__sdataSrc__DOT__writeData),32);
    bufp->chgBit(oldp+127,(vlSelfRef.Datapath__DOT__spcSrc__DOT__clk));
    bufp->chgBit(oldp+128,(vlSelfRef.Datapath__DOT__spcSrc__DOT__reset));
    bufp->chgBit(oldp+129,(vlSelfRef.Datapath__DOT__spcSrc__DOT__PCWrite));
    bufp->chgIData(oldp+130,(vlSelfRef.Datapath__DOT__spcSrc__DOT__newPC),32);
    bufp->chgIData(oldp+131,(vlSelfRef.Datapath__DOT__spcSrc__DOT__Result),32);
    bufp->chgBit(oldp+132,(vlSelfRef.Datapath__DOT__spcSrc__DOT__Select));
    bufp->chgIData(oldp+133,(vlSelfRef.Datapath__DOT__spcSrc__DOT__PC),32);
    bufp->chgIData(oldp+134,(vlSelfRef.Datapath__DOT__spcSrc__DOT__MemAddr),32);
    bufp->chgIData(oldp+135,(vlSelfRef.Datapath__DOT__store__DOT__writeData),32);
    bufp->chgCData(oldp+136,(vlSelfRef.Datapath__DOT__store__DOT__WhichStore),3);
    bufp->chgCData(oldp+137,(vlSelfRef.Datapath__DOT__store__DOT__which_half_or_byte),2);
    bufp->chgIData(oldp+138,(vlSelfRef.Datapath__DOT__store__DOT__storeData),32);
    bufp->chgCData(oldp+139,(vlSelfRef.Datapath__DOT__store__DOT__storeMask),4);
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
