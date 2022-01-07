// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32_wrapper__Syms.h"


//======================

void Vpicorv32_wrapper::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vpicorv32_wrapper::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = static_cast<Vpicorv32_wrapper__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vpicorv32_wrapper::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vpicorv32_wrapper::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = static_cast<Vpicorv32_wrapper__Syms*>(userp);
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vpicorv32_wrapper::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = static_cast<Vpicorv32_wrapper__Syms*>(userp);
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+328,"clk", false,-1);
        tracep->declBit(c+329,"resetn", false,-1);
        tracep->declBit(c+330,"trap", false,-1);
        tracep->declBit(c+331,"trace_valid", false,-1);
        tracep->declQuad(c+332,"trace_data", false,-1, 35,0);
        tracep->declBus(c+337,"picorv32_wrapper AXI_TEST", false,-1, 31,0);
        tracep->declBus(c+337,"picorv32_wrapper VERBOSE", false,-1, 31,0);
        tracep->declBit(c+328,"picorv32_wrapper clk", false,-1);
        tracep->declBit(c+329,"picorv32_wrapper resetn", false,-1);
        tracep->declBit(c+104,"picorv32_wrapper trap", false,-1);
        tracep->declBit(c+105,"picorv32_wrapper trace_valid", false,-1);
        tracep->declQuad(c+106,"picorv32_wrapper trace_data", false,-1, 35,0);
        tracep->declBit(c+95,"picorv32_wrapper tests_passed", false,-1);
        tracep->declBus(c+108,"picorv32_wrapper irq", false,-1, 31,0);
        tracep->declBus(c+35,"picorv32_wrapper count_cycle", false,-1, 15,0);
        tracep->declBit(c+109,"picorv32_wrapper mem_axi_awvalid", false,-1);
        tracep->declBit(c+309,"picorv32_wrapper mem_axi_awready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper mem_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+338,"picorv32_wrapper mem_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+111,"picorv32_wrapper mem_axi_wvalid", false,-1);
        tracep->declBit(c+310,"picorv32_wrapper mem_axi_wready", false,-1);
        tracep->declBus(c+112,"picorv32_wrapper mem_axi_wdata", false,-1, 31,0);
        tracep->declBus(c+113,"picorv32_wrapper mem_axi_wstrb", false,-1, 3,0);
        tracep->declBit(c+311,"picorv32_wrapper mem_axi_bvalid", false,-1);
        tracep->declBit(c+114,"picorv32_wrapper mem_axi_bready", false,-1);
        tracep->declBit(c+115,"picorv32_wrapper mem_axi_arvalid", false,-1);
        tracep->declBit(c+312,"picorv32_wrapper mem_axi_arready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper mem_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+116,"picorv32_wrapper mem_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+313,"picorv32_wrapper mem_axi_rvalid", false,-1);
        tracep->declBit(c+117,"picorv32_wrapper mem_axi_rready", false,-1);
        tracep->declBus(c+314,"picorv32_wrapper mem_axi_rdata", false,-1, 31,0);
        tracep->declArray(c+1,"picorv32_wrapper firmware_file", false,-1, 1023,0);
        tracep->declBus(c+36,"picorv32_wrapper cycle_counter", false,-1, 31,0);
        tracep->declBus(c+339,"picorv32_wrapper uut ENABLE_COUNTERS", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut ENABLE_COUNTERS64", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut ENABLE_REGS_16_31", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut ENABLE_REGS_DUALPORT", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut TWO_STAGE_SHIFT", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut BARREL_SHIFTER", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut TWO_CYCLE_COMPARE", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut TWO_CYCLE_ALU", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut COMPRESSED_ISA", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut CATCH_MISALIGN", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut CATCH_ILLINSN", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut ENABLE_PCPI", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut ENABLE_MUL", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut ENABLE_FAST_MUL", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut ENABLE_DIV", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut ENABLE_IRQ", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut ENABLE_IRQ_QREGS", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut ENABLE_IRQ_TIMER", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut ENABLE_TRACE", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut REGS_INIT_ZERO", false,-1, 0,0);
        tracep->declBus(c+341,"picorv32_wrapper uut MASKED_IRQ", false,-1, 31,0);
        tracep->declBus(c+342,"picorv32_wrapper uut LATCHED_IRQ", false,-1, 31,0);
        tracep->declBus(c+341,"picorv32_wrapper uut PROGADDR_RESET", false,-1, 31,0);
        tracep->declBus(c+343,"picorv32_wrapper uut PROGADDR_IRQ", false,-1, 31,0);
        tracep->declBus(c+342,"picorv32_wrapper uut STACKADDR", false,-1, 31,0);
        tracep->declBit(c+328,"picorv32_wrapper uut clk", false,-1);
        tracep->declBit(c+329,"picorv32_wrapper uut resetn", false,-1);
        tracep->declBit(c+104,"picorv32_wrapper uut trap", false,-1);
        tracep->declBit(c+109,"picorv32_wrapper uut mem_axi_awvalid", false,-1);
        tracep->declBit(c+309,"picorv32_wrapper uut mem_axi_awready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper uut mem_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+338,"picorv32_wrapper uut mem_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+111,"picorv32_wrapper uut mem_axi_wvalid", false,-1);
        tracep->declBit(c+310,"picorv32_wrapper uut mem_axi_wready", false,-1);
        tracep->declBus(c+112,"picorv32_wrapper uut mem_axi_wdata", false,-1, 31,0);
        tracep->declBus(c+113,"picorv32_wrapper uut mem_axi_wstrb", false,-1, 3,0);
        tracep->declBit(c+311,"picorv32_wrapper uut mem_axi_bvalid", false,-1);
        tracep->declBit(c+114,"picorv32_wrapper uut mem_axi_bready", false,-1);
        tracep->declBit(c+115,"picorv32_wrapper uut mem_axi_arvalid", false,-1);
        tracep->declBit(c+312,"picorv32_wrapper uut mem_axi_arready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper uut mem_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+116,"picorv32_wrapper uut mem_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+313,"picorv32_wrapper uut mem_axi_rvalid", false,-1);
        tracep->declBit(c+117,"picorv32_wrapper uut mem_axi_rready", false,-1);
        tracep->declBus(c+314,"picorv32_wrapper uut mem_axi_rdata", false,-1, 31,0);
        tracep->declBit(c+118,"picorv32_wrapper uut pcpi_valid", false,-1);
        tracep->declBus(c+119,"picorv32_wrapper uut pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+120,"picorv32_wrapper uut pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+121,"picorv32_wrapper uut pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+344,"picorv32_wrapper uut pcpi_wr", false,-1);
        tracep->declBus(c+345,"picorv32_wrapper uut pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+346,"picorv32_wrapper uut pcpi_wait", false,-1);
        tracep->declBit(c+347,"picorv32_wrapper uut pcpi_ready", false,-1);
        tracep->declBus(c+108,"picorv32_wrapper uut irq", false,-1, 31,0);
        tracep->declBus(c+122,"picorv32_wrapper uut eoi", false,-1, 31,0);
        tracep->declBit(c+105,"picorv32_wrapper uut trace_valid", false,-1);
        tracep->declQuad(c+106,"picorv32_wrapper uut trace_data", false,-1, 35,0);
        tracep->declBit(c+123,"picorv32_wrapper uut mem_valid", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper uut mem_addr", false,-1, 31,0);
        tracep->declBus(c+112,"picorv32_wrapper uut mem_wdata", false,-1, 31,0);
        tracep->declBus(c+113,"picorv32_wrapper uut mem_wstrb", false,-1, 3,0);
        tracep->declBit(c+124,"picorv32_wrapper uut mem_instr", false,-1);
        tracep->declBit(c+315,"picorv32_wrapper uut mem_ready", false,-1);
        tracep->declBus(c+314,"picorv32_wrapper uut mem_rdata", false,-1, 31,0);
        tracep->declBit(c+328,"picorv32_wrapper uut axi_adapter clk", false,-1);
        tracep->declBit(c+329,"picorv32_wrapper uut axi_adapter resetn", false,-1);
        tracep->declBit(c+109,"picorv32_wrapper uut axi_adapter mem_axi_awvalid", false,-1);
        tracep->declBit(c+309,"picorv32_wrapper uut axi_adapter mem_axi_awready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper uut axi_adapter mem_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+338,"picorv32_wrapper uut axi_adapter mem_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+111,"picorv32_wrapper uut axi_adapter mem_axi_wvalid", false,-1);
        tracep->declBit(c+310,"picorv32_wrapper uut axi_adapter mem_axi_wready", false,-1);
        tracep->declBus(c+112,"picorv32_wrapper uut axi_adapter mem_axi_wdata", false,-1, 31,0);
        tracep->declBus(c+113,"picorv32_wrapper uut axi_adapter mem_axi_wstrb", false,-1, 3,0);
        tracep->declBit(c+311,"picorv32_wrapper uut axi_adapter mem_axi_bvalid", false,-1);
        tracep->declBit(c+114,"picorv32_wrapper uut axi_adapter mem_axi_bready", false,-1);
        tracep->declBit(c+115,"picorv32_wrapper uut axi_adapter mem_axi_arvalid", false,-1);
        tracep->declBit(c+312,"picorv32_wrapper uut axi_adapter mem_axi_arready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper uut axi_adapter mem_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+116,"picorv32_wrapper uut axi_adapter mem_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+313,"picorv32_wrapper uut axi_adapter mem_axi_rvalid", false,-1);
        tracep->declBit(c+117,"picorv32_wrapper uut axi_adapter mem_axi_rready", false,-1);
        tracep->declBus(c+314,"picorv32_wrapper uut axi_adapter mem_axi_rdata", false,-1, 31,0);
        tracep->declBit(c+123,"picorv32_wrapper uut axi_adapter mem_valid", false,-1);
        tracep->declBit(c+124,"picorv32_wrapper uut axi_adapter mem_instr", false,-1);
        tracep->declBit(c+315,"picorv32_wrapper uut axi_adapter mem_ready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper uut axi_adapter mem_addr", false,-1, 31,0);
        tracep->declBus(c+112,"picorv32_wrapper uut axi_adapter mem_wdata", false,-1, 31,0);
        tracep->declBus(c+113,"picorv32_wrapper uut axi_adapter mem_wstrb", false,-1, 3,0);
        tracep->declBus(c+314,"picorv32_wrapper uut axi_adapter mem_rdata", false,-1, 31,0);
        tracep->declBit(c+37,"picorv32_wrapper uut axi_adapter ack_awvalid", false,-1);
        tracep->declBit(c+38,"picorv32_wrapper uut axi_adapter ack_arvalid", false,-1);
        tracep->declBit(c+39,"picorv32_wrapper uut axi_adapter ack_wvalid", false,-1);
        tracep->declBit(c+40,"picorv32_wrapper uut axi_adapter xfer_done", false,-1);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core ENABLE_COUNTERS", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core ENABLE_COUNTERS64", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core ENABLE_REGS_16_31", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core ENABLE_REGS_DUALPORT", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut picorv32_core LATCHED_MEM_RDATA", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core TWO_STAGE_SHIFT", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut picorv32_core BARREL_SHIFTER", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut picorv32_core TWO_CYCLE_COMPARE", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut picorv32_core TWO_CYCLE_ALU", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core COMPRESSED_ISA", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core CATCH_MISALIGN", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core CATCH_ILLINSN", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut picorv32_core ENABLE_PCPI", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core ENABLE_MUL", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut picorv32_core ENABLE_FAST_MUL", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core ENABLE_DIV", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core ENABLE_IRQ", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core ENABLE_IRQ_QREGS", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core ENABLE_IRQ_TIMER", false,-1, 0,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core ENABLE_TRACE", false,-1, 0,0);
        tracep->declBus(c+340,"picorv32_wrapper uut picorv32_core REGS_INIT_ZERO", false,-1, 0,0);
        tracep->declBus(c+341,"picorv32_wrapper uut picorv32_core MASKED_IRQ", false,-1, 31,0);
        tracep->declBus(c+342,"picorv32_wrapper uut picorv32_core LATCHED_IRQ", false,-1, 31,0);
        tracep->declBus(c+341,"picorv32_wrapper uut picorv32_core PROGADDR_RESET", false,-1, 31,0);
        tracep->declBus(c+343,"picorv32_wrapper uut picorv32_core PROGADDR_IRQ", false,-1, 31,0);
        tracep->declBus(c+342,"picorv32_wrapper uut picorv32_core STACKADDR", false,-1, 31,0);
        tracep->declBit(c+328,"picorv32_wrapper uut picorv32_core clk", false,-1);
        tracep->declBit(c+329,"picorv32_wrapper uut picorv32_core resetn", false,-1);
        tracep->declBit(c+104,"picorv32_wrapper uut picorv32_core trap", false,-1);
        tracep->declBit(c+123,"picorv32_wrapper uut picorv32_core mem_valid", false,-1);
        tracep->declBit(c+124,"picorv32_wrapper uut picorv32_core mem_instr", false,-1);
        tracep->declBit(c+315,"picorv32_wrapper uut picorv32_core mem_ready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper uut picorv32_core mem_addr", false,-1, 31,0);
        tracep->declBus(c+112,"picorv32_wrapper uut picorv32_core mem_wdata", false,-1, 31,0);
        tracep->declBus(c+113,"picorv32_wrapper uut picorv32_core mem_wstrb", false,-1, 3,0);
        tracep->declBus(c+314,"picorv32_wrapper uut picorv32_core mem_rdata", false,-1, 31,0);
        tracep->declBit(c+320,"picorv32_wrapper uut picorv32_core mem_la_read", false,-1);
        tracep->declBit(c+321,"picorv32_wrapper uut picorv32_core mem_la_write", false,-1);
        tracep->declBus(c+334,"picorv32_wrapper uut picorv32_core mem_la_addr", false,-1, 31,0);
        tracep->declBus(c+125,"picorv32_wrapper uut picorv32_core mem_la_wdata", false,-1, 31,0);
        tracep->declBus(c+126,"picorv32_wrapper uut picorv32_core mem_la_wstrb", false,-1, 3,0);
        tracep->declBit(c+118,"picorv32_wrapper uut picorv32_core pcpi_valid", false,-1);
        tracep->declBus(c+119,"picorv32_wrapper uut picorv32_core pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+120,"picorv32_wrapper uut picorv32_core pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+121,"picorv32_wrapper uut picorv32_core pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+344,"picorv32_wrapper uut picorv32_core pcpi_wr", false,-1);
        tracep->declBus(c+345,"picorv32_wrapper uut picorv32_core pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+346,"picorv32_wrapper uut picorv32_core pcpi_wait", false,-1);
        tracep->declBit(c+347,"picorv32_wrapper uut picorv32_core pcpi_ready", false,-1);
        tracep->declBus(c+108,"picorv32_wrapper uut picorv32_core irq", false,-1, 31,0);
        tracep->declBus(c+122,"picorv32_wrapper uut picorv32_core eoi", false,-1, 31,0);
        tracep->declBit(c+105,"picorv32_wrapper uut picorv32_core trace_valid", false,-1);
        tracep->declQuad(c+106,"picorv32_wrapper uut picorv32_core trace_data", false,-1, 35,0);
        tracep->declBus(c+348,"picorv32_wrapper uut picorv32_core irq_timer", false,-1, 31,0);
        tracep->declBus(c+349,"picorv32_wrapper uut picorv32_core irq_ebreak", false,-1, 31,0);
        tracep->declBus(c+350,"picorv32_wrapper uut picorv32_core irq_buserror", false,-1, 31,0);
        tracep->declBus(c+351,"picorv32_wrapper uut picorv32_core irqregs_offset", false,-1, 31,0);
        tracep->declBus(c+352,"picorv32_wrapper uut picorv32_core regfile_size", false,-1, 31,0);
        tracep->declBus(c+353,"picorv32_wrapper uut picorv32_core regindex_bits", false,-1, 31,0);
        tracep->declBus(c+339,"picorv32_wrapper uut picorv32_core WITH_PCPI", false,-1, 0,0);
        tracep->declQuad(c+354,"picorv32_wrapper uut picorv32_core TRACE_BRANCH", false,-1, 35,0);
        tracep->declQuad(c+356,"picorv32_wrapper uut picorv32_core TRACE_ADDR", false,-1, 35,0);
        tracep->declQuad(c+358,"picorv32_wrapper uut picorv32_core TRACE_IRQ", false,-1, 35,0);
        tracep->declQuad(c+127,"picorv32_wrapper uut picorv32_core count_cycle", false,-1, 63,0);
        tracep->declQuad(c+129,"picorv32_wrapper uut picorv32_core count_instr", false,-1, 63,0);
        tracep->declBus(c+131,"picorv32_wrapper uut picorv32_core reg_pc", false,-1, 31,0);
        tracep->declBus(c+132,"picorv32_wrapper uut picorv32_core reg_next_pc", false,-1, 31,0);
        tracep->declBus(c+120,"picorv32_wrapper uut picorv32_core reg_op1", false,-1, 31,0);
        tracep->declBus(c+121,"picorv32_wrapper uut picorv32_core reg_op2", false,-1, 31,0);
        tracep->declBus(c+133,"picorv32_wrapper uut picorv32_core reg_out", false,-1, 31,0);
        tracep->declBus(c+134,"picorv32_wrapper uut picorv32_core reg_sh", false,-1, 4,0);
        tracep->declBus(c+41,"picorv32_wrapper uut picorv32_core next_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+42,"picorv32_wrapper uut picorv32_core dbg_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+43,"picorv32_wrapper uut picorv32_core dbg_insn_addr", false,-1, 31,0);
        tracep->declBit(c+123,"picorv32_wrapper uut picorv32_core dbg_mem_valid", false,-1);
        tracep->declBit(c+124,"picorv32_wrapper uut picorv32_core dbg_mem_instr", false,-1);
        tracep->declBit(c+315,"picorv32_wrapper uut picorv32_core dbg_mem_ready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper uut picorv32_core dbg_mem_addr", false,-1, 31,0);
        tracep->declBus(c+112,"picorv32_wrapper uut picorv32_core dbg_mem_wdata", false,-1, 31,0);
        tracep->declBus(c+113,"picorv32_wrapper uut picorv32_core dbg_mem_wstrb", false,-1, 3,0);
        tracep->declBus(c+314,"picorv32_wrapper uut picorv32_core dbg_mem_rdata", false,-1, 31,0);
        tracep->declBus(c+135,"picorv32_wrapper uut picorv32_core next_pc", false,-1, 31,0);
        tracep->declBit(c+136,"picorv32_wrapper uut picorv32_core irq_delay", false,-1);
        tracep->declBit(c+137,"picorv32_wrapper uut picorv32_core irq_active", false,-1);
        tracep->declBus(c+138,"picorv32_wrapper uut picorv32_core irq_mask", false,-1, 31,0);
        tracep->declBus(c+139,"picorv32_wrapper uut picorv32_core irq_pending", false,-1, 31,0);
        tracep->declBus(c+140,"picorv32_wrapper uut picorv32_core timer", false,-1, 31,0);
        tracep->declBus(c+360,"picorv32_wrapper uut picorv32_core i", false,-1, 31,0);
        tracep->declBit(c+44,"picorv32_wrapper uut picorv32_core pcpi_mul_wr", false,-1);
        tracep->declBus(c+45,"picorv32_wrapper uut picorv32_core pcpi_mul_rd", false,-1, 31,0);
        tracep->declBit(c+141,"picorv32_wrapper uut picorv32_core pcpi_mul_wait", false,-1);
        tracep->declBit(c+46,"picorv32_wrapper uut picorv32_core pcpi_mul_ready", false,-1);
        tracep->declBit(c+142,"picorv32_wrapper uut picorv32_core pcpi_div_wr", false,-1);
        tracep->declBus(c+143,"picorv32_wrapper uut picorv32_core pcpi_div_rd", false,-1, 31,0);
        tracep->declBit(c+144,"picorv32_wrapper uut picorv32_core pcpi_div_wait", false,-1);
        tracep->declBit(c+145,"picorv32_wrapper uut picorv32_core pcpi_div_ready", false,-1);
        tracep->declBit(c+146,"picorv32_wrapper uut picorv32_core pcpi_int_wr", false,-1);
        tracep->declBus(c+147,"picorv32_wrapper uut picorv32_core pcpi_int_rd", false,-1, 31,0);
        tracep->declBit(c+148,"picorv32_wrapper uut picorv32_core pcpi_int_wait", false,-1);
        tracep->declBit(c+149,"picorv32_wrapper uut picorv32_core pcpi_int_ready", false,-1);
        tracep->declBus(c+150,"picorv32_wrapper uut picorv32_core mem_state", false,-1, 1,0);
        tracep->declBus(c+151,"picorv32_wrapper uut picorv32_core mem_wordsize", false,-1, 1,0);
        tracep->declBus(c+316,"picorv32_wrapper uut picorv32_core mem_rdata_word", false,-1, 31,0);
        tracep->declBus(c+152,"picorv32_wrapper uut picorv32_core mem_rdata_q", false,-1, 31,0);
        tracep->declBit(c+153,"picorv32_wrapper uut picorv32_core mem_do_prefetch", false,-1);
        tracep->declBit(c+154,"picorv32_wrapper uut picorv32_core mem_do_rinst", false,-1);
        tracep->declBit(c+155,"picorv32_wrapper uut picorv32_core mem_do_rdata", false,-1);
        tracep->declBit(c+156,"picorv32_wrapper uut picorv32_core mem_do_wdata", false,-1);
        tracep->declBit(c+322,"picorv32_wrapper uut picorv32_core mem_xfer", false,-1);
        tracep->declBit(c+157,"picorv32_wrapper uut picorv32_core mem_la_secondword", false,-1);
        tracep->declBit(c+158,"picorv32_wrapper uut picorv32_core mem_la_firstword_reg", false,-1);
        tracep->declBit(c+159,"picorv32_wrapper uut picorv32_core last_mem_valid", false,-1);
        tracep->declBit(c+160,"picorv32_wrapper uut picorv32_core mem_la_firstword", false,-1);
        tracep->declBit(c+335,"picorv32_wrapper uut picorv32_core mem_la_firstword_xfer", false,-1);
        tracep->declBit(c+161,"picorv32_wrapper uut picorv32_core prefetched_high_word", false,-1);
        tracep->declBit(c+323,"picorv32_wrapper uut picorv32_core clear_prefetched_high_word", false,-1);
        tracep->declBus(c+162,"picorv32_wrapper uut picorv32_core mem_16bit_buffer", false,-1, 15,0);
        tracep->declBus(c+324,"picorv32_wrapper uut picorv32_core mem_rdata_latched_noshuffle", false,-1, 31,0);
        tracep->declBus(c+325,"picorv32_wrapper uut picorv32_core mem_rdata_latched", false,-1, 31,0);
        tracep->declBit(c+326,"picorv32_wrapper uut picorv32_core mem_la_use_prefetched_high_word", false,-1);
        tracep->declBit(c+163,"picorv32_wrapper uut picorv32_core mem_busy", false,-1);
        tracep->declBit(c+327,"picorv32_wrapper uut picorv32_core mem_done", false,-1);
        tracep->declBit(c+164,"picorv32_wrapper uut picorv32_core instr_lui", false,-1);
        tracep->declBit(c+165,"picorv32_wrapper uut picorv32_core instr_auipc", false,-1);
        tracep->declBit(c+166,"picorv32_wrapper uut picorv32_core instr_jal", false,-1);
        tracep->declBit(c+167,"picorv32_wrapper uut picorv32_core instr_jalr", false,-1);
        tracep->declBit(c+168,"picorv32_wrapper uut picorv32_core instr_beq", false,-1);
        tracep->declBit(c+169,"picorv32_wrapper uut picorv32_core instr_bne", false,-1);
        tracep->declBit(c+170,"picorv32_wrapper uut picorv32_core instr_blt", false,-1);
        tracep->declBit(c+171,"picorv32_wrapper uut picorv32_core instr_bge", false,-1);
        tracep->declBit(c+172,"picorv32_wrapper uut picorv32_core instr_bltu", false,-1);
        tracep->declBit(c+173,"picorv32_wrapper uut picorv32_core instr_bgeu", false,-1);
        tracep->declBit(c+174,"picorv32_wrapper uut picorv32_core instr_lb", false,-1);
        tracep->declBit(c+175,"picorv32_wrapper uut picorv32_core instr_lh", false,-1);
        tracep->declBit(c+176,"picorv32_wrapper uut picorv32_core instr_lw", false,-1);
        tracep->declBit(c+177,"picorv32_wrapper uut picorv32_core instr_lbu", false,-1);
        tracep->declBit(c+178,"picorv32_wrapper uut picorv32_core instr_lhu", false,-1);
        tracep->declBit(c+179,"picorv32_wrapper uut picorv32_core instr_sb", false,-1);
        tracep->declBit(c+180,"picorv32_wrapper uut picorv32_core instr_sh", false,-1);
        tracep->declBit(c+181,"picorv32_wrapper uut picorv32_core instr_sw", false,-1);
        tracep->declBit(c+182,"picorv32_wrapper uut picorv32_core instr_addi", false,-1);
        tracep->declBit(c+183,"picorv32_wrapper uut picorv32_core instr_slti", false,-1);
        tracep->declBit(c+184,"picorv32_wrapper uut picorv32_core instr_sltiu", false,-1);
        tracep->declBit(c+185,"picorv32_wrapper uut picorv32_core instr_xori", false,-1);
        tracep->declBit(c+186,"picorv32_wrapper uut picorv32_core instr_ori", false,-1);
        tracep->declBit(c+187,"picorv32_wrapper uut picorv32_core instr_andi", false,-1);
        tracep->declBit(c+188,"picorv32_wrapper uut picorv32_core instr_slli", false,-1);
        tracep->declBit(c+189,"picorv32_wrapper uut picorv32_core instr_srli", false,-1);
        tracep->declBit(c+190,"picorv32_wrapper uut picorv32_core instr_srai", false,-1);
        tracep->declBit(c+191,"picorv32_wrapper uut picorv32_core instr_add", false,-1);
        tracep->declBit(c+192,"picorv32_wrapper uut picorv32_core instr_sub", false,-1);
        tracep->declBit(c+193,"picorv32_wrapper uut picorv32_core instr_sll", false,-1);
        tracep->declBit(c+194,"picorv32_wrapper uut picorv32_core instr_slt", false,-1);
        tracep->declBit(c+195,"picorv32_wrapper uut picorv32_core instr_sltu", false,-1);
        tracep->declBit(c+196,"picorv32_wrapper uut picorv32_core instr_xor", false,-1);
        tracep->declBit(c+197,"picorv32_wrapper uut picorv32_core instr_srl", false,-1);
        tracep->declBit(c+198,"picorv32_wrapper uut picorv32_core instr_sra", false,-1);
        tracep->declBit(c+199,"picorv32_wrapper uut picorv32_core instr_or", false,-1);
        tracep->declBit(c+200,"picorv32_wrapper uut picorv32_core instr_and", false,-1);
        tracep->declBit(c+201,"picorv32_wrapper uut picorv32_core instr_rdcycle", false,-1);
        tracep->declBit(c+202,"picorv32_wrapper uut picorv32_core instr_rdcycleh", false,-1);
        tracep->declBit(c+203,"picorv32_wrapper uut picorv32_core instr_rdinstr", false,-1);
        tracep->declBit(c+204,"picorv32_wrapper uut picorv32_core instr_rdinstrh", false,-1);
        tracep->declBit(c+205,"picorv32_wrapper uut picorv32_core instr_ecall_ebreak", false,-1);
        tracep->declBit(c+206,"picorv32_wrapper uut picorv32_core instr_getq", false,-1);
        tracep->declBit(c+207,"picorv32_wrapper uut picorv32_core instr_setq", false,-1);
        tracep->declBit(c+208,"picorv32_wrapper uut picorv32_core instr_retirq", false,-1);
        tracep->declBit(c+209,"picorv32_wrapper uut picorv32_core instr_maskirq", false,-1);
        tracep->declBit(c+210,"picorv32_wrapper uut picorv32_core instr_waitirq", false,-1);
        tracep->declBit(c+211,"picorv32_wrapper uut picorv32_core instr_timer", false,-1);
        tracep->declBit(c+212,"picorv32_wrapper uut picorv32_core instr_trap", false,-1);
        tracep->declBus(c+213,"picorv32_wrapper uut picorv32_core decoded_rd", false,-1, 5,0);
        tracep->declBus(c+47,"picorv32_wrapper uut picorv32_core decoded_rs1", false,-1, 5,0);
        tracep->declBus(c+214,"picorv32_wrapper uut picorv32_core decoded_rs2", false,-1, 5,0);
        tracep->declBus(c+215,"picorv32_wrapper uut picorv32_core decoded_imm", false,-1, 31,0);
        tracep->declBus(c+216,"picorv32_wrapper uut picorv32_core decoded_imm_j", false,-1, 31,0);
        tracep->declBit(c+217,"picorv32_wrapper uut picorv32_core decoder_trigger", false,-1);
        tracep->declBit(c+218,"picorv32_wrapper uut picorv32_core decoder_trigger_q", false,-1);
        tracep->declBit(c+219,"picorv32_wrapper uut picorv32_core decoder_pseudo_trigger", false,-1);
        tracep->declBit(c+48,"picorv32_wrapper uut picorv32_core decoder_pseudo_trigger_q", false,-1);
        tracep->declBit(c+220,"picorv32_wrapper uut picorv32_core compressed_instr", false,-1);
        tracep->declBit(c+221,"picorv32_wrapper uut picorv32_core is_lui_auipc_jal", false,-1);
        tracep->declBit(c+222,"picorv32_wrapper uut picorv32_core is_lb_lh_lw_lbu_lhu", false,-1);
        tracep->declBit(c+223,"picorv32_wrapper uut picorv32_core is_slli_srli_srai", false,-1);
        tracep->declBit(c+224,"picorv32_wrapper uut picorv32_core is_jalr_addi_slti_sltiu_xori_ori_andi", false,-1);
        tracep->declBit(c+225,"picorv32_wrapper uut picorv32_core is_sb_sh_sw", false,-1);
        tracep->declBit(c+226,"picorv32_wrapper uut picorv32_core is_sll_srl_sra", false,-1);
        tracep->declBit(c+227,"picorv32_wrapper uut picorv32_core is_lui_auipc_jal_jalr_addi_add_sub", false,-1);
        tracep->declBit(c+228,"picorv32_wrapper uut picorv32_core is_slti_blt_slt", false,-1);
        tracep->declBit(c+229,"picorv32_wrapper uut picorv32_core is_sltiu_bltu_sltu", false,-1);
        tracep->declBit(c+230,"picorv32_wrapper uut picorv32_core is_beq_bne_blt_bge_bltu_bgeu", false,-1);
        tracep->declBit(c+231,"picorv32_wrapper uut picorv32_core is_lbu_lhu_lw", false,-1);
        tracep->declBit(c+232,"picorv32_wrapper uut picorv32_core is_alu_reg_imm", false,-1);
        tracep->declBit(c+233,"picorv32_wrapper uut picorv32_core is_alu_reg_reg", false,-1);
        tracep->declBit(c+234,"picorv32_wrapper uut picorv32_core is_compare", false,-1);
        tracep->declBit(c+235,"picorv32_wrapper uut picorv32_core is_rdcycle_rdcycleh_rdinstr_rdinstrh", false,-1);
        tracep->declQuad(c+236,"picorv32_wrapper uut picorv32_core new_ascii_instr", false,-1, 63,0);
        tracep->declQuad(c+238,"picorv32_wrapper uut picorv32_core dbg_ascii_instr", false,-1, 63,0);
        tracep->declBus(c+240,"picorv32_wrapper uut picorv32_core dbg_insn_imm", false,-1, 31,0);
        tracep->declBus(c+49,"picorv32_wrapper uut picorv32_core dbg_insn_rs1", false,-1, 4,0);
        tracep->declBus(c+241,"picorv32_wrapper uut picorv32_core dbg_insn_rs2", false,-1, 4,0);
        tracep->declBus(c+242,"picorv32_wrapper uut picorv32_core dbg_insn_rd", false,-1, 4,0);
        tracep->declBus(c+243,"picorv32_wrapper uut picorv32_core dbg_rs1val", false,-1, 31,0);
        tracep->declBus(c+244,"picorv32_wrapper uut picorv32_core dbg_rs2val", false,-1, 31,0);
        tracep->declBit(c+245,"picorv32_wrapper uut picorv32_core dbg_rs1val_valid", false,-1);
        tracep->declBit(c+246,"picorv32_wrapper uut picorv32_core dbg_rs2val_valid", false,-1);
        tracep->declQuad(c+50,"picorv32_wrapper uut picorv32_core q_ascii_instr", false,-1, 63,0);
        tracep->declBus(c+52,"picorv32_wrapper uut picorv32_core q_insn_imm", false,-1, 31,0);
        tracep->declBus(c+53,"picorv32_wrapper uut picorv32_core q_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+54,"picorv32_wrapper uut picorv32_core q_insn_rs1", false,-1, 4,0);
        tracep->declBus(c+55,"picorv32_wrapper uut picorv32_core q_insn_rs2", false,-1, 4,0);
        tracep->declBus(c+56,"picorv32_wrapper uut picorv32_core q_insn_rd", false,-1, 4,0);
        tracep->declBit(c+57,"picorv32_wrapper uut picorv32_core dbg_next", false,-1);
        tracep->declBit(c+247,"picorv32_wrapper uut picorv32_core launch_next_insn", false,-1);
        tracep->declBit(c+58,"picorv32_wrapper uut picorv32_core dbg_valid_insn", false,-1);
        tracep->declQuad(c+59,"picorv32_wrapper uut picorv32_core cached_ascii_instr", false,-1, 63,0);
        tracep->declBus(c+61,"picorv32_wrapper uut picorv32_core cached_insn_imm", false,-1, 31,0);
        tracep->declBus(c+62,"picorv32_wrapper uut picorv32_core cached_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+63,"picorv32_wrapper uut picorv32_core cached_insn_rs1", false,-1, 4,0);
        tracep->declBus(c+64,"picorv32_wrapper uut picorv32_core cached_insn_rs2", false,-1, 4,0);
        tracep->declBus(c+65,"picorv32_wrapper uut picorv32_core cached_insn_rd", false,-1, 4,0);
        tracep->declBus(c+361,"picorv32_wrapper uut picorv32_core cpu_state_trap", false,-1, 7,0);
        tracep->declBus(c+362,"picorv32_wrapper uut picorv32_core cpu_state_fetch", false,-1, 7,0);
        tracep->declBus(c+363,"picorv32_wrapper uut picorv32_core cpu_state_ld_rs1", false,-1, 7,0);
        tracep->declBus(c+364,"picorv32_wrapper uut picorv32_core cpu_state_ld_rs2", false,-1, 7,0);
        tracep->declBus(c+365,"picorv32_wrapper uut picorv32_core cpu_state_exec", false,-1, 7,0);
        tracep->declBus(c+366,"picorv32_wrapper uut picorv32_core cpu_state_shift", false,-1, 7,0);
        tracep->declBus(c+367,"picorv32_wrapper uut picorv32_core cpu_state_stmem", false,-1, 7,0);
        tracep->declBus(c+368,"picorv32_wrapper uut picorv32_core cpu_state_ldmem", false,-1, 7,0);
        tracep->declBus(c+248,"picorv32_wrapper uut picorv32_core cpu_state", false,-1, 7,0);
        tracep->declBus(c+249,"picorv32_wrapper uut picorv32_core irq_state", false,-1, 1,0);
        tracep->declArray(c+250,"picorv32_wrapper uut picorv32_core dbg_ascii_state", false,-1, 127,0);
        tracep->declBit(c+254,"picorv32_wrapper uut picorv32_core set_mem_do_rinst", false,-1);
        tracep->declBit(c+255,"picorv32_wrapper uut picorv32_core set_mem_do_rdata", false,-1);
        tracep->declBit(c+256,"picorv32_wrapper uut picorv32_core set_mem_do_wdata", false,-1);
        tracep->declBit(c+257,"picorv32_wrapper uut picorv32_core latched_store", false,-1);
        tracep->declBit(c+258,"picorv32_wrapper uut picorv32_core latched_stalu", false,-1);
        tracep->declBit(c+259,"picorv32_wrapper uut picorv32_core latched_branch", false,-1);
        tracep->declBit(c+260,"picorv32_wrapper uut picorv32_core latched_compr", false,-1);
        tracep->declBit(c+261,"picorv32_wrapper uut picorv32_core latched_trace", false,-1);
        tracep->declBit(c+262,"picorv32_wrapper uut picorv32_core latched_is_lu", false,-1);
        tracep->declBit(c+263,"picorv32_wrapper uut picorv32_core latched_is_lh", false,-1);
        tracep->declBit(c+264,"picorv32_wrapper uut picorv32_core latched_is_lb", false,-1);
        tracep->declBus(c+265,"picorv32_wrapper uut picorv32_core latched_rd", false,-1, 5,0);
        tracep->declBus(c+266,"picorv32_wrapper uut picorv32_core current_pc", false,-1, 31,0);
        tracep->declBus(c+267,"picorv32_wrapper uut picorv32_core pcpi_timeout_counter", false,-1, 3,0);
        tracep->declBit(c+268,"picorv32_wrapper uut picorv32_core pcpi_timeout", false,-1);
        tracep->declBus(c+269,"picorv32_wrapper uut picorv32_core next_irq_pending", false,-1, 31,0);
        tracep->declBit(c+270,"picorv32_wrapper uut picorv32_core do_waitirq", false,-1);
        tracep->declBus(c+271,"picorv32_wrapper uut picorv32_core alu_out", false,-1, 31,0);
        tracep->declBus(c+272,"picorv32_wrapper uut picorv32_core alu_out_q", false,-1, 31,0);
        tracep->declBit(c+273,"picorv32_wrapper uut picorv32_core alu_out_0", false,-1);
        tracep->declBit(c+66,"picorv32_wrapper uut picorv32_core alu_out_0_q", false,-1);
        tracep->declBit(c+67,"picorv32_wrapper uut picorv32_core alu_wait", false,-1);
        tracep->declBit(c+68,"picorv32_wrapper uut picorv32_core alu_wait_2", false,-1);
        tracep->declBus(c+274,"picorv32_wrapper uut picorv32_core alu_add_sub", false,-1, 31,0);
        tracep->declBus(c+275,"picorv32_wrapper uut picorv32_core alu_shl", false,-1, 31,0);
        tracep->declBus(c+276,"picorv32_wrapper uut picorv32_core alu_shr", false,-1, 31,0);
        tracep->declBit(c+277,"picorv32_wrapper uut picorv32_core alu_eq", false,-1);
        tracep->declBit(c+278,"picorv32_wrapper uut picorv32_core alu_ltu", false,-1);
        tracep->declBit(c+279,"picorv32_wrapper uut picorv32_core alu_lts", false,-1);
        tracep->declBit(c+69,"picorv32_wrapper uut picorv32_core clear_prefetched_high_word_q", false,-1);
        tracep->declBit(c+280,"picorv32_wrapper uut picorv32_core cpuregs_write", false,-1);
        tracep->declBus(c+281,"picorv32_wrapper uut picorv32_core cpuregs_wrdata", false,-1, 31,0);
        tracep->declBus(c+282,"picorv32_wrapper uut picorv32_core cpuregs_rs1", false,-1, 31,0);
        tracep->declBus(c+283,"picorv32_wrapper uut picorv32_core cpuregs_rs2", false,-1, 31,0);
        tracep->declBus(c+369,"picorv32_wrapper uut picorv32_core decoded_rs", false,-1, 5,0);
        tracep->declBus(c+370,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul STEPS_AT_ONCE", false,-1, 31,0);
        tracep->declBus(c+371,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul CARRY_CHAIN", false,-1, 31,0);
        tracep->declBit(c+328,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul clk", false,-1);
        tracep->declBit(c+329,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul resetn", false,-1);
        tracep->declBit(c+118,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul pcpi_valid", false,-1);
        tracep->declBus(c+119,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+120,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+121,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+44,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul pcpi_wr", false,-1);
        tracep->declBus(c+45,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+141,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul pcpi_wait", false,-1);
        tracep->declBit(c+46,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul pcpi_ready", false,-1);
        tracep->declBit(c+284,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul instr_mul", false,-1);
        tracep->declBit(c+285,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul instr_mulh", false,-1);
        tracep->declBit(c+286,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul instr_mulhsu", false,-1);
        tracep->declBit(c+287,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul instr_mulhu", false,-1);
        tracep->declBit(c+288,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul instr_any_mul", false,-1);
        tracep->declBit(c+289,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul instr_any_mulh", false,-1);
        tracep->declBit(c+290,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul instr_rs1_signed", false,-1);
        tracep->declBit(c+285,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul instr_rs2_signed", false,-1);
        tracep->declBit(c+70,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul pcpi_wait_q", false,-1);
        tracep->declBit(c+336,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul mul_start", false,-1);
        tracep->declQuad(c+71,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul rs1", false,-1, 63,0);
        tracep->declQuad(c+73,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul rs2", false,-1, 63,0);
        tracep->declQuad(c+75,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul rd", false,-1, 63,0);
        tracep->declQuad(c+77,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul rdx", false,-1, 63,0);
        tracep->declQuad(c+79,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul next_rs1", false,-1, 63,0);
        tracep->declQuad(c+81,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul next_rs2", false,-1, 63,0);
        tracep->declQuad(c+83,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul this_rs2", false,-1, 63,0);
        tracep->declQuad(c+85,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul next_rd", false,-1, 63,0);
        tracep->declQuad(c+87,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul next_rdx", false,-1, 63,0);
        tracep->declQuad(c+89,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul next_rdt", false,-1, 63,0);
        tracep->declBus(c+91,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul mul_counter", false,-1, 6,0);
        tracep->declBit(c+92,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul mul_waiting", false,-1);
        tracep->declBit(c+93,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul mul_finish", false,-1);
        tracep->declBus(c+349,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul i", false,-1, 31,0);
        tracep->declBus(c+372,"picorv32_wrapper uut picorv32_core genblk2 pcpi_mul j", false,-1, 31,0);
        tracep->declBit(c+328,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div clk", false,-1);
        tracep->declBit(c+329,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div resetn", false,-1);
        tracep->declBit(c+118,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div pcpi_valid", false,-1);
        tracep->declBus(c+119,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+120,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+121,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+142,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div pcpi_wr", false,-1);
        tracep->declBus(c+143,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+144,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div pcpi_wait", false,-1);
        tracep->declBit(c+145,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div pcpi_ready", false,-1);
        tracep->declBit(c+291,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div instr_div", false,-1);
        tracep->declBit(c+292,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div instr_divu", false,-1);
        tracep->declBit(c+293,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div instr_rem", false,-1);
        tracep->declBit(c+294,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div instr_remu", false,-1);
        tracep->declBit(c+295,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div instr_any_div_rem", false,-1);
        tracep->declBit(c+94,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div pcpi_wait_q", false,-1);
        tracep->declBit(c+296,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div start", false,-1);
        tracep->declBus(c+297,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div dividend", false,-1, 31,0);
        tracep->declQuad(c+298,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div divisor", false,-1, 62,0);
        tracep->declBus(c+300,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div quotient", false,-1, 31,0);
        tracep->declBus(c+301,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div quotient_msk", false,-1, 31,0);
        tracep->declBit(c+302,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div running", false,-1);
        tracep->declBit(c+303,"picorv32_wrapper uut picorv32_core genblk4 pcpi_div outsign", false,-1);
        tracep->declBus(c+337,"picorv32_wrapper mem AXI_TEST", false,-1, 31,0);
        tracep->declBus(c+337,"picorv32_wrapper mem VERBOSE", false,-1, 31,0);
        tracep->declBit(c+328,"picorv32_wrapper mem clk", false,-1);
        tracep->declBit(c+109,"picorv32_wrapper mem mem_axi_awvalid", false,-1);
        tracep->declBit(c+309,"picorv32_wrapper mem mem_axi_awready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper mem mem_axi_awaddr", false,-1, 31,0);
        tracep->declBus(c+338,"picorv32_wrapper mem mem_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+111,"picorv32_wrapper mem mem_axi_wvalid", false,-1);
        tracep->declBit(c+310,"picorv32_wrapper mem mem_axi_wready", false,-1);
        tracep->declBus(c+112,"picorv32_wrapper mem mem_axi_wdata", false,-1, 31,0);
        tracep->declBus(c+113,"picorv32_wrapper mem mem_axi_wstrb", false,-1, 3,0);
        tracep->declBit(c+311,"picorv32_wrapper mem mem_axi_bvalid", false,-1);
        tracep->declBit(c+114,"picorv32_wrapper mem mem_axi_bready", false,-1);
        tracep->declBit(c+115,"picorv32_wrapper mem mem_axi_arvalid", false,-1);
        tracep->declBit(c+312,"picorv32_wrapper mem mem_axi_arready", false,-1);
        tracep->declBus(c+110,"picorv32_wrapper mem mem_axi_araddr", false,-1, 31,0);
        tracep->declBus(c+116,"picorv32_wrapper mem mem_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+313,"picorv32_wrapper mem mem_axi_rvalid", false,-1);
        tracep->declBit(c+117,"picorv32_wrapper mem mem_axi_rready", false,-1);
        tracep->declBus(c+314,"picorv32_wrapper mem mem_axi_rdata", false,-1, 31,0);
        tracep->declBit(c+95,"picorv32_wrapper mem tests_passed", false,-1);
        tracep->declBit(c+33,"picorv32_wrapper mem verbose", false,-1);
        tracep->declBit(c+34,"picorv32_wrapper mem axi_test", false,-1);
        tracep->declQuad(c+304,"picorv32_wrapper mem xorshift64_state", false,-1, 63,0);
        tracep->declBus(c+306,"picorv32_wrapper mem fast_axi_transaction", false,-1, 2,0);
        tracep->declBus(c+307,"picorv32_wrapper mem async_axi_transaction", false,-1, 4,0);
        tracep->declBus(c+308,"picorv32_wrapper mem delay_axi_transaction", false,-1, 4,0);
        tracep->declBit(c+96,"picorv32_wrapper mem latched_raddr_en", false,-1);
        tracep->declBit(c+97,"picorv32_wrapper mem latched_waddr_en", false,-1);
        tracep->declBit(c+98,"picorv32_wrapper mem latched_wdata_en", false,-1);
        tracep->declBit(c+317,"picorv32_wrapper mem fast_raddr", false,-1);
        tracep->declBit(c+318,"picorv32_wrapper mem fast_waddr", false,-1);
        tracep->declBit(c+319,"picorv32_wrapper mem fast_wdata", false,-1);
        tracep->declBus(c+99,"picorv32_wrapper mem latched_raddr", false,-1, 31,0);
        tracep->declBus(c+100,"picorv32_wrapper mem latched_waddr", false,-1, 31,0);
        tracep->declBus(c+101,"picorv32_wrapper mem latched_wdata", false,-1, 31,0);
        tracep->declBus(c+102,"picorv32_wrapper mem latched_wstrb", false,-1, 3,0);
        tracep->declBit(c+103,"picorv32_wrapper mem latched_rinsn", false,-1);
    }
}

void Vpicorv32_wrapper::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vpicorv32_wrapper::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = static_cast<Vpicorv32_wrapper__Syms*>(userp);
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vpicorv32_wrapper::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = static_cast<Vpicorv32_wrapper__Syms*>(userp);
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullWData(oldp+1,(vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file),1024);
        tracep->fullBit(oldp+33,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose));
        tracep->fullBit(oldp+34,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__axi_test));
        tracep->fullSData(oldp+35,(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle),16);
        tracep->fullIData(oldp+36,(vlSymsp->TOP__picorv32_wrapper.__PVT__cycle_counter),32);
        tracep->fullBit(oldp+37,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid));
        tracep->fullBit(oldp+38,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid));
        tracep->fullBit(oldp+39,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid));
        tracep->fullBit(oldp+40,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__xfer_done));
        tracep->fullIData(oldp+41,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode),32);
        tracep->fullIData(oldp+42,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode),32);
        tracep->fullIData(oldp+43,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr),32);
        tracep->fullBit(oldp+44,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr));
        tracep->fullIData(oldp+45,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd),32);
        tracep->fullBit(oldp+46,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready));
        tracep->fullCData(oldp+47,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1),6);
        tracep->fullBit(oldp+48,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q));
        tracep->fullCData(oldp+49,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1),5);
        tracep->fullQData(oldp+50,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr),64);
        tracep->fullIData(oldp+52,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm),32);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode),32);
        tracep->fullCData(oldp+54,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1),5);
        tracep->fullCData(oldp+55,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2),5);
        tracep->fullCData(oldp+56,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd),5);
        tracep->fullBit(oldp+57,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next));
        tracep->fullBit(oldp+58,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn));
        tracep->fullQData(oldp+59,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr),64);
        tracep->fullIData(oldp+61,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm),32);
        tracep->fullIData(oldp+62,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode),32);
        tracep->fullCData(oldp+63,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1),5);
        tracep->fullCData(oldp+64,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2),5);
        tracep->fullCData(oldp+65,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd),5);
        tracep->fullBit(oldp+66,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q));
        tracep->fullBit(oldp+67,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait));
        tracep->fullBit(oldp+68,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2));
        tracep->fullBit(oldp+69,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q));
        tracep->fullBit(oldp+70,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q));
        tracep->fullQData(oldp+71,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__rs1),64);
        tracep->fullQData(oldp+73,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__rs2),64);
        tracep->fullQData(oldp+75,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__rd),64);
        tracep->fullQData(oldp+77,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__rdx),64);
        tracep->fullQData(oldp+79,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1),64);
        tracep->fullQData(oldp+81,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2),64);
        tracep->fullQData(oldp+83,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2),64);
        tracep->fullQData(oldp+85,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd),64);
        tracep->fullQData(oldp+87,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx),64);
        tracep->fullQData(oldp+89,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt),64);
        tracep->fullCData(oldp+91,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter),7);
        tracep->fullBit(oldp+92,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting));
        tracep->fullBit(oldp+93,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish));
        tracep->fullBit(oldp+94,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__pcpi_wait_q));
        tracep->fullBit(oldp+95,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__tests_passed));
        tracep->fullBit(oldp+96,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en));
        tracep->fullBit(oldp+97,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en));
        tracep->fullBit(oldp+98,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en));
        tracep->fullIData(oldp+99,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr),32);
        tracep->fullIData(oldp+100,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr),32);
        tracep->fullIData(oldp+101,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata),32);
        tracep->fullCData(oldp+102,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb),4);
        tracep->fullBit(oldp+103,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn));
        tracep->fullBit(oldp+104,(vlSymsp->TOP__picorv32_wrapper.trap));
        tracep->fullBit(oldp+105,(vlSymsp->TOP__picorv32_wrapper.trace_valid));
        tracep->fullQData(oldp+106,(vlSymsp->TOP__picorv32_wrapper.trace_data),36);
        tracep->fullIData(oldp+108,(vlSymsp->TOP__picorv32_wrapper.__PVT__irq),32);
        tracep->fullBit(oldp+109,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid));
        tracep->fullIData(oldp+110,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr),32);
        tracep->fullBit(oldp+111,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid));
        tracep->fullIData(oldp+112,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata),32);
        tracep->fullCData(oldp+113,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb),4);
        tracep->fullBit(oldp+114,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                                   & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb)))));
        tracep->fullBit(oldp+115,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid));
        tracep->fullCData(oldp+116,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                      ? 4U : 0U)),3);
        tracep->fullBit(oldp+117,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                                   & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb)))))));
        tracep->fullBit(oldp+118,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid));
        tracep->fullIData(oldp+119,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn),32);
        tracep->fullIData(oldp+120,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1),32);
        tracep->fullIData(oldp+121,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2),32);
        tracep->fullIData(oldp+122,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__eoi),32);
        tracep->fullBit(oldp+123,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid));
        tracep->fullBit(oldp+124,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr));
        tracep->fullIData(oldp+125,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata),32);
        tracep->fullCData(oldp+126,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb),4);
        tracep->fullQData(oldp+127,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle),64);
        tracep->fullQData(oldp+129,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr),64);
        tracep->fullIData(oldp+131,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc),32);
        tracep->fullIData(oldp+132,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc),32);
        tracep->fullIData(oldp+133,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out),32);
        tracep->fullCData(oldp+134,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh),5);
        tracep->fullIData(oldp+135,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc),32);
        tracep->fullBit(oldp+136,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active));
        tracep->fullIData(oldp+138,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask),32);
        tracep->fullIData(oldp+139,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending),32);
        tracep->fullIData(oldp+140,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer),32);
        tracep->fullBit(oldp+141,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait));
        tracep->fullBit(oldp+142,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr));
        tracep->fullIData(oldp+143,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd),32);
        tracep->fullBit(oldp+144,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait));
        tracep->fullBit(oldp+145,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready));
        tracep->fullBit(oldp+146,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr));
        tracep->fullIData(oldp+147,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd),32);
        tracep->fullBit(oldp+148,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                                   | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait))));
        tracep->fullBit(oldp+149,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready));
        tracep->fullCData(oldp+150,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state),2);
        tracep->fullCData(oldp+151,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize),2);
        tracep->fullIData(oldp+152,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q),32);
        tracep->fullBit(oldp+153,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch));
        tracep->fullBit(oldp+154,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
        tracep->fullBit(oldp+155,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata));
        tracep->fullBit(oldp+156,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata));
        tracep->fullBit(oldp+157,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword));
        tracep->fullBit(oldp+158,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg));
        tracep->fullBit(oldp+159,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid));
        tracep->fullBit(oldp+160,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword));
        tracep->fullBit(oldp+161,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word));
        tracep->fullSData(oldp+162,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer),16);
        tracep->fullBit(oldp+163,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                   | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                      | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                         | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))))));
        tracep->fullBit(oldp+164,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui));
        tracep->fullBit(oldp+165,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc));
        tracep->fullBit(oldp+166,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal));
        tracep->fullBit(oldp+167,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr));
        tracep->fullBit(oldp+168,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq));
        tracep->fullBit(oldp+169,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne));
        tracep->fullBit(oldp+170,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt));
        tracep->fullBit(oldp+171,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge));
        tracep->fullBit(oldp+172,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu));
        tracep->fullBit(oldp+173,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu));
        tracep->fullBit(oldp+174,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb));
        tracep->fullBit(oldp+175,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh));
        tracep->fullBit(oldp+176,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw));
        tracep->fullBit(oldp+177,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu));
        tracep->fullBit(oldp+178,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu));
        tracep->fullBit(oldp+179,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb));
        tracep->fullBit(oldp+180,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh));
        tracep->fullBit(oldp+181,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw));
        tracep->fullBit(oldp+182,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi));
        tracep->fullBit(oldp+183,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti));
        tracep->fullBit(oldp+184,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu));
        tracep->fullBit(oldp+185,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori));
        tracep->fullBit(oldp+186,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori));
        tracep->fullBit(oldp+187,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi));
        tracep->fullBit(oldp+188,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli));
        tracep->fullBit(oldp+189,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli));
        tracep->fullBit(oldp+190,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai));
        tracep->fullBit(oldp+191,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add));
        tracep->fullBit(oldp+192,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub));
        tracep->fullBit(oldp+193,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll));
        tracep->fullBit(oldp+194,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt));
        tracep->fullBit(oldp+195,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu));
        tracep->fullBit(oldp+196,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor));
        tracep->fullBit(oldp+197,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl));
        tracep->fullBit(oldp+198,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra));
        tracep->fullBit(oldp+199,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or));
        tracep->fullBit(oldp+200,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and));
        tracep->fullBit(oldp+201,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle));
        tracep->fullBit(oldp+202,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh));
        tracep->fullBit(oldp+203,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr));
        tracep->fullBit(oldp+204,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh));
        tracep->fullBit(oldp+205,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak));
        tracep->fullBit(oldp+206,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq));
        tracep->fullBit(oldp+207,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq));
        tracep->fullBit(oldp+208,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq));
        tracep->fullBit(oldp+209,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq));
        tracep->fullBit(oldp+210,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq));
        tracep->fullBit(oldp+211,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer));
        tracep->fullBit(oldp+212,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap));
        tracep->fullCData(oldp+213,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd),6);
        tracep->fullCData(oldp+214,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2),6);
        tracep->fullIData(oldp+215,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm),32);
        tracep->fullIData(oldp+216,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j),32);
        tracep->fullBit(oldp+217,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger));
        tracep->fullBit(oldp+218,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q));
        tracep->fullBit(oldp+219,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger));
        tracep->fullBit(oldp+220,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr));
        tracep->fullBit(oldp+221,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal));
        tracep->fullBit(oldp+222,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu));
        tracep->fullBit(oldp+223,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai));
        tracep->fullBit(oldp+224,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        tracep->fullBit(oldp+225,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw));
        tracep->fullBit(oldp+226,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra));
        tracep->fullBit(oldp+227,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        tracep->fullBit(oldp+228,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt));
        tracep->fullBit(oldp+229,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu));
        tracep->fullBit(oldp+230,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        tracep->fullBit(oldp+231,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw));
        tracep->fullBit(oldp+232,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm));
        tracep->fullBit(oldp+233,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg));
        tracep->fullBit(oldp+234,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare));
        tracep->fullBit(oldp+235,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        tracep->fullQData(oldp+236,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr),64);
        tracep->fullQData(oldp+238,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr),64);
        tracep->fullIData(oldp+240,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm),32);
        tracep->fullCData(oldp+241,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2),5);
        tracep->fullCData(oldp+242,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd),5);
        tracep->fullIData(oldp+243,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val),32);
        tracep->fullIData(oldp+244,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val),32);
        tracep->fullBit(oldp+245,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid));
        tracep->fullBit(oldp+246,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid));
        tracep->fullBit(oldp+247,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn));
        tracep->fullCData(oldp+248,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state),8);
        tracep->fullCData(oldp+249,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state),2);
        tracep->fullWData(oldp+250,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state),128);
        tracep->fullBit(oldp+254,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst));
        tracep->fullBit(oldp+255,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata));
        tracep->fullBit(oldp+256,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata));
        tracep->fullBit(oldp+257,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store));
        tracep->fullBit(oldp+258,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu));
        tracep->fullBit(oldp+259,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch));
        tracep->fullBit(oldp+260,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr));
        tracep->fullBit(oldp+261,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_trace));
        tracep->fullBit(oldp+262,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu));
        tracep->fullBit(oldp+263,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh));
        tracep->fullBit(oldp+264,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb));
        tracep->fullCData(oldp+265,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd),6);
        tracep->fullIData(oldp+266,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc),32);
        tracep->fullCData(oldp+267,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter),4);
        tracep->fullBit(oldp+268,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout));
        tracep->fullIData(oldp+269,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending),32);
        tracep->fullBit(oldp+270,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq));
        tracep->fullIData(oldp+271,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out),32);
        tracep->fullIData(oldp+272,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q),32);
        tracep->fullBit(oldp+273,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0));
        tracep->fullIData(oldp+274,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)
                                      ? (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                         - vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                                      : (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                         + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
        tracep->fullIData(oldp+275,((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                     << (0x1fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
        tracep->fullIData(oldp+276,((IData)((0x1ffffffffULL 
                                             & VL_SHIFTRS_QQI(33,33,5, 
                                                              (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra) 
                                                                                | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai)) 
                                                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1))), 
                                                              (0x1fU 
                                                               & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))))),32);
        tracep->fullBit(oldp+277,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq));
        tracep->fullBit(oldp+278,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu));
        tracep->fullBit(oldp+279,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts));
        tracep->fullBit(oldp+280,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write));
        tracep->fullIData(oldp+281,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata),32);
        tracep->fullIData(oldp+282,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1),32);
        tracep->fullIData(oldp+283,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2),32);
        tracep->fullBit(oldp+284,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul));
        tracep->fullBit(oldp+285,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh));
        tracep->fullBit(oldp+286,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu));
        tracep->fullBit(oldp+287,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu));
        tracep->fullBit(oldp+288,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul) 
                                   | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                      | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu) 
                                         | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu))))));
        tracep->fullBit(oldp+289,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh));
        tracep->fullBit(oldp+290,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                   | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu))));
        tracep->fullBit(oldp+291,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_div));
        tracep->fullBit(oldp+292,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu));
        tracep->fullBit(oldp+293,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem));
        tracep->fullBit(oldp+294,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu));
        tracep->fullBit(oldp+295,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_div) 
                                   | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu) 
                                      | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem) 
                                         | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu))))));
        tracep->fullBit(oldp+296,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__start));
        tracep->fullIData(oldp+297,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__dividend),32);
        tracep->fullQData(oldp+298,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__divisor),63);
        tracep->fullIData(oldp+300,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__quotient),32);
        tracep->fullIData(oldp+301,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk),32);
        tracep->fullBit(oldp+302,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__running));
        tracep->fullBit(oldp+303,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__outsign));
        tracep->fullQData(oldp+304,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state),64);
        tracep->fullCData(oldp+306,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_axi_transaction),3);
        tracep->fullCData(oldp+307,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__async_axi_transaction),5);
        tracep->fullCData(oldp+308,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__delay_axi_transaction),5);
        tracep->fullBit(oldp+309,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready));
        tracep->fullBit(oldp+310,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready));
        tracep->fullBit(oldp+311,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid));
        tracep->fullBit(oldp+312,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready));
        tracep->fullBit(oldp+313,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
        tracep->fullIData(oldp+314,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata),32);
        tracep->fullBit(oldp+315,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready));
        tracep->fullIData(oldp+316,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word),32);
        tracep->fullBit(oldp+317,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr));
        tracep->fullBit(oldp+318,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr));
        tracep->fullBit(oldp+319,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata));
        tracep->fullBit(oldp+320,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read));
        tracep->fullBit(oldp+321,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write));
        tracep->fullBit(oldp+322,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer));
        tracep->fullBit(oldp+323,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word));
        tracep->fullIData(oldp+324,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle),32);
        tracep->fullIData(oldp+325,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched),32);
        tracep->fullBit(oldp+326,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word));
        tracep->fullBit(oldp+327,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done));
        tracep->fullBit(oldp+328,(vlTOPp->clk));
        tracep->fullBit(oldp+329,(vlTOPp->resetn));
        tracep->fullBit(oldp+330,(vlTOPp->trap));
        tracep->fullBit(oldp+331,(vlTOPp->trace_valid));
        tracep->fullQData(oldp+332,(vlTOPp->trace_data),36);
        tracep->fullIData(oldp+334,((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                      | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst))
                                      ? (0xfffffffcU 
                                         & (((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
                                              >> 2U) 
                                             + ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                                & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                                    ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                                    : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)))) 
                                            << 2U))
                                      : (0xfffffffcU 
                                         & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1))),32);
        tracep->fullBit(oldp+335,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                   & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                       ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                       : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)))));
        tracep->fullBit(oldp+336,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                                   & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
        tracep->fullIData(oldp+337,(0U),32);
        tracep->fullCData(oldp+338,(0U),3);
        tracep->fullBit(oldp+339,(1U));
        tracep->fullBit(oldp+340,(0U));
        tracep->fullIData(oldp+341,(0U),32);
        tracep->fullIData(oldp+342,(0xffffffffU),32);
        tracep->fullIData(oldp+343,(0x10U),32);
        tracep->fullBit(oldp+344,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_wr));
        tracep->fullIData(oldp+345,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_rd),32);
        tracep->fullBit(oldp+346,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_wait));
        tracep->fullBit(oldp+347,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_ready));
        tracep->fullIData(oldp+348,(0U),32);
        tracep->fullIData(oldp+349,(1U),32);
        tracep->fullIData(oldp+350,(2U),32);
        tracep->fullIData(oldp+351,(0x20U),32);
        tracep->fullIData(oldp+352,(0x24U),32);
        tracep->fullIData(oldp+353,(6U),32);
        tracep->fullQData(oldp+354,(0x100000000ULL),36);
        tracep->fullQData(oldp+356,(0x200000000ULL),36);
        tracep->fullQData(oldp+358,(0x800000000ULL),36);
        tracep->fullIData(oldp+360,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__i),32);
        tracep->fullCData(oldp+361,(0x80U),8);
        tracep->fullCData(oldp+362,(0x40U),8);
        tracep->fullCData(oldp+363,(0x20U),8);
        tracep->fullCData(oldp+364,(0x10U),8);
        tracep->fullCData(oldp+365,(8U),8);
        tracep->fullCData(oldp+366,(4U),8);
        tracep->fullCData(oldp+367,(2U),8);
        tracep->fullCData(oldp+368,(1U),8);
        tracep->fullCData(oldp+369,(0U),6);
        tracep->fullIData(oldp+370,(1U),32);
        tracep->fullIData(oldp+371,(4U),32);
        tracep->fullIData(oldp+372,(0x40U),32);
    }
}
