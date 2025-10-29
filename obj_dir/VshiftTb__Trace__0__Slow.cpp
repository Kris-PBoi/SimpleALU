// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VshiftTb__Syms.h"


VL_ATTR_COLD void VshiftTb___024root__trace_init_sub__TOP__0(VshiftTb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("shiftTb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"outLeft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"outRight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("uut1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"outLeft",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("uut2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"outRight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VshiftTb___024root__trace_init_top(VshiftTb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VshiftTb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VshiftTb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VshiftTb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VshiftTb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VshiftTb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VshiftTb___024root__trace_register(VshiftTb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VshiftTb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VshiftTb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VshiftTb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VshiftTb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VshiftTb___024root__trace_const_0_sub_0(VshiftTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VshiftTb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root__trace_const_0\n"); );
    // Init
    VshiftTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VshiftTb___024root*>(voidSelf);
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VshiftTb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VshiftTb___024root__trace_const_0_sub_0(VshiftTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+6,(8U),32);
}

VL_ATTR_COLD void VshiftTb___024root__trace_full_0_sub_0(VshiftTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VshiftTb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root__trace_full_0\n"); );
    // Init
    VshiftTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VshiftTb___024root*>(voidSelf);
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VshiftTb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VshiftTb___024root__trace_full_0_sub_0(VshiftTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VshiftTb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.shiftTb__DOT__a_i),8);
    bufp->fullCData(oldp+2,(vlSelfRef.shiftTb__DOT__b_i),8);
    bufp->fullCData(oldp+3,((0xffU & ((IData)(vlSelfRef.shiftTb__DOT__a_i) 
                                      << (7U & (IData)(vlSelfRef.shiftTb__DOT__b_i))))),8);
    bufp->fullCData(oldp+4,((0xffU & ((IData)(vlSelfRef.shiftTb__DOT__a_i) 
                                      >> (7U & (IData)(vlSelfRef.shiftTb__DOT__b_i))))),8);
    bufp->fullCData(oldp+5,((7U & (IData)(vlSelfRef.shiftTb__DOT__b_i))),3);
}
