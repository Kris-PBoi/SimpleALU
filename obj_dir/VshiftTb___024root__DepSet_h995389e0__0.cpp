// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VshiftTb.h for the primary calling header

#include "VshiftTb__pch.h"
#include "VshiftTb___024root.h"

VlCoroutine VshiftTb___024root___eval_initial__TOP__Vtiming__0(VshiftTb___024root* vlSelf);

void VshiftTb___024root___eval_initial(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VshiftTb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine VshiftTb___024root___eval_initial__TOP__Vtiming__0(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shiftTb__DOT__a_i = 0xd3U;
    vlSelfRef.shiftTb__DOT__b_i = 0x6cU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "shiftTb.sv", 
                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("a = %8b\nb = %8b\nOutput for left shift = %8b\nOutput for right shift= %8b\n",0,
                 8,vlSelfRef.shiftTb__DOT__a_i,8,(IData)(vlSelfRef.shiftTb__DOT__b_i),
                 8,vlSelfRef.shiftTb__DOT__outLeft,
                 8,(IData)(vlSelfRef.shiftTb__DOT__outRight));
    VL_FINISH_MT("shiftTb.sv", 20, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void VshiftTb___024root___act_sequent__TOP__0(VshiftTb___024root* vlSelf);

void VshiftTb___024root___eval_act(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VshiftTb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VshiftTb___024root___act_sequent__TOP__0(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shiftTb__DOT__outLeft = (0xffU & ((IData)(vlSelfRef.shiftTb__DOT__a_i) 
                                                << 
                                                (7U 
                                                 & (IData)(vlSelfRef.shiftTb__DOT__b_i))));
    vlSelfRef.shiftTb__DOT__outRight = (0xffU & ((IData)(vlSelfRef.shiftTb__DOT__a_i) 
                                                 >> 
                                                 (7U 
                                                  & (IData)(vlSelfRef.shiftTb__DOT__b_i))));
}

void VshiftTb___024root___eval_nba(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VshiftTb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VshiftTb___024root___timing_resume(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VshiftTb___024root___eval_triggers__act(VshiftTb___024root* vlSelf);

bool VshiftTb___024root___eval_phase__act(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VshiftTb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VshiftTb___024root___timing_resume(vlSelf);
        VshiftTb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VshiftTb___024root___eval_phase__nba(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VshiftTb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VshiftTb___024root___dump_triggers__nba(VshiftTb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VshiftTb___024root___dump_triggers__act(VshiftTb___024root* vlSelf);
#endif  // VL_DEBUG

void VshiftTb___024root___eval(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VshiftTb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("shiftTb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VshiftTb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("shiftTb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VshiftTb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VshiftTb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VshiftTb___024root___eval_debug_assertions(VshiftTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
