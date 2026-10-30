// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        IData/*31:0*/ __Vinline_0__eval_initial__TOP_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i;
        __Vinline_0__eval_initial__TOP_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i = 0;
        QData/*37:0*/ __Vinline_0__eval_initial__TOP___Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__11__u;
        __Vinline_0__eval_initial__TOP___Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__11__u = 0;
        __Vinline_0__eval_initial__TOP_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTES_III(32, 0x000003ffU, __Vinline_0__eval_initial__TOP_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT____VlemCall_0__make_nop = 0;
            __Vinline_0__eval_initial__TOP___Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__11__u = 0;
            __Vinline_0__eval_initial__TOP___Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__11__u = 0ULL;
            __Vinline_0__eval_initial__TOP___Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__11__u 
                = (0x0000003fffffe3ffULL & __Vinline_0__eval_initial__TOP___Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__11__u);
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT____VlemCall_0__make_nop 
                = __Vinline_0__eval_initial__TOP___Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__11__u;
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[(0x000003ffU 
                                                                                & __Vinline_0__eval_initial__TOP_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i)] 
                = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT____VlemCall_0__make_nop;
            __Vinline_0__eval_initial__TOP_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vinline_0__eval_initial__TOP_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i);
        }
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[0U] 
            = (0x0000000000040000ULL | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[0U]);
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[0U] 
            = (0x0000003fffffe3ffULL & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[0U]);
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1U] 
            = (0x0000002000000000ULL | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1U]);
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1U] 
            = (0x0000000000080000ULL | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1U]);
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1U] 
            = (0x0000000000004000ULL | (0x0000003fffff9fffULL 
                                        & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1U]));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1U] 
            = (0x0000003fffffe3ffULL & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1U]);
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[2U] 
            = (0x0000000000000400ULL | (0x0000003fffffe3ffULL 
                                        & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[2U]));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[8U] 
            = (0x0000000001000000ULL | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[8U]);
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[8U] 
            = (0x0000000000000800ULL | (0x0000003fffffe3ffULL 
                                        & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[8U]));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[8U] 
            = (0x0000003ffffffc00ULL & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[8U]);
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1023U] 
            = (0x0000000000000c00ULL | (0x0000003fffffe3ffULL 
                                        & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1023U]));
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb___024root___eval_sample(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_sample\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb___024root___eval_ico(Vtb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_ico\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb___024root___timing_ready(Vtb___024root* vlSelf);
void Vtb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb___024root___timing_resume(Vtb___024root* vlSelf);

bool Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb__DOT__rst_ni)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst_ni__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb__DOT__clk_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_i__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_i__0 
            = vlSelfRef.tb__DOT__clk_i;
        vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst_ni__0 
            = vlSelfRef.tb__DOT__rst_ni;
    }
    Vtb___024root___timing_ready(vlSelf);
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__data_i 
                        = ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o))
                            ? vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                           [(7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value))]
                            : ((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o))
                                ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res)
                                : ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__rd_data) 
                                   & (- (IData)((2U 
                                                 == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o)))))));
                    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o 
                        = (((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[6U]) 
                            << 8U) | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[7U]);
                    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__data_i 
                        = (0x0000ffffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__load_pc_o)
                                           ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o)
                                           : ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value) 
                                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
                    vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__addr_i 
                        = ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o))
                            ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value)
                            : ((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o))
                                ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__sp_inst__DOT__reg_value)
                                : ((2U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o))
                                    ? (((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[4U]) 
                                        << 8U) | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[5U])
                                    : ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o) 
                                       & (- (IData)(
                                                    (3U 
                                                     == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o))))))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_inact(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_inact\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*7:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0 = 0;
                    SData/*15:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0 = 0;
                    CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0 = 0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0 = 0U;
                    if ((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                       [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                       >> 0x00000011U)))) {
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0 
                            = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__data_i;
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0 
                            = vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__addr_i;
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0 = 1U;
                    }
                    if ((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                       [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                       >> 0x00000012U)))) {
                        vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__rd_data 
                            = vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__mem_array
                            [vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__addr_i];
                    }
                    if (__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0) {
                        vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__mem_array[__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0] 
                            = __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb__DOT__dut__DOT__mem_inst__DOT__mem_array__v0;
                    }
                }
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb___024root___nba_sequent__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_comb__TOP__0
                    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o 
                        = (((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[6U]) 
                            << 8U) | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[7U]);
                    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__data_i 
                        = ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o))
                            ? vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                           [(7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value))]
                            : ((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o))
                                ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res)
                                : ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__rd_data) 
                                   & (- (IData)((2U 
                                                 == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o)))))));
                    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__data_i 
                        = (0x0000ffffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__load_pc_o)
                                           ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o)
                                           : ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value) 
                                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
                    vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__addr_i 
                        = ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o))
                            ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value)
                            : ((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o))
                                ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__sp_inst__DOT__reg_value)
                                : ((2U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o))
                                    ? (((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[4U]) 
                                        << 8U) | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[5U])
                                    : ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o) 
                                       & (- (IData)(
                                                    (3U 
                                                     == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o))))))));
                }
            }
        }
        Vtb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb___024root___eval_obs(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_obs\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb___024root___eval_react(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_react\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb___024root___eval_postponed(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_postponed\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb___024root____VbeforeTrig_h62411ea8__0(Vtb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb__DOT__execute_mov__0__tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb__DOT__execute_mov__0__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check_reg__1__reg_idx;
    __Vtask_tb__DOT__check_reg__1__reg_idx = 0;
    CData/*7:0*/ __Vtask_tb__DOT__check_reg__1__expected;
    __Vtask_tb__DOT__check_reg__1__expected = 0;
    IData/*31:0*/ __Vtask_tb__DOT__execute_mov__2__tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb__DOT__execute_mov__2__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check_reg__3__reg_idx;
    __Vtask_tb__DOT__check_reg__3__reg_idx = 0;
    CData/*7:0*/ __Vtask_tb__DOT__check_reg__3__expected;
    __Vtask_tb__DOT__check_reg__3__expected = 0;
    IData/*31:0*/ __Vtask_tb__DOT__execute_mov__4__tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb__DOT__execute_mov__4__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check_reg__5__reg_idx;
    __Vtask_tb__DOT__check_reg__5__reg_idx = 0;
    CData/*7:0*/ __Vtask_tb__DOT__check_reg__5__expected;
    __Vtask_tb__DOT__check_reg__5__expected = 0;
    IData/*31:0*/ __Vtask_tb__DOT__execute_mov__6__tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb__DOT__execute_mov__6__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check_reg__7__reg_idx;
    __Vtask_tb__DOT__check_reg__7__reg_idx = 0;
    CData/*7:0*/ __Vtask_tb__DOT__check_reg__7__expected;
    __Vtask_tb__DOT__check_reg__7__expected = 0;
    IData/*31:0*/ __Vtask_tb__DOT__execute_mov__8__tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb__DOT__execute_mov__8__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__execute_mov__9__tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb__DOT__execute_mov__9__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check_reg__10__reg_idx;
    __Vtask_tb__DOT__check_reg__10__reg_idx = 0;
    CData/*7:0*/ __Vtask_tb__DOT__check_reg__10__expected;
    __Vtask_tb__DOT__check_reg__10__expected = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("cpu.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[0U] = 0x42U;
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[1U] = 0xa5U;
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[2U] = 0x12U;
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[3U] = 0x34U;
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[4U] = 0x56U;
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[5U] = 0x78U;
    vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__mem_array[0U] = 0x41U;
    vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__mem_array[1U] = 0x48U;
    vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__mem_array[2U] = 0x53U;
    vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__mem_array[3U] = 0x65U;
    vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__mem_array[4U] = 0x78U;
    vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__mem_array[5U] = 0x6fU;
    vlSelfRef.tb__DOT__rst_ni = 1U;
    __Vtask_tb__DOT__execute_mov__0__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__execute_mov__0__tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb___024root____VbeforeTrig_h62411ea8__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h62411ea8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "tb/tb.sv", 
                                                             28);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__execute_mov__0__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb__DOT__execute_mov__0__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb.sv", 
                                         29);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb__DOT__check_reg__1__reg_name = "B"s;
    __Vtask_tb__DOT__check_reg__1__expected = 0xa5U;
    __Vtask_tb__DOT__check_reg__1__reg_idx = 0U;
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                      [(7U & __Vtask_tb__DOT__check_reg__1__reg_idx)] 
                      != (IData)(__Vtask_tb__DOT__check_reg__1__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb.sv:20: Assertion failed in %m: %s FAILED: expected %h, got %h\n",6, 'M',vlSymsp->name(),"tb.check_reg", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb__DOT__check_reg__1__reg_name)
                     , '#',8,(IData)(__Vtask_tb__DOT__check_reg__1__expected)
                     , '#',8,vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                     [(7U & __Vtask_tb__DOT__check_reg__1__reg_idx)]);
        VL_STOP_MT("tb/tb.sv", 20, "");
    } else {
        VL_WRITEF_NX("%s PASS: %h\n",2, 'S',&(vlSelfRef.__Vtask_tb__DOT__check_reg__1__reg_name)
                     , '#',8,(IData)(__Vtask_tb__DOT__check_reg__1__expected));
    }
    __Vtask_tb__DOT__execute_mov__2__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb__DOT__execute_mov__2__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__execute_mov__2__tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb___024root____VbeforeTrig_h62411ea8__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h62411ea8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "tb/tb.sv", 
                                                             28);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__execute_mov__2__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb__DOT__execute_mov__2__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb.sv", 
                                         29);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb__DOT__check_reg__3__reg_name = "C"s;
    __Vtask_tb__DOT__check_reg__3__expected = 0xa5U;
    __Vtask_tb__DOT__check_reg__3__reg_idx = 1U;
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                      [(7U & __Vtask_tb__DOT__check_reg__3__reg_idx)] 
                      != (IData)(__Vtask_tb__DOT__check_reg__3__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb.sv:20: Assertion failed in %m: %s FAILED: expected %h, got %h\n",6, 'M',vlSymsp->name(),"tb.check_reg", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb__DOT__check_reg__3__reg_name)
                     , '#',8,(IData)(__Vtask_tb__DOT__check_reg__3__expected)
                     , '#',8,vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                     [(7U & __Vtask_tb__DOT__check_reg__3__reg_idx)]);
        VL_STOP_MT("tb/tb.sv", 20, "");
    } else {
        VL_WRITEF_NX("%s PASS: %h\n",2, 'S',&(vlSelfRef.__Vtask_tb__DOT__check_reg__3__reg_name)
                     , '#',8,(IData)(__Vtask_tb__DOT__check_reg__3__expected));
    }
    __Vtask_tb__DOT__execute_mov__4__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb__DOT__execute_mov__4__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__execute_mov__4__tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb___024root____VbeforeTrig_h62411ea8__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h62411ea8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "tb/tb.sv", 
                                                             28);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__execute_mov__4__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb__DOT__execute_mov__4__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb.sv", 
                                         29);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb__DOT__check_reg__5__reg_name = "D"s;
    __Vtask_tb__DOT__check_reg__5__expected = 0x34U;
    __Vtask_tb__DOT__check_reg__5__reg_idx = 2U;
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                      [(7U & __Vtask_tb__DOT__check_reg__5__reg_idx)] 
                      != (IData)(__Vtask_tb__DOT__check_reg__5__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb.sv:20: Assertion failed in %m: %s FAILED: expected %h, got %h\n",6, 'M',vlSymsp->name(),"tb.check_reg", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb__DOT__check_reg__5__reg_name)
                     , '#',8,(IData)(__Vtask_tb__DOT__check_reg__5__expected)
                     , '#',8,vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                     [(7U & __Vtask_tb__DOT__check_reg__5__reg_idx)]);
        VL_STOP_MT("tb/tb.sv", 20, "");
    } else {
        VL_WRITEF_NX("%s PASS: %h\n",2, 'S',&(vlSelfRef.__Vtask_tb__DOT__check_reg__5__reg_name)
                     , '#',8,(IData)(__Vtask_tb__DOT__check_reg__5__expected));
    }
    __Vtask_tb__DOT__execute_mov__6__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb__DOT__execute_mov__6__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__execute_mov__6__tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb___024root____VbeforeTrig_h62411ea8__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h62411ea8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "tb/tb.sv", 
                                                             28);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__execute_mov__6__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb__DOT__execute_mov__6__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb.sv", 
                                         29);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb__DOT__check_reg__7__reg_name = "H"s;
    __Vtask_tb__DOT__check_reg__7__expected = 0x78U;
    __Vtask_tb__DOT__check_reg__7__reg_idx = 4U;
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                      [(7U & __Vtask_tb__DOT__check_reg__7__reg_idx)] 
                      != (IData)(__Vtask_tb__DOT__check_reg__7__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb.sv:20: Assertion failed in %m: %s FAILED: expected %h, got %h\n",6, 'M',vlSymsp->name(),"tb.check_reg", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb__DOT__check_reg__7__reg_name)
                     , '#',8,(IData)(__Vtask_tb__DOT__check_reg__7__expected)
                     , '#',8,vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                     [(7U & __Vtask_tb__DOT__check_reg__7__reg_idx)]);
        VL_STOP_MT("tb/tb.sv", 20, "");
    } else {
        VL_WRITEF_NX("%s PASS: %h\n",2, 'S',&(vlSelfRef.__Vtask_tb__DOT__check_reg__7__reg_name)
                     , '#',8,(IData)(__Vtask_tb__DOT__check_reg__7__expected));
    }
    __Vtask_tb__DOT__execute_mov__8__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb__DOT__execute_mov__8__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__execute_mov__8__tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb___024root____VbeforeTrig_h62411ea8__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h62411ea8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "tb/tb.sv", 
                                                             28);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__execute_mov__8__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb__DOT__execute_mov__8__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb.sv", 
                                         29);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xa5U != (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb.sv:81: Assertion failed in %m: A FAILED: expected A5, got %h\n",4, 'M',vlSymsp->name(),"tb", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',8,(IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value));
        VL_STOP_MT("tb/tb.sv", 81, "");
    } else {
        VL_WRITEF_NX("A PASS: A5\n",0);
    }
    __Vtask_tb__DOT__execute_mov__9__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb__DOT__execute_mov__9__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb__DOT__execute_mov__9__tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb___024root____VbeforeTrig_h62411ea8__0(vlSelf, 
                                                  "@(posedge tb.clk_i)");
        co_await vlSelfRef.__VtrigSched_h62411ea8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk_i)", 
                                                             "tb/tb.sv", 
                                                             28);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb__DOT__execute_mov__9__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb__DOT__execute_mov__9__tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb.sv", 
                                         29);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb__DOT__check_reg__10__reg_name = "L"s;
    __Vtask_tb__DOT__check_reg__10__expected = 0xa5U;
    __Vtask_tb__DOT__check_reg__10__reg_idx = 5U;
    if (VL_UNLIKELY(((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                      [(7U & __Vtask_tb__DOT__check_reg__10__reg_idx)] 
                      != (IData)(__Vtask_tb__DOT__check_reg__10__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb.sv:20: Assertion failed in %m: %s FAILED: expected %h, got %h\n",6, 'M',vlSymsp->name(),"tb.check_reg", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb__DOT__check_reg__10__reg_name)
                     , '#',8,(IData)(__Vtask_tb__DOT__check_reg__10__expected)
                     , '#',8,vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
                     [(7U & __Vtask_tb__DOT__check_reg__10__reg_idx)]);
        VL_STOP_MT("tb/tb.sv", 20, "");
    } else {
        VL_WRITEF_NX("%s PASS: %h\n",2, 'S',&(vlSelfRef.__Vtask_tb__DOT__check_reg__10__reg_name)
                     , '#',8,(IData)(__Vtask_tb__DOT__check_reg__10__expected));
    }
    VL_WRITEF_NX("MOV tests completed.\n",0);
    VL_FINISH_MT("tb/tb.sv", 91, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb.sv", 
                                             12);
        vlSelfRef.tb__DOT__clk_i = (1U & (~ (IData)(vlSelfRef.tb__DOT__clk_i)));
    }
    co_return;
}

bool Vtb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<SData/*9:0*/, 256> Vtb__ConstPool__TABLE_h5fe72e41_0;

void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0;
    __VdlyVal__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0;
    __VdlyDim0__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0;
    __VdlySet__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v1;
    __VdlySet__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v1 = 0;
    // Body
    __VdlySet__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0 = 0U;
    __VdlySet__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v1 = 0U;
    if (vlSelfRef.tb__DOT__rst_ni) {
        if (((8U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc))
              ? ((7U != (7U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value) 
                               >> 3U))) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))
              : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))) {
            __VdlyVal__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0 
                = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__data_i;
            __VdlyDim0__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0 
                = (7U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value) 
                         >> 3U));
            __VdlySet__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0 = 1U;
        }
        if (((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__load_pc_o) 
             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value 
                = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__data_i;
        }
        if ((IData)(((8U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc)) 
                     & (0x38U == (0x38U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value)))))) {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value 
                = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__data_i;
        }
        if ((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                           [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                           >> 0x00000025U)))) {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value 
                = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__data_i;
        }
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc 
            = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_sequencer__DOT__next_upc_o;
    } else {
        __VdlySet__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v1 = 1U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__rst_ni)))) {
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__sp_inst__DOT__reg_value = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value = 0U;
    }
    if (__VdlySet__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0) {
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[__VdlyDim0__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0] 
            = __VdlyVal__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v0;
    }
    if (__VdlySet__tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs__v1) {
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[0U] = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[1U] = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[2U] = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[3U] = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[4U] = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[5U] = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[6U] = 0U;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[7U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                           [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                           >> 0x00000018U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (3U 
                                                & (IData)(
                                                          (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                           [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                           >> 0x00000014U)));
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__load_pc_o 
        = (1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                         [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                         >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                           [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                           >> 0x00000013U)));
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o 
        = (3U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                         [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                         >> 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                           [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                           >> 0x0000000aU)));
    __VdfgRegularize_h6e95ff9d_0_7 = (3U & (IData)(
                                                   (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                    [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                    >> 0x0000000dU)));
    __VdfgRegularize_h6e95ff9d_0_5 = (0x0000001fU & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                             >> 0x00000020U)));
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_sequencer__DOT__next_upc_o 
        = (0x000003ffU & (((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                          [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                          >> 0x0000000bU)))
                            ? ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                       [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc]) 
                               | (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                ? Vtb__ConstPool__TABLE_h5fe72e41_0
                               [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value]
                                : ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc)))) 
                          | (- (IData)((1U & (IData)(
                                                     (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                      [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                      >> 0x0000000cU)))))));
    if ((8U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc))) {
        if ((7U == (7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value)))) {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o = 1U;
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i = 0x19U;
        } else {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o 
                = __VdfgRegularize_h6e95ff9d_0_7;
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i 
                = __VdfgRegularize_h6e95ff9d_0_5;
        }
    } else {
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o 
            = __VdfgRegularize_h6e95ff9d_0_7;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i 
            = __VdfgRegularize_h6e95ff9d_0_5;
    }
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__test_zero = 1U;
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi = 0U;
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo = 0U;
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__carry 
        = (((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i)) 
            | (3U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) 
           & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value));
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
        if ((8U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
                = ((4U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))
                    ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value)
                    : ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))
                        ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value)
                        : ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))
                            ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value)
                            : (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value))));
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
                = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value;
        } else if ((4U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
                = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value;
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
                = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value;
        } else if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
                    = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value;
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
                    = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value;
            } else {
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__test_zero = 0U;
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value) 
                                      >> 4U));
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
                    = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
                = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value;
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
                = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value;
        }
    } else if ((8U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
            = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
            = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value;
    } else if ((4U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
        if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
                    = (4U | (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags));
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo 
                    = (0x0000001fU & ((IData)(1U) + 
                                      ((0x0000000fU 
                                        & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value)) 
                                       + (~ ((0x0000000fU 
                                              & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value)) 
                                             + (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__carry))))));
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
                    = ((0x0dU & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags)) 
                       | (2U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo) 
                                >> 3U)));
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi 
                    = (0x0000001fU & (((0x0000000fU 
                                        & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value) 
                                           >> 4U)) 
                                       + (~ (0x0000000fU 
                                             & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value) 
                                                >> 4U)))) 
                                      + (1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo) 
                                                  >> 4U)))));
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
                    = ((0x0eU & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags)) 
                       | (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi) 
                                >> 4U)));
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
                    = ((7U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))
                        ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value)
                        : ((0x000000f0U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi) 
                                           << 4U)) 
                           | (0x0000000fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo))));
            } else {
                vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
                    = ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value) 
                       | (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value));
            }
        } else if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
                = ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value) 
                   ^ (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value));
        } else {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
                = ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value) 
                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value));
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
                = (2U | (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags));
        }
    } else if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))) {
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
            = (4U | (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo 
            = (0x0000001fU & ((IData)(1U) + ((0x0000000fU 
                                              & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value)) 
                                             + (~ (
                                                   (0x0000000fU 
                                                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value)) 
                                                   + (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__carry))))));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
            = ((0x0dU & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags)) 
               | (2U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo) 
                        >> 3U)));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi 
            = (0x0000001fU & (((0x0000000fU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value) 
                                               >> 4U)) 
                               + (~ (0x0000000fU & 
                                     ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value) 
                                      >> 4U)))) + (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo) 
                                                       >> 4U)))));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
            = ((0x0eU & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags)) 
               | (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi) 
                        >> 4U)));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
            = ((7U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i))
                ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value)
                : ((0x000000f0U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi) 
                                   << 4U)) | (0x0000000fU 
                                              & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo))));
    } else {
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo 
            = (0x0000001fU & (((0x0000000fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value)) 
                               + (0x0000000fU & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value))) 
                              + (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__carry)));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
            = ((0x0dU & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags)) 
               | (2U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo) 
                        >> 3U)));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi 
            = (0x0000001fU & (((0x0000000fU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value) 
                                               >> 4U)) 
                               + (0x0000000fU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value) 
                                                 >> 4U))) 
                              + (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo) 
                                       >> 4U))));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
            = ((0x0eU & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags)) 
               | (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi) 
                        >> 4U)));
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res 
            = ((0x000000f0U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi) 
                               << 4U)) | (0x0000000fU 
                                          & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo)));
    }
    if (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__test_zero) {
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags 
            = ((7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags)) 
               | ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res)) 
                  << 3U));
    }
}

void Vtb___024root___timing_ready(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_ready\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h62411ea8__0.ready("@(posedge tb.clk_i)");
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h62411ea8__0.moveToResumeQueue(
                                                          "@(posedge tb.clk_i)");
    vlSelfRef.__VtrigSched_h62411ea8__0.resume("@(posedge tb.clk_i)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb___024root____VbeforeTrig_h62411ea8__0(Vtb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____VbeforeTrig_h62411ea8__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb__DOT__clk_i) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_i__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_i__0 
        = vlSelfRef.tb__DOT__clk_i;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h62411ea8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62411ea8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62411ea8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62411ea8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62411ea8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62411ea8__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
