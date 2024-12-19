// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->DaddaTreeMultiplier__DOT__clock = vlSelf->clock;
    vlSelf->DaddaTreeMultiplier__DOT__reset = vlSelf->reset;
    vlSelf->DaddaTreeMultiplier__DOT__io_a = vlSelf->io_a;
    vlSelf->DaddaTreeMultiplier__DOT__io_b = vlSelf->io_b;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cin;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_b 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_3 
        = (1U & ((IData)(vlSelf->io_a) >> 3U));
    vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_2 
        = (1U & ((IData)(vlSelf->io_a) >> 2U));
    vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_0 
        = (1U & ((IData)(vlSelf->io_b) >> 3U));
    vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_3 
        = (1U & (IData)(vlSelf->io_b));
    vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_2 
        = (1U & ((IData)(vlSelf->io_b) >> 1U));
    vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_1 
        = (1U & ((IData)(vlSelf->io_b) >> 2U));
    vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_0 
        = (1U & (IData)(vlSelf->io_a));
    vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_1 
        = (1U & ((IData)(vlSelf->io_a) >> 1U));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_3) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_0));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_2) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_0));
    vlSelf->DaddaTreeMultiplier__DOT__partials_3_3 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_3) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_3));
    vlSelf->DaddaTreeMultiplier__DOT__partials_4_2 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_2) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_3));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_3) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_2));
    vlSelf->DaddaTreeMultiplier__DOT__partials_3_2 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_2) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_2));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_3) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_1));
    vlSelf->DaddaTreeMultiplier__DOT__partials_2_1 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_2) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_1));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_0) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_3));
    vlSelf->DaddaTreeMultiplier__DOT__partials_5_0 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_0) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_2));
    vlSelf->DaddaTreeMultiplier__DOT__partials_3_0 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_0) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_0));
    vlSelf->DaddaTreeMultiplier__DOT__partials_4_0 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_0) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_1));
    vlSelf->DaddaTreeMultiplier__DOT__partials_2_0 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_1) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_0));
    vlSelf->DaddaTreeMultiplier__DOT__partials_5_1 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_1) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_3));
    vlSelf->DaddaTreeMultiplier__DOT__partials_3_1 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_1) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_1));
    vlSelf->DaddaTreeMultiplier__DOT__partials_4_1 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_1) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_2));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_a 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__partials_0_0 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_a 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__partials_1_0 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_a 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__partials_2_2 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_b 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__partials_1_1 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_a 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__partials_6_0 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_2_0) 
           ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_2_1));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_2_0) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_2_1));
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_3_2 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_3_0) 
           ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_3_1));
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_1 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_3_0) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_3_1));
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_2 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_4_0) 
           ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_4_1));
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_5_2 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_4_0) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_4_1));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_b 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_2_1 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_a 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_3_0 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_hi 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a) 
            << 3U) | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a) 
                       << 2U) | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a) 
                                  << 1U) | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a))));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_3_2) 
           ^ ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_3_3) 
              ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_3_2)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_3_2) 
            & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_3_3)) 
           | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_3_3) 
               | (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_3_2)) 
              & (IData)(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_3_2)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_4_2) 
           ^ ((IData)(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_1) 
              ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_2)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_4_2) 
            & (IData)(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_1)) 
           | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_1) 
               | (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_4_2)) 
              & (IData)(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_2)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_5_0) 
           ^ ((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_5_1) 
              ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_5_2)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_5_0) 
            & (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_5_1)) 
           | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_5_1) 
               | (IData)(vlSelf->DaddaTreeMultiplier__DOT__partials_5_0)) 
              & (IData)(vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_5_2)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_b 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_3_1 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_hi_1 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b) 
            << 2U) | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b) 
                       << 1U) | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_a 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_4_0 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_b 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_4_1 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_a 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_5_0 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_lo 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a) 
            << 2U) | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a) 
                       << 1U) | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_b 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_5_1 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_b 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_6_1 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_lo_1 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b) 
            << 2U) | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b) 
                       << 1U) | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_sum 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a) 
           ^ ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b) 
              ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cin)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a) 
            & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b)) 
           | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b) 
               | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a)) 
              & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cin)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_a 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_hi) 
            << 3U) | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_lo));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_b 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_hi_1) 
            << 3U) | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_lo_1));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_sum 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_0 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cout 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_sum 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a) 
           ^ ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b) 
              ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a) 
            & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b)) 
           | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b) 
               | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a)) 
              & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_a 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_a;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_b 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_b;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_sum 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_1 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cout 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_sum 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a) 
           ^ ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b) 
              ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a) 
            & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b)) 
           | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b) 
               | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a)) 
              & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_sum 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_2 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_lo 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_sum) 
            << 2U) | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_sum) 
                       << 1U) | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_sum)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cout 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_sum 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a) 
           ^ ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b) 
              ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a) 
            & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b)) 
           | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b) 
               | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a)) 
              & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_sum 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_3 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cout 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_sum 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a) 
           ^ ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b) 
              ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a) 
            & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b)) 
           | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b) 
               | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a)) 
              & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_sum 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_4 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cout 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_sum 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a) 
           ^ ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b) 
              ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a) 
            & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b)) 
           | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b) 
               | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a)) 
              & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout)));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_sum 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_5 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cout 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cin 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cout 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a) 
           & (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_sum 
        = ((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a) 
           ^ (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_cout 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_cout 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cout 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cout;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_sum 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_6 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_sum;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_hi 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_sum) 
            << 3U) | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_sum) 
                       << 2U) | (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_sum) 
                                  << 1U) | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_sum))));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum 
        = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_hi) 
            << 3U) | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_lo));
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_sum 
        = vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum;
    vlSelf->io_product = (((IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cout) 
                           << 7U) | (IData)(vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum));
    vlSelf->DaddaTreeMultiplier__DOT__io_product = vlSelf->io_product;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/mlm439/chisel-project/generated/DaddaTreeMultiplier.v", 134, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/mlm439/chisel-project/generated/DaddaTreeMultiplier.v", 134, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/mlm439/chisel-project/generated/DaddaTreeMultiplier.v", 134, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_a & 0xf0U))) {
        Verilated::overWidthError("io_a");}
    if (VL_UNLIKELY((vlSelf->io_b & 0xf0U))) {
        Verilated::overWidthError("io_b");}
}
#endif  // VL_DEBUG
