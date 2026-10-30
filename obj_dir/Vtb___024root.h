// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk_i;
    CData/*0:0*/ tb__DOT__rst_ni;
    CData/*3:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags;
    CData/*7:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__alu_res;
    CData/*0:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__load_pc_o;
    CData/*1:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o;
    CData/*1:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o;
    CData/*7:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value;
    CData/*7:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__data_i;
    CData/*7:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value;
    CData/*7:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value;
    CData/*4:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i;
    CData/*0:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__test_zero;
    CData/*0:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__carry;
    CData/*4:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi;
    CData/*4:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo;
    CData/*3:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value;
    CData/*7:0*/ tb__DOT__dut__DOT__mem_inst__DOT__rd_data;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rst_ni__0;
    SData/*9:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc;
    SData/*9:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_sequencer__DOT__next_upc_o;
    SData/*15:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__sp_inst__DOT__reg_value;
    SData/*15:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__data_i;
    SData/*15:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value;
    SData/*15:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o;
    SData/*15:0*/ tb__DOT__dut__DOT__mem_inst__DOT__addr_i;
    IData/*31:0*/ __Vi;
    QData/*37:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT____VlemCall_0__make_nop;
    VlUnpacked<QData/*37:0*/, 1024> tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom;
    VlUnpacked<CData/*7:0*/, 8> tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs;
    VlUnpacked<CData/*7:0*/, 65536> tb__DOT__dut__DOT__mem_inst__DOT__mem_array;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    std::string __Vtask_tb__DOT__check_reg__1__reg_name;
    std::string __Vtask_tb__DOT__check_reg__3__reg_name;
    std::string __Vtask_tb__DOT__check_reg__5__reg_name;
    std::string __Vtask_tb__DOT__check_reg__7__reg_name;
    std::string __Vtask_tb__DOT__check_reg__10__reg_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h62411ea8__0;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* namep);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
