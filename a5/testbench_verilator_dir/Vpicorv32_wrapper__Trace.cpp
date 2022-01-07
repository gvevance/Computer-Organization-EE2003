// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32_wrapper__Syms.h"


void Vpicorv32_wrapper::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = static_cast<Vpicorv32_wrapper__Syms*>(userp);
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vpicorv32_wrapper::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = static_cast<Vpicorv32_wrapper__Syms*>(userp);
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgWData(oldp+0,(vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file),1024);
            tracep->chgBit(oldp+32,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__axi_test));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+34,(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle),16);
            tracep->chgIData(oldp+35,(vlSymsp->TOP__picorv32_wrapper.__PVT__cycle_counter),32);
            tracep->chgBit(oldp+36,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid));
            tracep->chgBit(oldp+39,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__xfer_done));
            tracep->chgIData(oldp+40,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode),32);
            tracep->chgIData(oldp+41,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode),32);
            tracep->chgIData(oldp+42,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr),32);
            tracep->chgBit(oldp+43,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr));
            tracep->chgIData(oldp+44,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd),32);
            tracep->chgBit(oldp+45,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready));
            tracep->chgCData(oldp+46,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1),6);
            tracep->chgBit(oldp+47,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q));
            tracep->chgCData(oldp+48,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1),5);
            tracep->chgQData(oldp+49,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr),64);
            tracep->chgIData(oldp+51,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm),32);
            tracep->chgIData(oldp+52,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode),32);
            tracep->chgCData(oldp+53,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1),5);
            tracep->chgCData(oldp+54,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2),5);
            tracep->chgCData(oldp+55,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd),5);
            tracep->chgBit(oldp+56,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn));
            tracep->chgQData(oldp+58,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr),64);
            tracep->chgIData(oldp+60,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm),32);
            tracep->chgIData(oldp+61,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode),32);
            tracep->chgCData(oldp+62,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1),5);
            tracep->chgCData(oldp+63,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2),5);
            tracep->chgCData(oldp+64,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd),5);
            tracep->chgBit(oldp+65,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q));
            tracep->chgBit(oldp+66,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait));
            tracep->chgBit(oldp+67,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q));
            tracep->chgBit(oldp+69,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q));
            tracep->chgQData(oldp+70,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__rs1),64);
            tracep->chgQData(oldp+72,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__rs2),64);
            tracep->chgQData(oldp+74,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__rd),64);
            tracep->chgQData(oldp+76,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__rdx),64);
            tracep->chgQData(oldp+78,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1),64);
            tracep->chgQData(oldp+80,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2),64);
            tracep->chgQData(oldp+82,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2),64);
            tracep->chgQData(oldp+84,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd),64);
            tracep->chgQData(oldp+86,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx),64);
            tracep->chgQData(oldp+88,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt),64);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter),7);
            tracep->chgBit(oldp+91,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__pcpi_wait_q));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+94,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__tests_passed));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en));
            tracep->chgIData(oldp+98,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr),32);
            tracep->chgIData(oldp+99,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr),32);
            tracep->chgIData(oldp+100,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata),32);
            tracep->chgCData(oldp+101,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb),4);
            tracep->chgBit(oldp+102,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+103,(vlSymsp->TOP__picorv32_wrapper.trap));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__picorv32_wrapper.trace_valid));
            tracep->chgQData(oldp+105,(vlSymsp->TOP__picorv32_wrapper.trace_data),36);
            tracep->chgIData(oldp+107,(vlSymsp->TOP__picorv32_wrapper.__PVT__irq),32);
            tracep->chgBit(oldp+108,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid));
            tracep->chgIData(oldp+109,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr),32);
            tracep->chgBit(oldp+110,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid));
            tracep->chgIData(oldp+111,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata),32);
            tracep->chgCData(oldp+112,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb),4);
            tracep->chgBit(oldp+113,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                                      & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb)))));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid));
            tracep->chgCData(oldp+115,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                         ? 4U : 0U)),3);
            tracep->chgBit(oldp+116,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb)))))));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid));
            tracep->chgIData(oldp+118,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn),32);
            tracep->chgIData(oldp+119,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1),32);
            tracep->chgIData(oldp+120,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2),32);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__eoi),32);
            tracep->chgBit(oldp+122,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr));
            tracep->chgIData(oldp+124,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata),32);
            tracep->chgCData(oldp+125,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb),4);
            tracep->chgQData(oldp+126,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle),64);
            tracep->chgQData(oldp+128,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr),64);
            tracep->chgIData(oldp+130,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc),32);
            tracep->chgIData(oldp+131,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc),32);
            tracep->chgIData(oldp+132,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out),32);
            tracep->chgCData(oldp+133,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh),5);
            tracep->chgIData(oldp+134,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc),32);
            tracep->chgBit(oldp+135,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active));
            tracep->chgIData(oldp+137,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask),32);
            tracep->chgIData(oldp+138,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending),32);
            tracep->chgIData(oldp+139,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer),32);
            tracep->chgBit(oldp+140,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait));
            tracep->chgBit(oldp+141,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr));
            tracep->chgIData(oldp+142,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd),32);
            tracep->chgBit(oldp+143,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait));
            tracep->chgBit(oldp+144,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr));
            tracep->chgIData(oldp+146,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd),32);
            tracep->chgBit(oldp+147,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                                      | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait))));
            tracep->chgBit(oldp+148,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready));
            tracep->chgCData(oldp+149,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state),2);
            tracep->chgCData(oldp+150,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize),2);
            tracep->chgIData(oldp+151,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q),32);
            tracep->chgBit(oldp+152,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch));
            tracep->chgBit(oldp+153,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
            tracep->chgBit(oldp+154,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata));
            tracep->chgBit(oldp+155,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata));
            tracep->chgBit(oldp+156,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword));
            tracep->chgBit(oldp+157,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg));
            tracep->chgBit(oldp+158,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid));
            tracep->chgBit(oldp+159,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword));
            tracep->chgBit(oldp+160,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word));
            tracep->chgSData(oldp+161,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer),16);
            tracep->chgBit(oldp+162,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                      | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                         | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                            | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))))));
            tracep->chgBit(oldp+163,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui));
            tracep->chgBit(oldp+164,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc));
            tracep->chgBit(oldp+165,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal));
            tracep->chgBit(oldp+166,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr));
            tracep->chgBit(oldp+167,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq));
            tracep->chgBit(oldp+168,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne));
            tracep->chgBit(oldp+169,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt));
            tracep->chgBit(oldp+170,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge));
            tracep->chgBit(oldp+171,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu));
            tracep->chgBit(oldp+172,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu));
            tracep->chgBit(oldp+173,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb));
            tracep->chgBit(oldp+174,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh));
            tracep->chgBit(oldp+175,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw));
            tracep->chgBit(oldp+176,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu));
            tracep->chgBit(oldp+177,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu));
            tracep->chgBit(oldp+178,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb));
            tracep->chgBit(oldp+179,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh));
            tracep->chgBit(oldp+180,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw));
            tracep->chgBit(oldp+181,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi));
            tracep->chgBit(oldp+182,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti));
            tracep->chgBit(oldp+183,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu));
            tracep->chgBit(oldp+184,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori));
            tracep->chgBit(oldp+185,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori));
            tracep->chgBit(oldp+186,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi));
            tracep->chgBit(oldp+187,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli));
            tracep->chgBit(oldp+188,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli));
            tracep->chgBit(oldp+189,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai));
            tracep->chgBit(oldp+190,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add));
            tracep->chgBit(oldp+191,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub));
            tracep->chgBit(oldp+192,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll));
            tracep->chgBit(oldp+193,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt));
            tracep->chgBit(oldp+194,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu));
            tracep->chgBit(oldp+195,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor));
            tracep->chgBit(oldp+196,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl));
            tracep->chgBit(oldp+197,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra));
            tracep->chgBit(oldp+198,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or));
            tracep->chgBit(oldp+199,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and));
            tracep->chgBit(oldp+200,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle));
            tracep->chgBit(oldp+201,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh));
            tracep->chgBit(oldp+202,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr));
            tracep->chgBit(oldp+203,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh));
            tracep->chgBit(oldp+204,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak));
            tracep->chgBit(oldp+205,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq));
            tracep->chgBit(oldp+206,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq));
            tracep->chgBit(oldp+207,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq));
            tracep->chgBit(oldp+208,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq));
            tracep->chgBit(oldp+209,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq));
            tracep->chgBit(oldp+210,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer));
            tracep->chgBit(oldp+211,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap));
            tracep->chgCData(oldp+212,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd),6);
            tracep->chgCData(oldp+213,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2),6);
            tracep->chgIData(oldp+214,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm),32);
            tracep->chgIData(oldp+215,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j),32);
            tracep->chgBit(oldp+216,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger));
            tracep->chgBit(oldp+217,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q));
            tracep->chgBit(oldp+218,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger));
            tracep->chgBit(oldp+219,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr));
            tracep->chgBit(oldp+220,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal));
            tracep->chgBit(oldp+221,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu));
            tracep->chgBit(oldp+222,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai));
            tracep->chgBit(oldp+223,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
            tracep->chgBit(oldp+224,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw));
            tracep->chgBit(oldp+225,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra));
            tracep->chgBit(oldp+226,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
            tracep->chgBit(oldp+227,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt));
            tracep->chgBit(oldp+228,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu));
            tracep->chgBit(oldp+229,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu));
            tracep->chgBit(oldp+230,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw));
            tracep->chgBit(oldp+231,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm));
            tracep->chgBit(oldp+232,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg));
            tracep->chgBit(oldp+233,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare));
            tracep->chgBit(oldp+234,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
            tracep->chgQData(oldp+235,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr),64);
            tracep->chgQData(oldp+237,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr),64);
            tracep->chgIData(oldp+239,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm),32);
            tracep->chgCData(oldp+240,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2),5);
            tracep->chgCData(oldp+241,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd),5);
            tracep->chgIData(oldp+242,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val),32);
            tracep->chgIData(oldp+243,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val),32);
            tracep->chgBit(oldp+244,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid));
            tracep->chgBit(oldp+245,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid));
            tracep->chgBit(oldp+246,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn));
            tracep->chgCData(oldp+247,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state),8);
            tracep->chgCData(oldp+248,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state),2);
            tracep->chgWData(oldp+249,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state),128);
            tracep->chgBit(oldp+253,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst));
            tracep->chgBit(oldp+254,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata));
            tracep->chgBit(oldp+255,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata));
            tracep->chgBit(oldp+256,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store));
            tracep->chgBit(oldp+257,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu));
            tracep->chgBit(oldp+258,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch));
            tracep->chgBit(oldp+259,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr));
            tracep->chgBit(oldp+260,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_trace));
            tracep->chgBit(oldp+261,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu));
            tracep->chgBit(oldp+262,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh));
            tracep->chgBit(oldp+263,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb));
            tracep->chgCData(oldp+264,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd),6);
            tracep->chgIData(oldp+265,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc),32);
            tracep->chgCData(oldp+266,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter),4);
            tracep->chgBit(oldp+267,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout));
            tracep->chgIData(oldp+268,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending),32);
            tracep->chgBit(oldp+269,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq));
            tracep->chgIData(oldp+270,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out),32);
            tracep->chgIData(oldp+271,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q),32);
            tracep->chgBit(oldp+272,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0));
            tracep->chgIData(oldp+273,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)
                                         ? (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                            - vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                                         : (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                            + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
            tracep->chgIData(oldp+274,((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                        << (0x1fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
            tracep->chgIData(oldp+275,((IData)((0x1ffffffffULL 
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
            tracep->chgBit(oldp+276,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq));
            tracep->chgBit(oldp+277,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu));
            tracep->chgBit(oldp+278,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts));
            tracep->chgBit(oldp+279,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write));
            tracep->chgIData(oldp+280,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata),32);
            tracep->chgIData(oldp+281,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1),32);
            tracep->chgIData(oldp+282,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2),32);
            tracep->chgBit(oldp+283,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul));
            tracep->chgBit(oldp+284,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh));
            tracep->chgBit(oldp+285,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu));
            tracep->chgBit(oldp+286,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu));
            tracep->chgBit(oldp+287,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul) 
                                      | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                         | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu) 
                                            | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu))))));
            tracep->chgBit(oldp+288,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh));
            tracep->chgBit(oldp+289,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                      | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu))));
            tracep->chgBit(oldp+290,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_div));
            tracep->chgBit(oldp+291,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu));
            tracep->chgBit(oldp+292,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem));
            tracep->chgBit(oldp+293,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu));
            tracep->chgBit(oldp+294,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_div) 
                                      | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu) 
                                         | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem) 
                                            | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu))))));
            tracep->chgBit(oldp+295,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__start));
            tracep->chgIData(oldp+296,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__dividend),32);
            tracep->chgQData(oldp+297,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__divisor),63);
            tracep->chgIData(oldp+299,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__quotient),32);
            tracep->chgIData(oldp+300,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk),32);
            tracep->chgBit(oldp+301,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__running));
            tracep->chgBit(oldp+302,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk4__DOT__pcpi_div__DOT__outsign));
            tracep->chgQData(oldp+303,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state),64);
            tracep->chgCData(oldp+305,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_axi_transaction),3);
            tracep->chgCData(oldp+306,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__async_axi_transaction),5);
            tracep->chgCData(oldp+307,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__delay_axi_transaction),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+308,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready));
            tracep->chgBit(oldp+309,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready));
            tracep->chgBit(oldp+310,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid));
            tracep->chgBit(oldp+311,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready));
            tracep->chgBit(oldp+312,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
            tracep->chgIData(oldp+313,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata),32);
            tracep->chgBit(oldp+314,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready));
            tracep->chgIData(oldp+315,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word),32);
            tracep->chgBit(oldp+316,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr));
            tracep->chgBit(oldp+317,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr));
            tracep->chgBit(oldp+318,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+319,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read));
            tracep->chgBit(oldp+320,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write));
            tracep->chgBit(oldp+321,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer));
            tracep->chgBit(oldp+322,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word));
            tracep->chgIData(oldp+323,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle),32);
            tracep->chgIData(oldp+324,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched),32);
            tracep->chgBit(oldp+325,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word));
            tracep->chgBit(oldp+326,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done));
        }
        tracep->chgBit(oldp+327,(vlTOPp->clk));
        tracep->chgBit(oldp+328,(vlTOPp->resetn));
        tracep->chgBit(oldp+329,(vlTOPp->trap));
        tracep->chgBit(oldp+330,(vlTOPp->trace_valid));
        tracep->chgQData(oldp+331,(vlTOPp->trace_data),36);
        tracep->chgIData(oldp+333,((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst))
                                     ? (0xfffffffcU 
                                        & (((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
                                             >> 2U) 
                                            + ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                               & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                                   ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                                   : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)))) 
                                           << 2U)) : 
                                    (0xfffffffcU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1))),32);
        tracep->chgBit(oldp+334,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                  & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                      ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                      : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)))));
        tracep->chgBit(oldp+335,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                                  & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
    }
}

void Vpicorv32_wrapper::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = static_cast<Vpicorv32_wrapper__Syms*>(userp);
    Vpicorv32_wrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
    }
}
