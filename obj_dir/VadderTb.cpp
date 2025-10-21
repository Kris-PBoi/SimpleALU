// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VadderTb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VadderTb::VadderTb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VadderTb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VadderTb::VadderTb(const char* _vcname__)
    : VadderTb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VadderTb::~VadderTb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VadderTb___024root___eval_debug_assertions(VadderTb___024root* vlSelf);
#endif  // VL_DEBUG
void VadderTb___024root___eval_static(VadderTb___024root* vlSelf);
void VadderTb___024root___eval_initial(VadderTb___024root* vlSelf);
void VadderTb___024root___eval_settle(VadderTb___024root* vlSelf);
void VadderTb___024root___eval(VadderTb___024root* vlSelf);

void VadderTb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VadderTb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VadderTb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VadderTb___024root___eval_static(&(vlSymsp->TOP));
        VadderTb___024root___eval_initial(&(vlSymsp->TOP));
        VadderTb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VadderTb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VadderTb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VadderTb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VadderTb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VadderTb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VadderTb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VadderTb___024root___eval_final(VadderTb___024root* vlSelf);

VL_ATTR_COLD void VadderTb::final() {
    VadderTb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VadderTb::hierName() const { return vlSymsp->name(); }
const char* VadderTb::modelName() const { return "VadderTb"; }
unsigned VadderTb::threads() const { return 1; }
void VadderTb::prepareClone() const { contextp()->prepareClone(); }
void VadderTb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VadderTb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VadderTb___024root__trace_decl_types(VerilatedVcd* tracep);

void VadderTb___024root__trace_init_top(VadderTb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VadderTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VadderTb___024root*>(voidSelf);
    VadderTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VadderTb___024root__trace_decl_types(tracep);
    VadderTb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VadderTb___024root__trace_register(VadderTb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VadderTb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VadderTb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VadderTb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
