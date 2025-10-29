// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsubtractorTb__Syms.h"


void VsubtractorTb___024root__trace_chg_0_sub_0(VsubtractorTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VsubtractorTb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root__trace_chg_0\n"); );
    // Init
    VsubtractorTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsubtractorTb___024root*>(voidSelf);
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VsubtractorTb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VsubtractorTb___024root__trace_chg_0_sub_0(VsubtractorTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.subtractorTb__DOT__a_i),8);
    bufp->chgCData(oldp+1,(vlSelfRef.subtractorTb__DOT__b_i),8);
    bufp->chgCData(oldp+2,(((((0x80U & (((0xffffff80U 
                                          & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                         ^ (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                 >> 7U)) 
                                             << 7U) 
                                            ^ (0xffffff80U 
                                               & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                        ^ (0xffffff80U 
                                           & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                              | (0x40U & (((0xffffffc0U 
                                            & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                           ^ (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                   >> 6U)) 
                                               << 6U) 
                                              ^ (0xffffffc0U 
                                                 & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                          ^ (0xffffffc0U 
                                             & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2))))) 
                             | ((0x20U & (((0xffffffe0U 
                                            & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                           ^ (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                   >> 5U)) 
                                               << 5U) 
                                              ^ (0xffffffe0U 
                                                 & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                          ^ (0xffffffe0U 
                                             & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                                | (0x10U & (((0xfffffff0U 
                                              & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                             ^ (((~ 
                                                  ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                   >> 4U)) 
                                                 << 4U) 
                                                ^ (0xfffffff0U 
                                                   & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                            ^ (0xfffffff0U 
                                               & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))))) 
                            | (((8U & (((0xfffffff8U 
                                         & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                        ^ (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                >> 3U)) 
                                            << 3U) 
                                           ^ (0xfffffff8U 
                                              & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                       ^ (0xfffffff8U 
                                          & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                                | (4U & (((0xfffffffcU 
                                           & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                          ^ (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                  >> 2U)) 
                                              << 2U) 
                                             ^ (0xfffffffcU 
                                                & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                         ^ (0xfffffffcU 
                                            & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2))))) 
                               | ((2U & (((0xfffffffeU 
                                           & (IData)(vlSelfRef.subtractorTb__DOT__a_i)) 
                                          ^ (((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                                  >> 1U)) 
                                              << 1U) 
                                             ^ (0xfffffffeU 
                                                & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)))) 
                                         ^ (0xfffffffeU 
                                            & (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2)))) 
                                  | (1U & ((((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                             ^ (IData)(vlSelfRef.subtractorTb__DOT__b_i)) 
                                            ^ (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int)) 
                                           ^ (IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2))))))),8);
    bufp->chgBit(oldp+3,((1U & (((IData)(vlSelfRef.subtractorTb__DOT__a_i) 
                                 >> 7U) ^ ((~ ((IData)(vlSelfRef.subtractorTb__DOT__b_i) 
                                               >> 7U)) 
                                           ^ ((IData)(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int) 
                                              >> 7U))))));
    bufp->chgSData(oldp+4,(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int),9);
    bufp->chgCData(oldp+5,((0xffU & (~ (IData)(vlSelfRef.subtractorTb__DOT__b_i)))),8);
    bufp->chgCData(oldp+6,(vlSelfRef.subtractorTb__DOT__uut__DOT__sum),8);
    bufp->chgSData(oldp+7,(vlSelfRef.subtractorTb__DOT__uut__DOT__carry_int2),9);
}

void VsubtractorTb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsubtractorTb___024root__trace_cleanup\n"); );
    // Init
    VsubtractorTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsubtractorTb___024root*>(voidSelf);
    VsubtractorTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
