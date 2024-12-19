// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"io_a", false,-1, 3,0);
    tracep->declBus(c+4,"io_b", false,-1, 3,0);
    tracep->declBus(c+5,"io_product", false,-1, 7,0);
    tracep->pushNamePrefix("DaddaTreeMultiplier ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->declBus(c+8,"io_a", false,-1, 3,0);
    tracep->declBus(c+9,"io_b", false,-1, 3,0);
    tracep->declBus(c+10,"io_product", false,-1, 7,0);
    tracep->declBus(c+11,"io_product_rca_io_a", false,-1, 6,0);
    tracep->declBus(c+12,"io_product_rca_io_b", false,-1, 6,0);
    tracep->declBus(c+13,"io_product_rca_io_sum", false,-1, 6,0);
    tracep->declBit(c+14,"io_product_rca_io_cout", false,-1);
    tracep->declBit(c+15,"partials_x_bool_0", false,-1);
    tracep->declBit(c+16,"partials_x_bool_1", false,-1);
    tracep->declBit(c+17,"partials_x_bool_2", false,-1);
    tracep->declBit(c+18,"partials_x_bool_3", false,-1);
    tracep->declBit(c+19,"partials_y_bool_3", false,-1);
    tracep->declBit(c+20,"partials_y_bool_2", false,-1);
    tracep->declBit(c+21,"partials_y_bool_1", false,-1);
    tracep->declBit(c+22,"partials_y_bool_0", false,-1);
    tracep->declBit(c+23,"partials_0_0", false,-1);
    tracep->declBit(c+24,"partials_1_0", false,-1);
    tracep->declBit(c+25,"partials_1_1", false,-1);
    tracep->declBit(c+26,"partials_2_0", false,-1);
    tracep->declBit(c+27,"partials_2_1", false,-1);
    tracep->declBit(c+28,"partials_2_2", false,-1);
    tracep->declBit(c+29,"partials_3_0", false,-1);
    tracep->declBit(c+30,"partials_3_1", false,-1);
    tracep->declBit(c+31,"partials_3_2", false,-1);
    tracep->declBit(c+32,"partials_3_3", false,-1);
    tracep->declBit(c+33,"partials_4_0", false,-1);
    tracep->declBit(c+34,"partials_4_1", false,-1);
    tracep->declBit(c+35,"partials_4_2", false,-1);
    tracep->declBit(c+36,"partials_5_0", false,-1);
    tracep->declBit(c+37,"partials_5_1", false,-1);
    tracep->declBit(c+38,"partials_6_0", false,-1);
    tracep->declBit(c+39,"reducedPartials_reducedPartials_3_2", false,-1);
    tracep->declBit(c+40,"reducedPartials_reducedPartials_4_1", false,-1);
    tracep->declBit(c+41,"reducedPartials_reducedPartials_4_2", false,-1);
    tracep->declBit(c+42,"reducedPartials_reducedPartials_5_2", false,-1);
    tracep->declBit(c+43,"reducedPartials_2_1", false,-1);
    tracep->declBit(c+44,"reducedPartials_3_0", false,-1);
    tracep->declBit(c+45,"reducedPartials_3_1", false,-1);
    tracep->declBit(c+46,"reducedPartials_4_0", false,-1);
    tracep->declBit(c+47,"reducedPartials_4_1", false,-1);
    tracep->declBit(c+48,"reducedPartials_5_0", false,-1);
    tracep->declBit(c+49,"reducedPartials_5_1", false,-1);
    tracep->declBit(c+50,"reducedPartials_6_1", false,-1);
    tracep->declBus(c+51,"io_product_lo", false,-1, 2,0);
    tracep->declBus(c+52,"io_product_hi", false,-1, 3,0);
    tracep->declBus(c+53,"io_product_lo_1", false,-1, 2,0);
    tracep->declBus(c+54,"io_product_hi_1", false,-1, 3,0);
    tracep->pushNamePrefix("io_product_rca ");
    tracep->declBus(c+55,"io_a", false,-1, 6,0);
    tracep->declBus(c+56,"io_b", false,-1, 6,0);
    tracep->declBus(c+57,"io_sum", false,-1, 6,0);
    tracep->declBit(c+58,"io_cout", false,-1);
    tracep->declBit(c+59,"fa_io_a", false,-1);
    tracep->declBit(c+60,"fa_io_b", false,-1);
    tracep->declBit(c+61,"fa_io_cin", false,-1);
    tracep->declBit(c+62,"fa_io_sum", false,-1);
    tracep->declBit(c+63,"fa_io_cout", false,-1);
    tracep->declBit(c+64,"fa_1_io_a", false,-1);
    tracep->declBit(c+65,"fa_1_io_b", false,-1);
    tracep->declBit(c+66,"fa_1_io_cin", false,-1);
    tracep->declBit(c+67,"fa_1_io_sum", false,-1);
    tracep->declBit(c+68,"fa_1_io_cout", false,-1);
    tracep->declBit(c+69,"fa_2_io_a", false,-1);
    tracep->declBit(c+70,"fa_2_io_b", false,-1);
    tracep->declBit(c+71,"fa_2_io_cin", false,-1);
    tracep->declBit(c+72,"fa_2_io_sum", false,-1);
    tracep->declBit(c+73,"fa_2_io_cout", false,-1);
    tracep->declBit(c+74,"fa_3_io_a", false,-1);
    tracep->declBit(c+75,"fa_3_io_b", false,-1);
    tracep->declBit(c+76,"fa_3_io_cin", false,-1);
    tracep->declBit(c+77,"fa_3_io_sum", false,-1);
    tracep->declBit(c+78,"fa_3_io_cout", false,-1);
    tracep->declBit(c+79,"fa_4_io_a", false,-1);
    tracep->declBit(c+80,"fa_4_io_b", false,-1);
    tracep->declBit(c+81,"fa_4_io_cin", false,-1);
    tracep->declBit(c+82,"fa_4_io_sum", false,-1);
    tracep->declBit(c+83,"fa_4_io_cout", false,-1);
    tracep->declBit(c+84,"fa_5_io_a", false,-1);
    tracep->declBit(c+85,"fa_5_io_b", false,-1);
    tracep->declBit(c+86,"fa_5_io_cin", false,-1);
    tracep->declBit(c+87,"fa_5_io_sum", false,-1);
    tracep->declBit(c+88,"fa_5_io_cout", false,-1);
    tracep->declBit(c+89,"fa_6_io_a", false,-1);
    tracep->declBit(c+90,"fa_6_io_b", false,-1);
    tracep->declBit(c+91,"fa_6_io_cin", false,-1);
    tracep->declBit(c+92,"fa_6_io_sum", false,-1);
    tracep->declBit(c+93,"fa_6_io_cout", false,-1);
    tracep->declBit(c+94,"sumBits_2", false,-1);
    tracep->declBit(c+95,"sumBits_1", false,-1);
    tracep->declBit(c+96,"sumBits_0", false,-1);
    tracep->declBus(c+97,"io_sum_lo", false,-1, 2,0);
    tracep->declBit(c+98,"sumBits_4", false,-1);
    tracep->declBit(c+99,"sumBits_3", false,-1);
    tracep->declBit(c+100,"sumBits_6", false,-1);
    tracep->declBit(c+101,"sumBits_5", false,-1);
    tracep->declBus(c+102,"io_sum_hi", false,-1, 3,0);
    tracep->pushNamePrefix("fa ");
    tracep->declBit(c+103,"io_a", false,-1);
    tracep->declBit(c+104,"io_b", false,-1);
    tracep->declBit(c+105,"io_cin", false,-1);
    tracep->declBit(c+106,"io_sum", false,-1);
    tracep->declBit(c+107,"io_cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa_1 ");
    tracep->declBit(c+108,"io_a", false,-1);
    tracep->declBit(c+109,"io_b", false,-1);
    tracep->declBit(c+110,"io_cin", false,-1);
    tracep->declBit(c+111,"io_sum", false,-1);
    tracep->declBit(c+112,"io_cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa_2 ");
    tracep->declBit(c+113,"io_a", false,-1);
    tracep->declBit(c+114,"io_b", false,-1);
    tracep->declBit(c+115,"io_cin", false,-1);
    tracep->declBit(c+116,"io_sum", false,-1);
    tracep->declBit(c+117,"io_cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa_3 ");
    tracep->declBit(c+118,"io_a", false,-1);
    tracep->declBit(c+119,"io_b", false,-1);
    tracep->declBit(c+120,"io_cin", false,-1);
    tracep->declBit(c+121,"io_sum", false,-1);
    tracep->declBit(c+122,"io_cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa_4 ");
    tracep->declBit(c+123,"io_a", false,-1);
    tracep->declBit(c+124,"io_b", false,-1);
    tracep->declBit(c+125,"io_cin", false,-1);
    tracep->declBit(c+126,"io_sum", false,-1);
    tracep->declBit(c+127,"io_cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa_5 ");
    tracep->declBit(c+128,"io_a", false,-1);
    tracep->declBit(c+129,"io_b", false,-1);
    tracep->declBit(c+130,"io_cin", false,-1);
    tracep->declBit(c+131,"io_sum", false,-1);
    tracep->declBit(c+132,"io_cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa_6 ");
    tracep->declBit(c+133,"io_a", false,-1);
    tracep->declBit(c+134,"io_b", false,-1);
    tracep->declBit(c+135,"io_cin", false,-1);
    tracep->declBit(c+136,"io_sum", false,-1);
    tracep->declBit(c+137,"io_cout", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clock));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullCData(oldp+3,(vlSelf->io_a),4);
    bufp->fullCData(oldp+4,(vlSelf->io_b),4);
    bufp->fullCData(oldp+5,(vlSelf->io_product),8);
    bufp->fullBit(oldp+6,(vlSelf->DaddaTreeMultiplier__DOT__clock));
    bufp->fullBit(oldp+7,(vlSelf->DaddaTreeMultiplier__DOT__reset));
    bufp->fullCData(oldp+8,(vlSelf->DaddaTreeMultiplier__DOT__io_a),4);
    bufp->fullCData(oldp+9,(vlSelf->DaddaTreeMultiplier__DOT__io_b),4);
    bufp->fullCData(oldp+10,(vlSelf->DaddaTreeMultiplier__DOT__io_product),8);
    bufp->fullCData(oldp+11,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_a),7);
    bufp->fullCData(oldp+12,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_b),7);
    bufp->fullCData(oldp+13,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_sum),7);
    bufp->fullBit(oldp+14,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_cout));
    bufp->fullBit(oldp+15,(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_0));
    bufp->fullBit(oldp+16,(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_1));
    bufp->fullBit(oldp+17,(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_2));
    bufp->fullBit(oldp+18,(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_3));
    bufp->fullBit(oldp+19,(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_3));
    bufp->fullBit(oldp+20,(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_2));
    bufp->fullBit(oldp+21,(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_1));
    bufp->fullBit(oldp+22,(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_0));
    bufp->fullBit(oldp+23,(vlSelf->DaddaTreeMultiplier__DOT__partials_0_0));
    bufp->fullBit(oldp+24,(vlSelf->DaddaTreeMultiplier__DOT__partials_1_0));
    bufp->fullBit(oldp+25,(vlSelf->DaddaTreeMultiplier__DOT__partials_1_1));
    bufp->fullBit(oldp+26,(vlSelf->DaddaTreeMultiplier__DOT__partials_2_0));
    bufp->fullBit(oldp+27,(vlSelf->DaddaTreeMultiplier__DOT__partials_2_1));
    bufp->fullBit(oldp+28,(vlSelf->DaddaTreeMultiplier__DOT__partials_2_2));
    bufp->fullBit(oldp+29,(vlSelf->DaddaTreeMultiplier__DOT__partials_3_0));
    bufp->fullBit(oldp+30,(vlSelf->DaddaTreeMultiplier__DOT__partials_3_1));
    bufp->fullBit(oldp+31,(vlSelf->DaddaTreeMultiplier__DOT__partials_3_2));
    bufp->fullBit(oldp+32,(vlSelf->DaddaTreeMultiplier__DOT__partials_3_3));
    bufp->fullBit(oldp+33,(vlSelf->DaddaTreeMultiplier__DOT__partials_4_0));
    bufp->fullBit(oldp+34,(vlSelf->DaddaTreeMultiplier__DOT__partials_4_1));
    bufp->fullBit(oldp+35,(vlSelf->DaddaTreeMultiplier__DOT__partials_4_2));
    bufp->fullBit(oldp+36,(vlSelf->DaddaTreeMultiplier__DOT__partials_5_0));
    bufp->fullBit(oldp+37,(vlSelf->DaddaTreeMultiplier__DOT__partials_5_1));
    bufp->fullBit(oldp+38,(vlSelf->DaddaTreeMultiplier__DOT__partials_6_0));
    bufp->fullBit(oldp+39,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_3_2));
    bufp->fullBit(oldp+40,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_1));
    bufp->fullBit(oldp+41,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_2));
    bufp->fullBit(oldp+42,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_5_2));
    bufp->fullBit(oldp+43,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_2_1));
    bufp->fullBit(oldp+44,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_3_0));
    bufp->fullBit(oldp+45,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_3_1));
    bufp->fullBit(oldp+46,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_4_0));
    bufp->fullBit(oldp+47,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_4_1));
    bufp->fullBit(oldp+48,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_5_0));
    bufp->fullBit(oldp+49,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_5_1));
    bufp->fullBit(oldp+50,(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_6_1));
    bufp->fullCData(oldp+51,(vlSelf->DaddaTreeMultiplier__DOT__io_product_lo),3);
    bufp->fullCData(oldp+52,(vlSelf->DaddaTreeMultiplier__DOT__io_product_hi),4);
    bufp->fullCData(oldp+53,(vlSelf->DaddaTreeMultiplier__DOT__io_product_lo_1),3);
    bufp->fullCData(oldp+54,(vlSelf->DaddaTreeMultiplier__DOT__io_product_hi_1),4);
    bufp->fullCData(oldp+55,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_a),7);
    bufp->fullCData(oldp+56,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_b),7);
    bufp->fullCData(oldp+57,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum),7);
    bufp->fullBit(oldp+58,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_cout));
    bufp->fullBit(oldp+59,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a));
    bufp->fullBit(oldp+60,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b));
    bufp->fullBit(oldp+61,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cin));
    bufp->fullBit(oldp+62,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_sum));
    bufp->fullBit(oldp+63,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cout));
    bufp->fullBit(oldp+64,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a));
    bufp->fullBit(oldp+65,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b));
    bufp->fullBit(oldp+66,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cin));
    bufp->fullBit(oldp+67,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_sum));
    bufp->fullBit(oldp+68,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cout));
    bufp->fullBit(oldp+69,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a));
    bufp->fullBit(oldp+70,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b));
    bufp->fullBit(oldp+71,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cin));
    bufp->fullBit(oldp+72,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_sum));
    bufp->fullBit(oldp+73,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cout));
    bufp->fullBit(oldp+74,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a));
    bufp->fullBit(oldp+75,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b));
    bufp->fullBit(oldp+76,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cin));
    bufp->fullBit(oldp+77,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_sum));
    bufp->fullBit(oldp+78,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cout));
    bufp->fullBit(oldp+79,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a));
    bufp->fullBit(oldp+80,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b));
    bufp->fullBit(oldp+81,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cin));
    bufp->fullBit(oldp+82,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_sum));
    bufp->fullBit(oldp+83,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cout));
    bufp->fullBit(oldp+84,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a));
    bufp->fullBit(oldp+85,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b));
    bufp->fullBit(oldp+86,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cin));
    bufp->fullBit(oldp+87,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_sum));
    bufp->fullBit(oldp+88,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cout));
    bufp->fullBit(oldp+89,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a));
    bufp->fullBit(oldp+90,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_b));
    bufp->fullBit(oldp+91,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cin));
    bufp->fullBit(oldp+92,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_sum));
    bufp->fullBit(oldp+93,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cout));
    bufp->fullBit(oldp+94,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_2));
    bufp->fullBit(oldp+95,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_1));
    bufp->fullBit(oldp+96,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_0));
    bufp->fullCData(oldp+97,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_lo),3);
    bufp->fullBit(oldp+98,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_4));
    bufp->fullBit(oldp+99,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_3));
    bufp->fullBit(oldp+100,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_6));
    bufp->fullBit(oldp+101,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_5));
    bufp->fullCData(oldp+102,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_hi),4);
    bufp->fullBit(oldp+103,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_a));
    bufp->fullBit(oldp+104,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_b));
    bufp->fullBit(oldp+105,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cin));
    bufp->fullBit(oldp+106,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_sum));
    bufp->fullBit(oldp+107,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout));
    bufp->fullBit(oldp+108,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_a));
    bufp->fullBit(oldp+109,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_b));
    bufp->fullBit(oldp+110,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cin));
    bufp->fullBit(oldp+111,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_sum));
    bufp->fullBit(oldp+112,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout));
    bufp->fullBit(oldp+113,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_a));
    bufp->fullBit(oldp+114,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_b));
    bufp->fullBit(oldp+115,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cin));
    bufp->fullBit(oldp+116,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_sum));
    bufp->fullBit(oldp+117,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout));
    bufp->fullBit(oldp+118,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_a));
    bufp->fullBit(oldp+119,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_b));
    bufp->fullBit(oldp+120,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cin));
    bufp->fullBit(oldp+121,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_sum));
    bufp->fullBit(oldp+122,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout));
    bufp->fullBit(oldp+123,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_a));
    bufp->fullBit(oldp+124,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_b));
    bufp->fullBit(oldp+125,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cin));
    bufp->fullBit(oldp+126,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_sum));
    bufp->fullBit(oldp+127,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout));
    bufp->fullBit(oldp+128,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_a));
    bufp->fullBit(oldp+129,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_b));
    bufp->fullBit(oldp+130,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cin));
    bufp->fullBit(oldp+131,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_sum));
    bufp->fullBit(oldp+132,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout));
    bufp->fullBit(oldp+133,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_a));
    bufp->fullBit(oldp+134,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_b));
    bufp->fullBit(oldp+135,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cin));
    bufp->fullBit(oldp+136,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_sum));
    bufp->fullBit(oldp+137,(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cout));
}
