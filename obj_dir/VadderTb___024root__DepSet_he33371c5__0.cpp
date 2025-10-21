// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VadderTb.h for the primary calling header

#include "VadderTb__pch.h"
#include "VadderTb___024root.h"

VlCoroutine VadderTb___024root___eval_initial__TOP__Vtiming__0(VadderTb___024root* vlSelf);

void VadderTb___024root___eval_initial(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VadderTb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__adderTb__DOT__uut__DOT__carry_int__0 
        = vlSelfRef.adderTb__DOT__uut__DOT__carry_int;
    vlSelfRef.__Vtrigprevexpr___TOP__adderTb__DOT__uut__DOT__carry_int__1 
        = vlSelfRef.adderTb__DOT__uut__DOT__carry_int;
}

VL_INLINE_OPT VlCoroutine VadderTb___024root___eval_initial__TOP__Vtiming__0(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.adderTb__DOT__a_i = 0x95U;
    vlSelfRef.adderTb__DOT__b_i = 0xd2U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "adderTb.sv", 
                                         14);
    VL_WRITEF_NX("a = %8b\nb = %8b\nsum = %8b\ncarry = %1b\n",0,
                 8,vlSelfRef.adderTb__DOT__a_i,8,(IData)(vlSelfRef.adderTb__DOT__b_i),
                 8,vlSelfRef.adderTb__DOT__sum,1,(1U 
                                                  & ((IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int) 
                                                     >> 8U)));
    VL_FINISH_MT("adderTb.sv", 21, "");
}

void VadderTb___024root___act_comb__TOP__0(VadderTb___024root* vlSelf);

void VadderTb___024root___eval_act(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VadderTb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VadderTb___024root___act_comb__TOP__0(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.adderTb__DOT__uut__DOT__carry_int = (
                                                   (0x1f0U 
                                                    & ((((IData)(vlSelfRef.adderTb__DOT__a_i) 
                                                         & ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                                            | (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int))) 
                                                        | ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                                           & (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int))) 
                                                       << 1U)) 
                                                   | ((0xcU 
                                                       & ((((IData)(vlSelfRef.adderTb__DOT__a_i) 
                                                            & ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                                               | (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int))) 
                                                           | ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                                              & (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int))) 
                                                          << 1U)) 
                                                      | (2U 
                                                         & ((((IData)(vlSelfRef.adderTb__DOT__a_i) 
                                                              & ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                                                 | (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int))) 
                                                             | ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                                                & (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int))) 
                                                            << 1U))));
    vlSelfRef.adderTb__DOT__sum = (0xffU & ((IData)(vlSelfRef.adderTb__DOT__a_i) 
                                            ^ ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                               ^ (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int))));
}

void VadderTb___024root___nba_sequent__TOP__0(VadderTb___024root* vlSelf);

void VadderTb___024root___eval_nba(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VadderTb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VadderTb___024root___nba_sequent__TOP__0(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.adderTb__DOT__sum = (0xffU & ((IData)(vlSelfRef.adderTb__DOT__a_i) 
                                            ^ ((IData)(vlSelfRef.adderTb__DOT__b_i) 
                                               ^ (IData)(vlSelfRef.adderTb__DOT__uut__DOT__carry_int))));
}

void VadderTb___024root___timing_resume(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VadderTb___024root___eval_triggers__act(VadderTb___024root* vlSelf);

bool VadderTb___024root___eval_phase__act(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VadderTb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VadderTb___024root___timing_resume(vlSelf);
        VadderTb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VadderTb___024root___eval_phase__nba(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VadderTb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VadderTb___024root___dump_triggers__nba(VadderTb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VadderTb___024root___dump_triggers__act(VadderTb___024root* vlSelf);
#endif  // VL_DEBUG

void VadderTb___024root___eval(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval\n"); );
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
            VadderTb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("adderTb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VadderTb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("adderTb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VadderTb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VadderTb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VadderTb___024root___eval_debug_assertions(VadderTb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VadderTb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
