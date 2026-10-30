// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Body
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<SData/*9:0*/, 256> Vtb__ConstPool__TABLE_h5fe72e41_0;

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                               [(7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value))]),8);
        bufp->chgSData(oldp+1,((((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[4U]) 
                                 << 8U) | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[5U])),16);
        bufp->chgCData(oldp+2,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[0]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[1]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[2]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[3]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[4]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[5]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[6]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[7]),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+10,((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                             >> 0x00000012U)))));
        bufp->chgBit(oldp+11,((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                             >> 0x00000011U)))));
        bufp->chgBit(oldp+12,((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                             >> 0x00000025U)))));
        bufp->chgBit(oldp+13,((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                             >> 0x00000016U)))));
        bufp->chgBit(oldp+14,((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                             >> 0x00000015U)))));
        bufp->chgBit(oldp+15,((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                             >> 0x00000014U)))));
        bufp->chgSData(oldp+16,((0x000003ffU & (((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                             >> 0x0000000bU)))
                                                  ? 
                                                 ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                          [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc]) 
                                                  | (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                                   ? Vtb__ConstPool__TABLE_h5fe72e41_0
                                                  [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value]
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc)))) 
                                                | (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                                         [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                                         >> 0x0000000cU)))))))),10);
        bufp->chgCData(oldp+17,((0x0000001fU & (IData)(
                                                       (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                        [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                        >> 0x00000020U)))),5);
        bufp->chgBit(oldp+18,((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                             >> 0x0000001fU)))));
        bufp->chgCData(oldp+19,((7U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                               [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                               >> 0x0000001cU)))),3);
        bufp->chgCData(oldp+20,((7U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                               [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                               >> 0x00000019U)))),3);
        bufp->chgBit(oldp+21,((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                             >> 0x00000018U)))));
        bufp->chgBit(oldp+22,((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                             >> 0x00000017U)))));
        bufp->chgBit(oldp+23,((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                             >> 0x00000013U)))));
        bufp->chgCData(oldp+24,((3U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                               [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                               >> 0x0000000fU)))),2);
        bufp->chgCData(oldp+25,((3U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                               [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                               >> 0x0000000dU)))),2);
        bufp->chgCData(oldp+26,((7U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                               [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                               >> 0x0000000aU)))),3);
        bufp->chgSData(oldp+27,((0x000003ffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                       [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc]))),10);
        bufp->chgCData(oldp+28,((7U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                               [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                               >> 0x0000000aU)))),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+29,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value),8);
        bufp->chgCData(oldp+30,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value),8);
        bufp->chgCData(oldp+31,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value),4);
        bufp->chgCData(oldp+32,(((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value) 
                                 << 4U)),8);
        bufp->chgSData(oldp+33,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value),16);
        bufp->chgSData(oldp+34,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__sp_inst__DOT__reg_value),16);
        bufp->chgCData(oldp+35,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o),2);
        bufp->chgCData(oldp+36,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o),2);
        bufp->chgCData(oldp+37,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value),8);
        bufp->chgCData(oldp+38,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags),4);
        bufp->chgCData(oldp+39,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res),8);
        bufp->chgSData(oldp+40,((0x0000ffffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value) 
                                                + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))),16);
        bufp->chgSData(oldp+41,((0x0000ffffU & ((1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                                                 ? 
                                                ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__sp_inst__DOT__reg_value) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__sp_inst__DOT__reg_value) 
                                                 + 
                                                 (2U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))))),16);
        bufp->chgCData(oldp+42,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i),5);
        bufp->chgBit(oldp+43,((IData)(((8U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc)) 
                                       & (0x38U == 
                                          (0x38U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value)))))));
        bufp->chgCData(oldp+44,((7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value))),3);
        bufp->chgCData(oldp+45,((7U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value) 
                                       >> 3U))),3);
        bufp->chgBit(oldp+46,(((8U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc))
                                ? ((7U != (7U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value) 
                                                 >> 3U))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))
                                : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))));
        bufp->chgBit(oldp+47,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__load_pc_o));
        bufp->chgBit(oldp+48,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
        bufp->chgBit(oldp+49,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__test_zero));
        bufp->chgBit(oldp+50,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__carry));
        bufp->chgCData(oldp+51,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi),5);
        bufp->chgCData(oldp+52,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo),5);
        bufp->chgSData(oldp+53,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc),10);
        bufp->chgSData(oldp+54,(Vtb__ConstPool__TABLE_h5fe72e41_0
                                [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value]),10);
        bufp->chgBit(oldp+55,(((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__load_pc_o) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
    }
    bufp->chgBit(oldp+56,(vlSelfRef.tb__DOT__clk_i));
    bufp->chgBit(oldp+57,(vlSelfRef.tb__DOT__rst_ni));
    bufp->chgSData(oldp+58,(vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__addr_i),16);
    bufp->chgCData(oldp+59,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__data_i),8);
    bufp->chgCData(oldp+60,(vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__rd_data),8);
    bufp->chgSData(oldp+61,((0x0000ffffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__load_pc_o)
                                             ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o)
                                             : ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value) 
                                                + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))),16);
    bufp->chgSData(oldp+62,(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o),16);
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Body
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
