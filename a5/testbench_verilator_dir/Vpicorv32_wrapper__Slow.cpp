// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper.h"
#include "Vpicorv32_wrapper__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vpicorv32_wrapper) {
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = __VlSymsp = new Vpicorv32_wrapper__Syms(this, name());
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(picorv32_wrapper, Vpicorv32_wrapper_picorv32_wrapper);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vpicorv32_wrapper::__Vconfigure(Vpicorv32_wrapper__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vpicorv32_wrapper::~Vpicorv32_wrapper() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vpicorv32_wrapper::_settle__TOP__1(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_settle__TOP__1\n"); );
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->trace_data = vlSymsp->TOP__picorv32_wrapper.trace_data;
    vlTOPp->trace_valid = vlSymsp->TOP__picorv32_wrapper.trace_valid;
    vlTOPp->trap = vlSymsp->TOP__picorv32_wrapper.trap;
}

void Vpicorv32_wrapper::_eval_initial(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_eval_initial\n"); );
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper__mem._initial__TOP__picorv32_wrapper__mem__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__picorv32_wrapper._initial__TOP__picorv32_wrapper__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vpicorv32_wrapper::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::final\n"); );
    // Variables
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpicorv32_wrapper::_eval_settle(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_eval_settle\n"); );
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper._settle__TOP__picorv32_wrapper__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void Vpicorv32_wrapper::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    trap = VL_RAND_RESET_I(1);
    trace_valid = VL_RAND_RESET_I(1);
    trace_data = VL_RAND_RESET_Q(36);
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
