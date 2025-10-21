// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VadderTb.h for the primary calling header

#ifndef VERILATED_VADDERTB___024ROOT_H_
#define VERILATED_VADDERTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VadderTb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VadderTb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ adderTb__DOT__a_i;
    CData/*7:0*/ adderTb__DOT__b_i;
    CData/*7:0*/ adderTb__DOT__sum;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ adderTb__DOT__tot;
    SData/*8:0*/ adderTb__DOT__uut__DOT__carry_int;
    SData/*8:0*/ __Vtrigprevexpr___TOP__adderTb__DOT__uut__DOT__carry_int__0;
    SData/*8:0*/ __Vtrigprevexpr___TOP__adderTb__DOT__uut__DOT__carry_int__1;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VadderTb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VadderTb___024root(VadderTb__Syms* symsp, const char* v__name);
    ~VadderTb___024root();
    VL_UNCOPYABLE(VadderTb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
