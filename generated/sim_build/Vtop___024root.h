// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_a,3,0);
        VL_IN8(io_b,3,0);
        VL_OUT8(io_product,7,0);
        CData/*0:0*/ DaddaTreeMultiplier__DOT__clock;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reset;
        CData/*3:0*/ DaddaTreeMultiplier__DOT__io_a;
        CData/*3:0*/ DaddaTreeMultiplier__DOT__io_b;
        CData/*7:0*/ DaddaTreeMultiplier__DOT__io_product;
        CData/*6:0*/ DaddaTreeMultiplier__DOT__io_product_rca_io_a;
        CData/*6:0*/ DaddaTreeMultiplier__DOT__io_product_rca_io_b;
        CData/*6:0*/ DaddaTreeMultiplier__DOT__io_product_rca_io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca_io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_x_bool_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_x_bool_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_x_bool_2;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_x_bool_3;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_y_bool_3;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_y_bool_2;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_y_bool_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_y_bool_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_0_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_1_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_1_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_2_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_2_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_2_2;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_3_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_3_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_3_2;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_3_3;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_4_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_4_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_4_2;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_5_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_5_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__partials_6_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_3_2;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_2;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_5_2;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_2_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_3_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_3_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_4_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_4_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_5_0;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_5_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__reducedPartials_6_1;
        CData/*2:0*/ DaddaTreeMultiplier__DOT__io_product_lo;
        CData/*3:0*/ DaddaTreeMultiplier__DOT__io_product_hi;
        CData/*2:0*/ DaddaTreeMultiplier__DOT__io_product_lo_1;
        CData/*3:0*/ DaddaTreeMultiplier__DOT__io_product_hi_1;
        CData/*6:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_a;
        CData/*6:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_b;
        CData/*6:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a;
    };
    struct {
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_2;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_1;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_0;
        CData/*2:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_lo;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_4;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_3;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_6;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_5;
        CData/*3:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_hi;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_a;
    };
    struct {
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_a;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_b;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cin;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_sum;
        CData/*0:0*/ DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cout;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
