// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VshiftTb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VshiftTb::VshiftTb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VshiftTb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VshiftTb::VshiftTb(const char* _vcname__)
    : VshiftTb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VshiftTb::~VshiftTb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VshiftTb___024root___eval_debug_assertions(VshiftTb___024root* vlSelf);
#endif  // VL_DEBUG
void VshiftTb___024root___eval_static(VshiftTb___024root* vlSelf);
void VshiftTb___024root___eval_initial(VshiftTb___024root* vlSelf);
void VshiftTb___024root___eval_settle(VshiftTb___024root* vlSelf);
void VshiftTb___024root___eval(VshiftTb___024root* vlSelf);

void VshiftTb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VshiftTb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VshiftTb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VshiftTb___024root___eval_static(&(vlSymsp->TOP));
        VshiftTb___024root___eval_initial(&(vlSymsp->TOP));
        VshiftTb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VshiftTb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VshiftTb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VshiftTb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VshiftTb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VshiftTb___024root___eval_final(VshiftTb___024root* vlSelf);

VL_ATTR_COLD void VshiftTb::final() {
    VshiftTb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VshiftTb::hierName() const { return vlSymsp->name(); }
const char* VshiftTb::modelName() const { return "VshiftTb"; }
unsigned VshiftTb::threads() const { return 1; }
void VshiftTb::prepareClone() const { contextp()->prepareClone(); }
void VshiftTb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VshiftTb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VshiftTb___024root__trace_decl_types(VerilatedVcd* tracep);

void VshiftTb___024root__trace_init_top(VshiftTb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VshiftTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VshiftTb___024root*>(voidSelf);
    VshiftTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VshiftTb___024root__trace_decl_types(tracep);
    VshiftTb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VshiftTb___024root__trace_register(VshiftTb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VshiftTb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VshiftTb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VshiftTb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
