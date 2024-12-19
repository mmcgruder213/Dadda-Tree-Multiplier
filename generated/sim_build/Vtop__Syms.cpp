// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_DaddaTreeMultiplier);
    __Vhier.remove(&__Vscope_DaddaTreeMultiplier, &__Vscope_DaddaTreeMultiplier__io_product_rca);
    __Vhier.remove(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa);
    __Vhier.remove(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_1);
    __Vhier.remove(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_2);
    __Vhier.remove(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_3);
    __Vhier.remove(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_4);
    __Vhier.remove(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_5);
    __Vhier.remove(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_6);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_DaddaTreeMultiplier.configure(this, name(), "DaddaTreeMultiplier", "DaddaTreeMultiplier", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_DaddaTreeMultiplier__io_product_rca.configure(this, name(), "DaddaTreeMultiplier.io_product_rca", "io_product_rca", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_DaddaTreeMultiplier__io_product_rca__fa.configure(this, name(), "DaddaTreeMultiplier.io_product_rca.fa", "fa", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_DaddaTreeMultiplier__io_product_rca__fa_1.configure(this, name(), "DaddaTreeMultiplier.io_product_rca.fa_1", "fa_1", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_DaddaTreeMultiplier__io_product_rca__fa_2.configure(this, name(), "DaddaTreeMultiplier.io_product_rca.fa_2", "fa_2", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_DaddaTreeMultiplier__io_product_rca__fa_3.configure(this, name(), "DaddaTreeMultiplier.io_product_rca.fa_3", "fa_3", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_DaddaTreeMultiplier__io_product_rca__fa_4.configure(this, name(), "DaddaTreeMultiplier.io_product_rca.fa_4", "fa_4", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_DaddaTreeMultiplier__io_product_rca__fa_5.configure(this, name(), "DaddaTreeMultiplier.io_product_rca.fa_5", "fa_5", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_DaddaTreeMultiplier__io_product_rca__fa_6.configure(this, name(), "DaddaTreeMultiplier.io_product_rca.fa_6", "fa_6", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_DaddaTreeMultiplier);
    __Vhier.add(&__Vscope_DaddaTreeMultiplier, &__Vscope_DaddaTreeMultiplier__io_product_rca);
    __Vhier.add(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa);
    __Vhier.add(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_1);
    __Vhier.add(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_2);
    __Vhier.add(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_3);
    __Vhier.add(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_4);
    __Vhier.add(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_5);
    __Vhier.add(&__Vscope_DaddaTreeMultiplier__io_product_rca, &__Vscope_DaddaTreeMultiplier__io_product_rca__fa_6);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"clock", &(TOP.DaddaTreeMultiplier__DOT__clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_a", &(TOP.DaddaTreeMultiplier__DOT__io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_b", &(TOP.DaddaTreeMultiplier__DOT__io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_product", &(TOP.DaddaTreeMultiplier__DOT__io_product), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_product_hi", &(TOP.DaddaTreeMultiplier__DOT__io_product_hi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_product_hi_1", &(TOP.DaddaTreeMultiplier__DOT__io_product_hi_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_product_lo", &(TOP.DaddaTreeMultiplier__DOT__io_product_lo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_product_lo_1", &(TOP.DaddaTreeMultiplier__DOT__io_product_lo_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_product_rca_io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca_io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_product_rca_io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca_io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_product_rca_io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca_io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"io_product_rca_io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca_io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_0_0", &(TOP.DaddaTreeMultiplier__DOT__partials_0_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_1_0", &(TOP.DaddaTreeMultiplier__DOT__partials_1_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_1_1", &(TOP.DaddaTreeMultiplier__DOT__partials_1_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_2_0", &(TOP.DaddaTreeMultiplier__DOT__partials_2_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_2_1", &(TOP.DaddaTreeMultiplier__DOT__partials_2_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_2_2", &(TOP.DaddaTreeMultiplier__DOT__partials_2_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_3_0", &(TOP.DaddaTreeMultiplier__DOT__partials_3_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_3_1", &(TOP.DaddaTreeMultiplier__DOT__partials_3_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_3_2", &(TOP.DaddaTreeMultiplier__DOT__partials_3_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_3_3", &(TOP.DaddaTreeMultiplier__DOT__partials_3_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_4_0", &(TOP.DaddaTreeMultiplier__DOT__partials_4_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_4_1", &(TOP.DaddaTreeMultiplier__DOT__partials_4_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_4_2", &(TOP.DaddaTreeMultiplier__DOT__partials_4_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_5_0", &(TOP.DaddaTreeMultiplier__DOT__partials_5_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_5_1", &(TOP.DaddaTreeMultiplier__DOT__partials_5_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_6_0", &(TOP.DaddaTreeMultiplier__DOT__partials_6_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_x_bool_0", &(TOP.DaddaTreeMultiplier__DOT__partials_x_bool_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_x_bool_1", &(TOP.DaddaTreeMultiplier__DOT__partials_x_bool_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_x_bool_2", &(TOP.DaddaTreeMultiplier__DOT__partials_x_bool_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_x_bool_3", &(TOP.DaddaTreeMultiplier__DOT__partials_x_bool_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_y_bool_0", &(TOP.DaddaTreeMultiplier__DOT__partials_y_bool_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_y_bool_1", &(TOP.DaddaTreeMultiplier__DOT__partials_y_bool_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_y_bool_2", &(TOP.DaddaTreeMultiplier__DOT__partials_y_bool_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"partials_y_bool_3", &(TOP.DaddaTreeMultiplier__DOT__partials_y_bool_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_2_1", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_2_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_3_0", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_3_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_3_1", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_3_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_4_0", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_4_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_4_1", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_4_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_5_0", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_5_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_5_1", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_5_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_6_1", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_6_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_reducedPartials_3_2", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_3_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_reducedPartials_4_1", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_reducedPartials_4_2", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_4_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reducedPartials_reducedPartials_5_2", &(TOP.DaddaTreeMultiplier__DOT__reducedPartials_reducedPartials_5_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier.varInsert(__Vfinal,"reset", &(TOP.DaddaTreeMultiplier__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_1_io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_1_io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_1_io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_1_io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_1_io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1_io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_2_io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_2_io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_2_io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_2_io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_2_io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2_io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_3_io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_3_io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_3_io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_3_io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_3_io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3_io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_4_io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_4_io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_4_io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_4_io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_4_io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4_io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_5_io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_5_io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_5_io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_5_io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_5_io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5_io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_6_io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_6_io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_6_io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_6_io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_6_io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6_io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"fa_io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"io_sum_hi", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_hi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"io_sum_lo", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__io_sum_lo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"sumBits_0", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"sumBits_1", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"sumBits_2", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"sumBits_3", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"sumBits_4", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"sumBits_5", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_5), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca.varInsert(__Vfinal,"sumBits_6", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__sumBits_6), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa.varInsert(__Vfinal,"io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa.varInsert(__Vfinal,"io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa.varInsert(__Vfinal,"io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa.varInsert(__Vfinal,"io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa.varInsert(__Vfinal,"io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa__DOT__io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_1.varInsert(__Vfinal,"io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_1.varInsert(__Vfinal,"io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_1.varInsert(__Vfinal,"io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_1.varInsert(__Vfinal,"io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_1.varInsert(__Vfinal,"io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_1__DOT__io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_2.varInsert(__Vfinal,"io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_2.varInsert(__Vfinal,"io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_2.varInsert(__Vfinal,"io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_2.varInsert(__Vfinal,"io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_2.varInsert(__Vfinal,"io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_2__DOT__io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_3.varInsert(__Vfinal,"io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_3.varInsert(__Vfinal,"io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_3.varInsert(__Vfinal,"io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_3.varInsert(__Vfinal,"io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_3.varInsert(__Vfinal,"io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_3__DOT__io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_4.varInsert(__Vfinal,"io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_4.varInsert(__Vfinal,"io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_4.varInsert(__Vfinal,"io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_4.varInsert(__Vfinal,"io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_4.varInsert(__Vfinal,"io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_4__DOT__io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_5.varInsert(__Vfinal,"io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_5.varInsert(__Vfinal,"io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_5.varInsert(__Vfinal,"io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_5.varInsert(__Vfinal,"io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_5.varInsert(__Vfinal,"io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_5__DOT__io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_6.varInsert(__Vfinal,"io_a", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_6.varInsert(__Vfinal,"io_b", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_6.varInsert(__Vfinal,"io_cin", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_6.varInsert(__Vfinal,"io_cout", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_DaddaTreeMultiplier__io_product_rca__fa_6.varInsert(__Vfinal,"io_sum", &(TOP.DaddaTreeMultiplier__DOT__io_product_rca__DOT__fa_6__DOT__io_sum), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clock", &(TOP.clock), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_a", &(TOP.io_a), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_b", &(TOP.io_b), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_product", &(TOP.io_product), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"reset", &(TOP.reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
    }
}
