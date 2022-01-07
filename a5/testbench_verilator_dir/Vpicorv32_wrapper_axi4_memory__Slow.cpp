// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper_axi4_memory.h"
#include "Vpicorv32_wrapper__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vpicorv32_wrapper_axi4_memory) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vpicorv32_wrapper_axi4_memory::__Vconfigure(Vpicorv32_wrapper__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vpicorv32_wrapper_axi4_memory::~Vpicorv32_wrapper_axi4_memory() {
}

void Vpicorv32_wrapper_axi4_memory::_initial__TOP__picorv32_wrapper__mem__1(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory::_initial__TOP__picorv32_wrapper__mem__1\n"); );
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_axi_transaction = 7U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose 
        = (0U != VL_TESTPLUSARGS_I("verbose"));
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__async_axi_transaction = 0x1fU;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__delay_axi_transaction = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__tests_passed = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__axi_test 
        = (0U != VL_TESTPLUSARGS_I("axi_test"));
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state = 0x139408dcbbf7a44ULL;
}

void Vpicorv32_wrapper_axi4_memory::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__mem_axi_awvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_awready = VL_RAND_RESET_I(1);
    __PVT__mem_axi_awaddr = VL_RAND_RESET_I(32);
    __PVT__mem_axi_awprot = VL_RAND_RESET_I(3);
    __PVT__mem_axi_wvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_wready = VL_RAND_RESET_I(1);
    __PVT__mem_axi_wdata = VL_RAND_RESET_I(32);
    __PVT__mem_axi_wstrb = VL_RAND_RESET_I(4);
    __PVT__mem_axi_bvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_bready = VL_RAND_RESET_I(1);
    __PVT__mem_axi_arvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_arready = VL_RAND_RESET_I(1);
    __PVT__mem_axi_araddr = VL_RAND_RESET_I(32);
    __PVT__mem_axi_arprot = VL_RAND_RESET_I(3);
    __PVT__mem_axi_rvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_rready = VL_RAND_RESET_I(1);
    __PVT__mem_axi_rdata = VL_RAND_RESET_I(32);
    __PVT__tests_passed = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32768; ++__Vi0) {
            memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__verbose = VL_RAND_RESET_I(1);
    __PVT__axi_test = VL_RAND_RESET_I(1);
    __PVT__xorshift64_state = VL_RAND_RESET_Q(64);
    __PVT__fast_axi_transaction = VL_RAND_RESET_I(3);
    __PVT__async_axi_transaction = VL_RAND_RESET_I(5);
    __PVT__delay_axi_transaction = VL_RAND_RESET_I(5);
    __PVT__latched_raddr_en = VL_RAND_RESET_I(1);
    __PVT__latched_waddr_en = VL_RAND_RESET_I(1);
    __PVT__latched_wdata_en = VL_RAND_RESET_I(1);
    __PVT__fast_raddr = VL_RAND_RESET_I(1);
    __PVT__fast_waddr = VL_RAND_RESET_I(1);
    __PVT__fast_wdata = VL_RAND_RESET_I(1);
    __PVT__latched_raddr = VL_RAND_RESET_I(32);
    __PVT__latched_waddr = VL_RAND_RESET_I(32);
    __PVT__latched_wdata = VL_RAND_RESET_I(32);
    __PVT__latched_wstrb = VL_RAND_RESET_I(4);
    __PVT__latched_rinsn = VL_RAND_RESET_I(1);
    __Vdly__mem_axi_arready = VL_RAND_RESET_I(1);
    __Vdly__mem_axi_awready = VL_RAND_RESET_I(1);
    __Vdly__mem_axi_wready = VL_RAND_RESET_I(1);
    __Vdly__fast_raddr = VL_RAND_RESET_I(1);
    __Vdly__fast_waddr = VL_RAND_RESET_I(1);
    __Vdly__fast_wdata = VL_RAND_RESET_I(1);
    __Vdly__mem_axi_rvalid = VL_RAND_RESET_I(1);
    __Vdly__mem_axi_bvalid = VL_RAND_RESET_I(1);
    __Vdly__mem_axi_rdata = VL_RAND_RESET_I(32);
    __Vdlyvdim0__memory__v0 = 0;
    __Vdlyvlsb__memory__v0 = 0;
    __Vdlyvval__memory__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v0 = 0;
    __Vdlyvdim0__memory__v1 = 0;
    __Vdlyvlsb__memory__v1 = 0;
    __Vdlyvval__memory__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v1 = 0;
    __Vdlyvdim0__memory__v2 = 0;
    __Vdlyvlsb__memory__v2 = 0;
    __Vdlyvval__memory__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v2 = 0;
    __Vdlyvdim0__memory__v3 = 0;
    __Vdlyvlsb__memory__v3 = 0;
    __Vdlyvval__memory__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v3 = 0;
    __Vdlyvdim0__memory__v4 = 0;
    __Vdlyvlsb__memory__v4 = 0;
    __Vdlyvval__memory__v4 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v4 = 0;
    __Vdlyvdim0__memory__v5 = 0;
    __Vdlyvlsb__memory__v5 = 0;
    __Vdlyvval__memory__v5 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v5 = 0;
    __Vdlyvdim0__memory__v6 = 0;
    __Vdlyvlsb__memory__v6 = 0;
    __Vdlyvval__memory__v6 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v6 = 0;
    __Vdlyvdim0__memory__v7 = 0;
    __Vdlyvlsb__memory__v7 = 0;
    __Vdlyvval__memory__v7 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v7 = 0;
}
