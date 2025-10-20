// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mips_top.h for the primary calling header

#ifndef VERILATED_VTB_MIPS_TOP___024ROOT_H_
#define VERILATED_VTB_MIPS_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mips_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mips_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_mips_top__DOT__clk;
    CData/*0:0*/ tb_mips_top__DOT__rst;
    CData/*3:0*/ tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl;
    CData/*1:0*/ tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT____Vcellinp__pc_src_mux__sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mips_top__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mips_top__DOT__rst__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb_mips_top__DOT__DUT__DOT__mips__DOT__alu_ctrl__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_mips_top__DOT__DUT__DOT__mips__DOT__cu__DOT__md__DOT__ctrl;
    IData/*31:0*/ tb_mips_top__DOT__pc_current;
    IData/*31:0*/ tb_mips_top__DOT__instr;
    IData/*31:0*/ tb_mips_top__DOT__alu_out;
    IData/*31:0*/ tb_mips_top__DOT__wd_dm;
    IData/*31:0*/ tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__pc_next;
    IData/*31:0*/ tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__sext_imm;
    IData/*31:0*/ tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa;
    IData/*31:0*/ tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pa__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu_pb__0;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__alu__DOT__multiplier_register;
    VlUnpacked<IData/*31:0*/, 32> tb_mips_top__DOT__DUT__DOT__mips__DOT__dp__DOT__rf__DOT__rf;
    VlUnpacked<IData/*31:0*/, 64> tb_mips_top__DOT__DUT__DOT__imem__DOT__rom;
    VlUnpacked<IData/*31:0*/, 64> tb_mips_top__DOT__DUT__DOT__dmem__DOT__ram;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_mips_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mips_top___024root(Vtb_mips_top__Syms* symsp, const char* v__name);
    ~Vtb_mips_top___024root();
    VL_UNCOPYABLE(Vtb_mips_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
