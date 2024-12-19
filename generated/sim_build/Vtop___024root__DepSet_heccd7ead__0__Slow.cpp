// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cin = 0U;
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_b = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/mlm439/chisel-project/generated/DaddaTreeMultiplier.v", 134, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_a = VL_RAND_RESET_I(4);
    vlSelf->io_b = VL_RAND_RESET_I(4);
    vlSelf->io_product = VL_RAND_RESET_I(8);
    vlSelf->DaddaTreeMultiplier__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_a = VL_RAND_RESET_I(4);
    vlSelf->DaddaTreeMultiplier__DOT__io_b = VL_RAND_RESET_I(4);
    vlSelf->DaddaTreeMultiplier__DOT__io_product = VL_RAND_RESET_I(8);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_a = VL_RAND_RESET_I(7);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_b = VL_RAND_RESET_I(7);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_sum = VL_RAND_RESET_I(7);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca_io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_2 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_x_bool_3 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_3 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_2 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_y_bool_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_0_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_1_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_1_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_2_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_2_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_2_2 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_3_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_3_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_3_2 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_3_3 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_4_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_4_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_4_2 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_5_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_5_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__partials_6_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_3_2 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_2 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_5_2 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_2_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_3_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_3_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_4_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_4_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_5_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_5_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__reducedPartials_6_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_lo = VL_RAND_RESET_I(3);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_hi = VL_RAND_RESET_I(4);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_lo_1 = VL_RAND_RESET_I(3);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_hi_1 = VL_RAND_RESET_I(4);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_a = VL_RAND_RESET_I(7);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_b = VL_RAND_RESET_I(7);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum = VL_RAND_RESET_I(7);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_2 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_1 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_0 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_lo = VL_RAND_RESET_I(3);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_4 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_3 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_6 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_5 = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_hi = VL_RAND_RESET_I(4);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_a = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_b = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cin = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_sum = VL_RAND_RESET_I(1);
    vlSelf->DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cout = VL_RAND_RESET_I(1);
}
