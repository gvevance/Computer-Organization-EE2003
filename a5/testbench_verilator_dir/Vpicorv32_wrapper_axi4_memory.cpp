// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper_axi4_memory.h"
#include "Vpicorv32_wrapper__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_memory::_sequent__TOP__picorv32_wrapper__mem__4(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory::_sequent__TOP__picorv32_wrapper__mem__4\n"); );
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_wdata 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_waddr 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_raddr 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_wready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_awready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_arready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_bvalid 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v4 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v5 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v6 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v7 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v0 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v1 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v2 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v3 = 0U;
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_memory::_sequent__TOP__picorv32_wrapper__mem__5(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory::_sequent__TOP__picorv32_wrapper__mem__5\n"); );
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
          & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en) 
                | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr)))) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__async_axi_transaction))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn 
            = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                       ? 4U : 0U) >> 2U));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_arready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_raddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
          & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en) 
                | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr)))) 
         & ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__async_axi_transaction) 
            >> 1U))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_awready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_waddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
          & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en) 
                | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata)))) 
         & ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__async_axi_transaction) 
            >> 2U))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_wready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_wdata = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid)) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en)) 
         & ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__async_axi_transaction) 
            >> 3U))) {
        if (VL_UNLIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
            VL_WRITEF("RD: ADDR=%08x DATA=%08x%s\n",
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr,
                      32,vlSymsp->TOP__picorv32_wrapper__mem.memory
                      [(0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                                   >> 2U))],40,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn)
                                                 ? 0x20494e534eULL
                                                 : 0ULL));
        }
        if (VL_LIKELY((0x20000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr))) {
            vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 0U;
            vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata 
                = vlSymsp->TOP__picorv32_wrapper__mem.memory
                [(0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                             >> 2U))];
            vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid = 1U;
        } else {
            VL_WRITEF("OUT-OF-BOUNDS MEMORY READ FROM %08x\n",
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr);
            VL_FINISH_MT("testbench.v", 392, "");
        }
    }
    if (((((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid)) 
           & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en)) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en)) 
         & ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__async_axi_transaction) 
            >> 4U))) {
        if (VL_UNLIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
            VL_WRITEF("WR: ADDR=%08x DATA=%08x STRB=%04b\n",
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr,
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata,
                      4,(IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb));
        }
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 0U;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 0U;
        if ((0x20000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)) {
            if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v4 
                    = (0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata);
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v4 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v4 = 0U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v4 
                    = (0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                  >> 2U));
            }
            if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v5 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 8U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v5 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v5 = 8U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v5 
                    = (0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                  >> 2U));
            }
            if ((4U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v6 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 0x10U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v6 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v6 = 0x10U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v6 
                    = (0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                  >> 2U));
            }
            if ((8U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v7 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 0x18U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v7 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v7 = 0x18U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v7 
                    = (0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                  >> 2U));
            }
        } else {
            if ((0x10000000U == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)) {
                if (VL_LIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
                    if (((0x20U <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata) 
                         & (0x80U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata))) {
                        VL_WRITEF("OUT: '%c'\n",8,(0xffU 
                                                   & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata));
                    } else {
                        VL_WRITEF("OUT: %3#\n",32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata);
                    }
                } else {
                    VL_WRITEF("%c",8,(0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata));
                }
            } else {
                if (VL_LIKELY((0x20000000U == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr))) {
                    if ((0x75bcd15U == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata)) {
                        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__tests_passed = 1U;
                    }
                } else {
                    VL_WRITEF("OUT-OF-BOUNDS MEMORY WRITE TO %08x\n",
                              32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr);
                    VL_FINISH_MT("testbench.v", 423, "");
                }
            }
        }
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_bvalid = 1U;
    }
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_memory::_sequent__TOP__picorv32_wrapper__mem__6(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory::_sequent__TOP__picorv32_wrapper__mem__6\n"); );
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_arready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_awready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_wready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_raddr = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_waddr = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_wdata = 0U;
    if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid) 
         & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb))))))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid = 0U;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid) 
         & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb))))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_bvalid = 0U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready)) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr)))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn 
            = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                       ? 4U : 0U) >> 2U));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready)) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr)))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready)) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata)))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
          & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en) 
                | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr)))) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__delay_axi_transaction)))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn 
            = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                       ? 4U : 0U) >> 2U));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_arready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_raddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
          & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en) 
                | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr)))) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__delay_axi_transaction) 
               >> 1U)))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_awready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_waddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
          & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en) 
                | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata)))) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__delay_axi_transaction) 
               >> 2U)))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_wready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_wdata = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid)) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en)) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__delay_axi_transaction) 
               >> 3U)))) {
        if (VL_UNLIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
            VL_WRITEF("RD: ADDR=%08x DATA=%08x%s\n",
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr,
                      32,vlSymsp->TOP__picorv32_wrapper__mem.memory
                      [(0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                                   >> 2U))],40,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn)
                                                 ? 0x20494e534eULL
                                                 : 0ULL));
        }
        if (VL_LIKELY((0x20000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr))) {
            vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 0U;
            vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata 
                = vlSymsp->TOP__picorv32_wrapper__mem.memory
                [(0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                             >> 2U))];
            vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid = 1U;
        } else {
            VL_WRITEF("OUT-OF-BOUNDS MEMORY READ FROM %08x\n",
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr);
            VL_FINISH_MT("testbench.v", 392, "");
        }
    }
    if (((((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid)) 
           & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en)) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en)) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__delay_axi_transaction) 
               >> 4U)))) {
        if (VL_UNLIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
            VL_WRITEF("WR: ADDR=%08x DATA=%08x STRB=%04b\n",
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr,
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata,
                      4,(IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb));
        }
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 0U;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 0U;
        if ((0x20000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)) {
            if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v0 
                    = (0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata);
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v0 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v0 = 0U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v0 
                    = (0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                  >> 2U));
            }
            if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v1 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 8U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v1 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v1 = 8U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v1 
                    = (0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                  >> 2U));
            }
            if ((4U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v2 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 0x10U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v2 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v2 = 0x10U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v2 
                    = (0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                  >> 2U));
            }
            if ((8U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v3 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 0x18U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v3 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v3 = 0x18U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v3 
                    = (0x7fffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                  >> 2U));
            }
        } else {
            if ((0x10000000U == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)) {
                if (VL_LIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
                    if (((0x20U <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata) 
                         & (0x80U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata))) {
                        VL_WRITEF("OUT: '%c'\n",8,(0xffU 
                                                   & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata));
                    } else {
                        VL_WRITEF("OUT: %3#\n",32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata);
                    }
                } else {
                    VL_WRITEF("%c",8,(0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata));
                }
            } else {
                if (VL_LIKELY((0x20000000U == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr))) {
                    if ((0x75bcd15U == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata)) {
                        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__tests_passed = 1U;
                    }
                } else {
                    VL_WRITEF("OUT-OF-BOUNDS MEMORY WRITE TO %08x\n",
                              32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr);
                    VL_FINISH_MT("testbench.v", 423, "");
                }
            }
        }
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_bvalid = 1U;
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__axi_test) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
            = (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
               ^ (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
                  << 0xdU));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
            = (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
               ^ (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
                  >> 7U));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
            = (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
               ^ (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
                  << 0x11U));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_axi_transaction 
            = (7U & (IData)((vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
                             >> 0xaU)));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__async_axi_transaction 
            = (0x1fU & (IData)((vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state 
                                >> 5U)));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__delay_axi_transaction 
            = (0x1fU & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state));
    }
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_memory::_sequent__TOP__picorv32_wrapper__mem__7(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory::_sequent__TOP__picorv32_wrapper__mem__7\n"); );
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_raddr;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_waddr;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_wdata;
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v0) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v0))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v0]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v0) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v0)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v1) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v1))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v1]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v1) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v1)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v2) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v2))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v2]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v2) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v2)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v3) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v3))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v3]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v3) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v3)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v4) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v4] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v4))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v4]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v4) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v4)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v5) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v5] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v5))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v5]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v5) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v5)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v6) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v6] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v6))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v6]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v6) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v6)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v7) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v7] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v7))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v7]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v7) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v7)));
    }
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_arready;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_awready;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_wready;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_bvalid;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata;
}
