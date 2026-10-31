// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb___024root___timing_ready(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb__DOT__clk_i = 0U;
        vlSelfRef.tb__DOT__rst_ni = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk_i__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst_ni__0 = 0U;
    Vtb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_stl(Vtb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__ico(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__ico\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__obs(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__obs\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__react(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__react\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i;
    tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i = 0;
    QData/*37:0*/ __Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__16__u;
    __Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__16__u = 0;
    // Body
    tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTES_III(32, 0x000003ffU, tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT____VlemCall_0__make_nop = 0;
        __Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__16__u = 0;
        __Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__16__u = 0ULL;
        __Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__16__u 
            = (0x0000003fffffe3ffULL & __Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__16__u);
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT____VlemCall_0__make_nop 
            = __Vfunc_tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__make_nop__16__u;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[(0x000003ffU 
                                                                                & tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i)] 
            = vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT____VlemCall_0__make_nop;
        tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__unnamedblk1__DOT__i);
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
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[12U] 
        = (0x0000000000040000ULL | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[12U]);
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[12U] 
        = (0x0000000000010000ULL | (0x0000003ffffe7fffULL 
                                    & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[12U]));
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[12U] 
        = (0x0000003fffffe3ffULL & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[12U]);
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[13U] 
        = (0x0000000001000000ULL | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[13U]);
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[13U] 
        = (0x0000000000004000ULL | (0x0000003fffff9fffULL 
                                    & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[13U]));
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[13U] 
        = (0x0000000000000800ULL | (0x0000003fffffe3ffULL 
                                    & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[13U]));
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[13U] 
        = (0x0000003ffffffc00ULL & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[13U]);
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[16U] 
        = (0x0000000000020000ULL | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[16U]);
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[16U] 
        = (0x0000000000010000ULL | (0x0000003ffffe7fffULL 
                                    & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[16U]));
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[16U] 
        = (0x0000000000000800ULL | (0x0000003fffffe3ffULL 
                                    & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[16U]));
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[16U] 
        = (0x0000003ffffffc00ULL & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[16U]);
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1023U] 
        = (0x0000000000000c00ULL | (0x0000003fffffe3ffULL 
                                    & vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[1023U]));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                            [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                            >> 0x00000014U)));
    __VdfgRegularize_h6e95ff9d_0_7 = (1U & (IData)(
                                                   (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                    [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                    >> 0x00000018U)));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = (1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                            [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                            >> 0x0000000aU)));
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o 
        = (((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[6U]) 
            << 8U) | vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[7U]);
    __VdfgRegularize_h6e95ff9d_0_9 = (3U & (IData)(
                                                   (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                    [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                    >> 0x0000000dU)));
    __VdfgRegularize_h6e95ff9d_0_5 = (0x0000001fU & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                             [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                             >> 0x00000020U)));
    if ((8U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = 
            ((7U != (7U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value) 
                           >> 3U))) & (IData)(__VdfgRegularize_h6e95ff9d_0_7));
        if ((7U == (7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value)))) {
            __VdfgRegularize_h6e95ff9d_0_10 = 1U;
            __VdfgRegularize_h6e95ff9d_0_6 = 0x19U;
        } else {
            __VdfgRegularize_h6e95ff9d_0_10 = __VdfgRegularize_h6e95ff9d_0_9;
            __VdfgRegularize_h6e95ff9d_0_6 = __VdfgRegularize_h6e95ff9d_0_5;
        }
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = __VdfgRegularize_h6e95ff9d_0_7;
        __VdfgRegularize_h6e95ff9d_0_10 = __VdfgRegularize_h6e95ff9d_0_9;
        __VdfgRegularize_h6e95ff9d_0_6 = __VdfgRegularize_h6e95ff9d_0_5;
    }
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_sequencer__DOT__next_upc_o 
        = (0x000003ffU & (((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                          [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                          >> 0x0000000bU)))
                            ? ((IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                       [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc]) 
                               | (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))))
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)
                                ? Vtb__ConstPool__TABLE_h5fe72e41_0
                               [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value]
                                : ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc)))) 
                          | (- (IData)((1U & (IData)(
                                                     (vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom
                                                      [vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc] 
                                                      >> 0x0000000cU)))))));
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
                       & (- (IData)((3U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o))))))));
    if ((0x0010U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc))) {
        if ((7U == (7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value)))) {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o = 1U;
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i = 0x19U;
        } else {
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o 
                = __VdfgRegularize_h6e95ff9d_0_10;
            vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i 
                = __VdfgRegularize_h6e95ff9d_0_6;
        }
    } else {
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o 
            = __VdfgRegularize_h6e95ff9d_0_10;
        vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i 
            = __VdfgRegularize_h6e95ff9d_0_6;
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
    vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__data_i 
        = ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o))
            ? vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs
           [(7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value))]
            : ((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o))
                ? (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__alu_res)
                : ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem_inst__DOT__rd_data) 
                   & (- (IData)((2U == (IData)(vlSelfRef.tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o)))))));
}

bool Vtb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__alu_flags = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6958495079371232153ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__alu_res = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8525600413472721333ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__load_pc_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5127408859204502516ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__addr_bus_sel_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16799518796218883114ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__data_bus_sel_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1117570383200959289ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__micro_pc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11302983160567035827ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_rom__DOT__rom[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 8258127713066650246ull);
    }
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__ctrl_inst__DOT__u_sequencer__DOT__next_upc_o = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14962364279920272587ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__alu_temp_inst__DOT__reg_value = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3476378311297049689ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__data_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5109105654516083575ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__acc_inst__DOT__reg_value = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9978042712570608224ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__ir_inst__DOT__reg_value = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9420487446655154765ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__sp_inst__DOT__reg_value = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18159245491359089224ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__data_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2233399882673540049ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__pc_inst__DOT__reg_value = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 817809070942696544ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__alu_op_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2548283878506807865ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__test_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2470345374014413017ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4659168342836739631ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_hi = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13942687220637386070ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__alu_inst__DOT__res_lo = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2954463868283160738ull);
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__wz_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10751430095450048282ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__regfile_inst__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13307723787232976821ull);
    }
    vlSelf->tb__DOT__dut__DOT__cpu_inst__DOT__flag_reg_inst__DOT__reg_value = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3949944300031757377ull);
    vlSelf->tb__DOT__dut__DOT__mem_inst__DOT__addr_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18357719041437672213ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__mem_inst__DOT__mem_array[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11416170322117785017ull);
    }
    vlSelf->tb__DOT__dut__DOT__mem_inst__DOT__rd_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9130756791352167732ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst_ni__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
