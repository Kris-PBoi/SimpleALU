// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsubtractorTb.h for the primary calling header

#ifndef VERILATED_VSUBTRACTORTB___024ROOT_H_
#define VERILATED_VSUBTRACTORTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VsubtractorTb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsubtractorTb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ subtractorTb__DOT__a_i;
    CData/*7:0*/ subtractorTb__DOT__b_i;
    CData/*0:0*/ subtractorTb__DOT__sign;
    CData/*7:0*/ subtractorTb__DOT__uut__DOT__sum;
    CData/*0:0*/ subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_0;
    CData/*0:0*/ subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_1;
    CData/*0:0*/ subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_2;
    CData/*0:0*/ subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_3;
    CData/*0:0*/ subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_4;
    CData/*0:0*/ subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_5;
    CData/*0:0*/ subtractorTb__DOT__uut__DOT____VdfgRegularize_hce0cac42_0_6;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ subtractorTb__DOT__uut__DOT__carry_int;
    SData/*8:0*/ subtractorTb__DOT__uut__DOT__carry_int2;
    SData/*8:0*/ __Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int__0;
    SData/*8:0*/ __Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int2__0;
    SData/*8:0*/ __Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int__1;
    SData/*8:0*/ __Vtrigprevexpr___TOP__subtractorTb__DOT__uut__DOT__carry_int2__1;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsubtractorTb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsubtractorTb___024root(VsubtractorTb__Syms* symsp, const char* v__name);
    ~VsubtractorTb___024root();
    VL_UNCOPYABLE(VsubtractorTb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
