// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgCData(oldp+2,(vlSelf->io_a),4);
    bufp->chgCData(oldp+3,(vlSelf->io_b),4);
    bufp->chgCData(oldp+4,(vlSelf->io_product),8);
    bufp->chgBit(oldp+5,(vlSelf->DaddaTreeMultiplier__DOT__clock));
    bufp->chgBit(oldp+6,(vlSelf->DaddaTreeMultiplier__DOT__reset));
    bufp->chgCData(oldp+7,(vlSelf->DaddaTreeMultiplier__DOT__io_a),4);
    bufp->chgCData(oldp+8,(vlSelf->DaddaTreeMultiplier__DOT__io_b),4);
    bufp->chgCData(oldp+9,(vlSelf->DaddaTreeMultiplier__DOT__io_product),8);
    bufp->chgCData(oldp+10,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_a),7);
    bufp->chgCData(oldp+11,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_b),7);
    bufp->chgCData(oldp+12,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_sum),7);
    bufp->chgBit(oldp+13,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_cout));
    bufp->chgBit(oldp+14,(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_0));
    bufp->chgBit(oldp+15,(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_1));
    bufp->chgBit(oldp+16,(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_2));
    bufp->chgBit(oldp+17,(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_3));
    bufp->chgBit(oldp+18,(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_3));
    bufp->chgBit(oldp+19,(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_2));
    bufp->chgBit(oldp+20,(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_1));
    bufp->chgBit(oldp+21,(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_0));
    bufp->chgBit(oldp+22,(vlSelf->DaddaTreeMultiplier__DOT__partials_0_0));
    bufp->chgBit(oldp+23,(vlSelf->DaddaTreeMultiplier__DOT__partials_1_0));
    bufp->chgBit(oldp+24,(vlSelf->DaddaTreeMultiplier__DOT__partials_1_1));
    bufp->chgBit(oldp+25,(vlSelf->DaddaTreeMultiplier__DOT__partials_2_0));
    bufp->chgBit(oldp+26,(vlSelf->DaddaTreeMultiplier__DOT__partials_2_1));
    bufp->chgBit(oldp+27,(vlSelf->DaddaTreeMultiplier__DOT__partials_2_2));
    bufp->chgBit(oldp+28,(vlSelf->DaddaTreeMultiplier__DOT__partials_3_0));
    bufp->chgBit(oldp+29,(vlSelf->DaddaTreeMultiplier__DOT__partials_3_1));
    bufp->chgBit(oldp+30,(vlSelf->DaddaTreeMultiplier__DOT__partials_3_2));
    bufp->chgBit(oldp+31,(vlSelf->DaddaTreeMultiplier__DOT__partials_3_3));
    bufp->chgBit(oldp+32,(vlSelf->DaddaTreeMultiplier__DOT__partials_4_0));
    bufp->chgBit(oldp+33,(vlSelf->DaddaTreeMultiplier__DOT__partials_4_1));
    bufp->chgBit(oldp+34,(vlSelf->DaddaTreeMultiplier__DOT__partials_4_2));
    bufp->chgBit(oldp+35,(vlSelf->DaddaTreeMultiplier__DOT__partials_5_0));
    bufp->chgBit(oldp+36,(vlSelf->DaddaTreeMultiplier__DOT__partials_5_1));
    bufp->chgBit(oldp+37,(vlSelf->DaddaTreeMultiplier__DOT__partials_6_0));
    bufp->chgBit(oldp+38,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_3_2));
    bufp->chgBit(oldp+39,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_1));
    bufp->chgBit(oldp+40,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_2));
    bufp->chgBit(oldp+41,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_5_2));
    bufp->chgBit(oldp+42,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_2_1));
    bufp->chgBit(oldp+43,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_3_0));
    bufp->chgBit(oldp+44,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_3_1));
    bufp->chgBit(oldp+45,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_4_0));
    bufp->chgBit(oldp+46,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_4_1));
    bufp->chgBit(oldp+47,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_5_0));
    bufp->chgBit(oldp+48,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_5_1));
    bufp->chgBit(oldp+49,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_6_1));
    bufp->chgCData(oldp+50,(vlSelf->DaddaTreeMultiplier__DOT__io_product_lo),3);
    bufp->chgCData(oldp+51,(vlSelf->DaddaTreeMultiplier__DOT__io_product_hi),4);
    bufp->chgCData(oldp+52,(vlSelf->DaddaTreeMultiplier__DOT__io_product_lo_1),3);
    bufp->chgCData(oldp+53,(vlSelf->DaddaTreeMultiplier__DOT__io_product_hi_1),4);
    bufp->chgCData(oldp+54,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_a),7);
    bufp->chgCData(oldp+55,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_b),7);
    bufp->chgCData(oldp+56,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum),7);
    bufp->chgBit(oldp+57,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_cout));
    bufp->chgBit(oldp+58,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a));
    bufp->chgBit(oldp+59,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b));
    bufp->chgBit(oldp+60,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cin));
    bufp->chgBit(oldp+61,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_sum));
    bufp->chgBit(oldp+62,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cout));
    bufp->chgBit(oldp+63,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a));
    bufp->chgBit(oldp+64,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b));
    bufp->chgBit(oldp+65,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cin));
    bufp->chgBit(oldp+66,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_sum));
    bufp->chgBit(oldp+67,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cout));
    bufp->chgBit(oldp+68,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a));
    bufp->chgBit(oldp+69,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b));
    bufp->chgBit(oldp+70,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cin));
    bufp->chgBit(oldp+71,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_sum));
    bufp->chgBit(oldp+72,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cout));
    bufp->chgBit(oldp+73,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a));
    bufp->chgBit(oldp+74,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b));
    bufp->chgBit(oldp+75,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cin));
    bufp->chgBit(oldp+76,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_sum));
    bufp->chgBit(oldp+77,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cout));
    bufp->chgBit(oldp+78,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a));
    bufp->chgBit(oldp+79,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b));
    bufp->chgBit(oldp+80,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cin));
    bufp->chgBit(oldp+81,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_sum));
    bufp->chgBit(oldp+82,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cout));
    bufp->chgBit(oldp+83,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a));
    bufp->chgBit(oldp+84,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b));
    bufp->chgBit(oldp+85,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cin));
    bufp->chgBit(oldp+86,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_sum));
    bufp->chgBit(oldp+87,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cout));
    bufp->chgBit(oldp+88,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a));
    bufp->chgBit(oldp+89,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_b));
    bufp->chgBit(oldp+90,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cin));
    bufp->chgBit(oldp+91,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_sum));
    bufp->chgBit(oldp+92,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cout));
    bufp->chgBit(oldp+93,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_2));
    bufp->chgBit(oldp+94,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_1));
    bufp->chgBit(oldp+95,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_0));
    bufp->chgCData(oldp+96,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_lo),3);
    bufp->chgBit(oldp+97,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_4));
    bufp->chgBit(oldp+98,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_3));
    bufp->chgBit(oldp+99,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_6));
    bufp->chgBit(oldp+100,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_5));
    bufp->chgCData(oldp+101,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_hi),4);
    bufp->chgBit(oldp+102,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_a));
    bufp->chgBit(oldp+103,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_b));
    bufp->chgBit(oldp+104,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cin));
    bufp->chgBit(oldp+105,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_sum));
    bufp->chgBit(oldp+106,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout));
    bufp->chgBit(oldp+107,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_a));
    bufp->chgBit(oldp+108,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_b));
    bufp->chgBit(oldp+109,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cin));
    bufp->chgBit(oldp+110,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_sum));
    bufp->chgBit(oldp+111,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout));
    bufp->chgBit(oldp+112,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_a));
    bufp->chgBit(oldp+113,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_b));
    bufp->chgBit(oldp+114,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cin));
    bufp->chgBit(oldp+115,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_sum));
    bufp->chgBit(oldp+116,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout));
    bufp->chgBit(oldp+117,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_a));
    bufp->chgBit(oldp+118,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_b));
    bufp->chgBit(oldp+119,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cin));
    bufp->chgBit(oldp+120,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_sum));
    bufp->chgBit(oldp+121,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout));
    bufp->chgBit(oldp+122,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_a));
    bufp->chgBit(oldp+123,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_b));
    bufp->chgBit(oldp+124,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cin));
    bufp->chgBit(oldp+125,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_sum));
    bufp->chgBit(oldp+126,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout));
    bufp->chgBit(oldp+127,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_a));
    bufp->chgBit(oldp+128,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_b));
    bufp->chgBit(oldp+129,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cin));
    bufp->chgBit(oldp+130,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_sum));
    bufp->chgBit(oldp+131,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout));
    bufp->chgBit(oldp+132,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_a));
    bufp->chgBit(oldp+133,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_b));
    bufp->chgBit(oldp+134,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cin));
    bufp->chgBit(oldp+135,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_sum));
    bufp->chgBit(oldp+136,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cout));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
