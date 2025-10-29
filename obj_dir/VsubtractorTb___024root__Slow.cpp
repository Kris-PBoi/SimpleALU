// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsubtractorTb.h for the primary calling header

#include "VsubtractorTb__pch.h"
#include "VsubtractorTb__Syms.h"
#include "VsubtractorTb___024root.h"

void VsubtractorTb___024root___ctor_var_reset(VsubtractorTb___024root* vlSelf);

VsubtractorTb___024root::VsubtractorTb___024root(VsubtractorTb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsubtractorTb___024root___ctor_var_reset(this);
}

void VsubtractorTb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsubtractorTb___024root::~VsubtractorTb___024root() {
}
