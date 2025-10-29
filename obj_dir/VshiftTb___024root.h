// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VshiftTb.h for the primary calling header

#ifndef VERILATED_VSHIFTTB___024ROOT_H_
#define VERILATED_VSHIFTTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VshiftTb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VshiftTb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ shiftTb__DOT__a_i;
    CData/*7:0*/ shiftTb__DOT__b_i;
    CData/*7:0*/ shiftTb__DOT__outLeft;
    CData/*7:0*/ shiftTb__DOT__outRight;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VshiftTb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VshiftTb___024root(VshiftTb__Syms* symsp, const char* v__name);
    ~VshiftTb___024root();
    VL_UNCOPYABLE(VshiftTb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
