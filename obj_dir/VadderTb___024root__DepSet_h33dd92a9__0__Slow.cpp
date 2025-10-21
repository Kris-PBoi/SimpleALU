// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VadderTb.h for the primary calling header

#include "VadderTb__pch.h"
#include "VadderTb__Syms.h"
#include "VadderTb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VadderTb___024root___dump_triggers__stl(VadderTb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VadderTb___024root___eval_triggers__stl(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, ((IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__adderTb__DOT__uut__DOT__carry_int__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__adderTb__DOT__uut__DOT__carry_int__0 
        = vlSelfRef.adderTb__DOT__uut__DOT__carry_int;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VadderTb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
