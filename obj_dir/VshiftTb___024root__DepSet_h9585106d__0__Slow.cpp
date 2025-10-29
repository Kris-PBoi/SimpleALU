// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VshiftTb.h for the primary calling header

#include "VshiftTb__pch.h"
#include "VshiftTb__Syms.h"
#include "VshiftTb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VshiftTb___024root___dump_triggers__stl(VshiftTb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VshiftTb___024root___eval_triggers__stl(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VshiftTb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
