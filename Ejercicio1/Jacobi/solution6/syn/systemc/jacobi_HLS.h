// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _jacobi_HLS_HH_
#define _jacobi_HLS_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "jacobi_HLS_dadd_6bkb.h"
#include "jacobi_HLS_dmul_6cud.h"
#include "jacobi_HLS_ddiv_6dEe.h"
#include "jacobi_HLS_sitodpeOg.h"
#include "jacobi_HLS_dsqrt_fYi.h"
#include "jacobi_HLS_x_new.h"

namespace ap_rtl {

struct jacobi_HLS : public sc_module {
    // Port declarations 23
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > J_address0;
    sc_out< sc_logic > J_ce0;
    sc_in< sc_lv<32> > J_q0;
    sc_out< sc_lv<4> > J_address1;
    sc_out< sc_logic > J_ce1;
    sc_in< sc_lv<32> > J_q1;
    sc_out< sc_lv<2> > b_address0;
    sc_out< sc_logic > b_ce0;
    sc_in< sc_lv<32> > b_q0;
    sc_out< sc_lv<2> > b_address1;
    sc_out< sc_logic > b_ce1;
    sc_in< sc_lv<32> > b_q1;
    sc_out< sc_lv<4> > x_address0;
    sc_out< sc_logic > x_ce0;
    sc_out< sc_logic > x_we0;
    sc_out< sc_lv<32> > x_d0;
    sc_out< sc_lv<64> > ap_return;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const2;
    sc_signal< sc_lv<64> > ap_var_for_const1;


    // Module declarations
    jacobi_HLS(sc_module_name name);
    SC_HAS_PROCESS(jacobi_HLS);

    ~jacobi_HLS();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    jacobi_HLS_x_new* x_new_U;
    jacobi_HLS_dadd_6bkb<1,5,64,64,64>* jacobi_HLS_dadd_6bkb_U1;
    jacobi_HLS_dmul_6cud<1,6,64,64,64>* jacobi_HLS_dmul_6cud_U2;
    jacobi_HLS_dmul_6cud<1,6,64,64,64>* jacobi_HLS_dmul_6cud_U3;
    jacobi_HLS_ddiv_6dEe<1,31,64,64,64>* jacobi_HLS_ddiv_6dEe_U4;
    jacobi_HLS_ddiv_6dEe<1,31,64,64,64>* jacobi_HLS_ddiv_6dEe_U5;
    jacobi_HLS_sitodpeOg<1,6,32,64>* jacobi_HLS_sitodpeOg_U6;
    jacobi_HLS_sitodpeOg<1,6,32,64>* jacobi_HLS_sitodpeOg_U7;
    jacobi_HLS_sitodpeOg<1,6,32,64>* jacobi_HLS_sitodpeOg_U8;
    jacobi_HLS_sitodpeOg<1,6,32,64>* jacobi_HLS_sitodpeOg_U9;
    jacobi_HLS_dsqrt_fYi<1,31,64,64,64>* jacobi_HLS_dsqrt_fYi_U10;
    sc_signal< sc_lv<83> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > sum_reg_366;
    sc_signal< sc_lv<5> > q_reg_378;
    sc_signal< sc_lv<64> > grp_fu_412_p1;
    sc_signal< sc_lv<64> > reg_434;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state51_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state56_pp0_stage3_iter1;
    sc_signal< bool > ap_block_state61_pp0_stage3_iter2;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_lv<1> > exitcond_reg_1216;
    sc_signal< sc_lv<1> > exitcond_reg_1216_pp0_iter1_reg;
    sc_signal< sc_lv<64> > grp_fu_402_p2;
    sc_signal< sc_lv<64> > reg_440;
    sc_signal< sc_logic > ap_CS_fsm_state44;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_lv<64> > grp_fu_407_p2;
    sc_signal< sc_lv<64> > reg_444;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<64> > grp_fu_416_p1;
    sc_signal< sc_lv<64> > tmp_7_reg_1117;
    sc_signal< sc_lv<64> > grp_fu_420_p1;
    sc_signal< sc_lv<64> > tmp_6_0_1_reg_1122;
    sc_signal< sc_lv<64> > grp_fu_424_p1;
    sc_signal< sc_lv<64> > tmp_7_0_1_reg_1127;
    sc_signal< sc_lv<64> > tmp_6_0_2_reg_1132;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > tmp_7_0_2_reg_1137;
    sc_signal< sc_lv<64> > tmp_6_0_3_reg_1142;
    sc_signal< sc_lv<64> > tmp_7_0_3_reg_1147;
    sc_signal< sc_lv<64> > grp_fu_394_p2;
    sc_signal< sc_lv<64> > tmp_10_0_1_reg_1152;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > grp_fu_398_p2;
    sc_signal< sc_lv<64> > tmp_10_1_reg_1157;
    sc_signal< sc_lv<64> > tmp_10_0_2_reg_1162;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<64> > tmp_10_0_3_reg_1167;
    sc_signal< sc_lv<1> > p_Result_s_reg_1172;
    sc_signal< sc_lv<32> > p_Val2_20_fu_570_p3;
    sc_signal< sc_lv<32> > p_Val2_20_reg_1177;
    sc_signal< sc_lv<1> > p_Result_3_reg_1183;
    sc_signal< sc_lv<32> > p_Val2_26_fu_700_p3;
    sc_signal< sc_lv<32> > p_Val2_26_reg_1188;
    sc_signal< sc_lv<1> > p_Result_1_reg_1194;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_lv<32> > p_Val2_22_fu_842_p3;
    sc_signal< sc_lv<32> > p_Val2_22_reg_1199;
    sc_signal< sc_lv<1> > p_Result_2_reg_1205;
    sc_signal< sc_lv<32> > p_Val2_24_fu_972_p3;
    sc_signal< sc_lv<32> > p_Val2_24_reg_1210;
    sc_signal< sc_lv<1> > exitcond_fu_1016_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state48_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state53_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state58_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_reg_1216_pp0_iter2_reg;
    sc_signal< sc_lv<5> > q_1_fu_1022_p2;
    sc_signal< sc_lv<5> > q_1_reg_1220;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > tmp_2_fu_1028_p1;
    sc_signal< sc_lv<64> > tmp_2_reg_1225;
    sc_signal< sc_lv<32> > x_new_q0;
    sc_signal< sc_lv<32> > x_new_load_reg_1235;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state49_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state54_pp0_stage1_iter1;
    sc_signal< bool > ap_block_state59_pp0_stage1_iter2;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<32> > tmp_4_fu_1033_p2;
    sc_signal< sc_lv<32> > tmp_4_reg_1241;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_state50_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state55_pp0_stage2_iter1;
    sc_signal< bool > ap_block_state60_pp0_stage2_iter2;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<64> > grp_fu_389_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state48;
    sc_signal< bool > ap_block_state52_pp0_stage4_iter0;
    sc_signal< bool > ap_block_state57_pp0_stage4_iter1;
    sc_signal< bool > ap_block_pp0_stage4_subdone;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_lv<4> > x_new_address0;
    sc_signal< sc_logic > x_new_ce0;
    sc_signal< sc_logic > x_new_we0;
    sc_signal< sc_lv<32> > x_new_d0;
    sc_signal< sc_lv<4> > x_new_address1;
    sc_signal< sc_logic > x_new_ce1;
    sc_signal< sc_logic > x_new_we1;
    sc_signal< sc_lv<32> > x_new_d1;
    sc_signal< sc_lv<5> > ap_phi_mux_q_phi_fu_382_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_CS_fsm_state40;
    sc_signal< sc_logic > ap_CS_fsm_state41;
    sc_signal< sc_logic > ap_CS_fsm_state42;
    sc_signal< sc_logic > ap_CS_fsm_state43;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<32> > p_Val2_27_fu_985_p3;
    sc_signal< sc_lv<32> > p_Val2_21_fu_713_p3;
    sc_signal< sc_lv<32> > p_Val2_23_fu_997_p3;
    sc_signal< sc_lv<32> > p_Val2_25_fu_1009_p3;
    sc_signal< bool > ap_block_pp0_stage4;
    sc_signal< sc_lv<64> > grp_fu_394_p0;
    sc_signal< sc_lv<64> > grp_fu_394_p1;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > grp_fu_398_p0;
    sc_signal< sc_lv<64> > grp_fu_398_p1;
    sc_signal< sc_lv<64> > grp_fu_402_p1;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<64> > grp_fu_407_p1;
    sc_signal< sc_lv<32> > grp_fu_412_p0;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_logic > ap_CS_fsm_state62;
    sc_signal< sc_lv<64> > p_Val2_s_fu_448_p1;
    sc_signal< sc_lv<52> > tmp_V_1_fu_470_p1;
    sc_signal< sc_lv<54> > mantissa_V_fu_474_p4;
    sc_signal< sc_lv<11> > tmp_V_fu_460_p4;
    sc_signal< sc_lv<12> > tmp_i_i_i_i_cast5_fu_488_p1;
    sc_signal< sc_lv<12> > sh_assign_fu_492_p2;
    sc_signal< sc_lv<11> > tmp_i_i_i_fu_506_p2;
    sc_signal< sc_lv<1> > isNeg_fu_498_p3;
    sc_signal< sc_lv<12> > tmp_i_i_i_cast_fu_512_p1;
    sc_signal< sc_lv<12> > ush_fu_516_p3;
    sc_signal< sc_lv<32> > sh_assign_2_cast_fu_524_p1;
    sc_signal< sc_lv<54> > tmp_i_i_i_cast_8_fu_532_p1;
    sc_signal< sc_lv<137> > mantissa_V_1_cast_fu_484_p1;
    sc_signal< sc_lv<137> > tmp_i_i_i_7_fu_528_p1;
    sc_signal< sc_lv<54> > r_V_fu_536_p2;
    sc_signal< sc_lv<1> > tmp_11_fu_548_p3;
    sc_signal< sc_lv<137> > r_V_1_fu_542_p2;
    sc_signal< sc_lv<32> > tmp_8_fu_556_p1;
    sc_signal< sc_lv<32> > tmp_9_fu_560_p4;
    sc_signal< sc_lv<64> > p_Val2_15_fu_578_p1;
    sc_signal< sc_lv<52> > tmp_V_7_fu_600_p1;
    sc_signal< sc_lv<54> > mantissa_V_3_fu_604_p4;
    sc_signal< sc_lv<11> > tmp_V_6_fu_590_p4;
    sc_signal< sc_lv<12> > tmp_i_i_i_i3_cast2_fu_618_p1;
    sc_signal< sc_lv<12> > sh_assign_9_fu_622_p2;
    sc_signal< sc_lv<11> > tmp_i_i_i3_fu_636_p2;
    sc_signal< sc_lv<1> > isNeg_3_fu_628_p3;
    sc_signal< sc_lv<12> > tmp_i_i_i3_cast_fu_642_p1;
    sc_signal< sc_lv<12> > ush_3_fu_646_p3;
    sc_signal< sc_lv<32> > sh_assign_11_cast_fu_654_p1;
    sc_signal< sc_lv<54> > tmp_i_i_i3_cast_14_fu_662_p1;
    sc_signal< sc_lv<137> > mantissa_V_7_cast_fu_614_p1;
    sc_signal< sc_lv<137> > tmp_i_i_i3_13_fu_658_p1;
    sc_signal< sc_lv<54> > r_V_6_fu_666_p2;
    sc_signal< sc_lv<1> > tmp_29_fu_678_p3;
    sc_signal< sc_lv<137> > r_V_7_fu_672_p2;
    sc_signal< sc_lv<32> > tmp_12_fu_686_p1;
    sc_signal< sc_lv<32> > tmp_13_fu_690_p4;
    sc_signal< sc_lv<32> > result_V_1_fu_708_p2;
    sc_signal< sc_lv<64> > p_Val2_5_fu_720_p1;
    sc_signal< sc_lv<52> > tmp_V_3_fu_742_p1;
    sc_signal< sc_lv<54> > mantissa_V_1_fu_746_p4;
    sc_signal< sc_lv<11> > tmp_V_2_fu_732_p4;
    sc_signal< sc_lv<12> > tmp_i_i_i_i1_cast4_fu_760_p1;
    sc_signal< sc_lv<12> > sh_assign_3_fu_764_p2;
    sc_signal< sc_lv<11> > tmp_i_i_i1_fu_778_p2;
    sc_signal< sc_lv<1> > isNeg_1_fu_770_p3;
    sc_signal< sc_lv<12> > tmp_i_i_i1_cast_fu_784_p1;
    sc_signal< sc_lv<12> > ush_1_fu_788_p3;
    sc_signal< sc_lv<32> > sh_assign_5_cast_fu_796_p1;
    sc_signal< sc_lv<54> > tmp_i_i_i1_cast_10_fu_804_p1;
    sc_signal< sc_lv<137> > mantissa_V_3_cast_fu_756_p1;
    sc_signal< sc_lv<137> > tmp_i_i_i1_9_fu_800_p1;
    sc_signal< sc_lv<54> > r_V_2_fu_808_p2;
    sc_signal< sc_lv<1> > tmp_19_fu_820_p3;
    sc_signal< sc_lv<137> > r_V_3_fu_814_p2;
    sc_signal< sc_lv<32> > tmp_s_fu_828_p1;
    sc_signal< sc_lv<32> > tmp_1_fu_832_p4;
    sc_signal< sc_lv<64> > p_Val2_10_fu_850_p1;
    sc_signal< sc_lv<52> > tmp_V_5_fu_872_p1;
    sc_signal< sc_lv<54> > mantissa_V_2_fu_876_p4;
    sc_signal< sc_lv<11> > tmp_V_4_fu_862_p4;
    sc_signal< sc_lv<12> > tmp_i_i_i_i2_cast3_fu_890_p1;
    sc_signal< sc_lv<12> > sh_assign_6_fu_894_p2;
    sc_signal< sc_lv<11> > tmp_i_i_i2_fu_908_p2;
    sc_signal< sc_lv<1> > isNeg_2_fu_900_p3;
    sc_signal< sc_lv<12> > tmp_i_i_i2_cast_fu_914_p1;
    sc_signal< sc_lv<12> > ush_2_fu_918_p3;
    sc_signal< sc_lv<32> > sh_assign_8_cast_fu_926_p1;
    sc_signal< sc_lv<54> > tmp_i_i_i2_cast_12_fu_934_p1;
    sc_signal< sc_lv<137> > mantissa_V_5_cast_fu_886_p1;
    sc_signal< sc_lv<137> > tmp_i_i_i2_11_fu_930_p1;
    sc_signal< sc_lv<54> > r_V_4_fu_938_p2;
    sc_signal< sc_lv<1> > tmp_25_fu_950_p3;
    sc_signal< sc_lv<137> > r_V_5_fu_944_p2;
    sc_signal< sc_lv<32> > tmp_3_fu_958_p1;
    sc_signal< sc_lv<32> > tmp_10_fu_962_p4;
    sc_signal< sc_lv<32> > result_V_7_fu_980_p2;
    sc_signal< sc_lv<32> > result_V_3_fu_992_p2;
    sc_signal< sc_lv<32> > result_V_5_fu_1004_p2;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_lv<64> > grp_fu_428_p2;
    sc_signal< sc_logic > ap_CS_fsm_state92;
    sc_signal< sc_lv<83> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_pp0_stage4_11001;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<83> ap_ST_fsm_state1;
    static const sc_lv<83> ap_ST_fsm_state2;
    static const sc_lv<83> ap_ST_fsm_state3;
    static const sc_lv<83> ap_ST_fsm_state4;
    static const sc_lv<83> ap_ST_fsm_state5;
    static const sc_lv<83> ap_ST_fsm_state6;
    static const sc_lv<83> ap_ST_fsm_state7;
    static const sc_lv<83> ap_ST_fsm_state8;
    static const sc_lv<83> ap_ST_fsm_state9;
    static const sc_lv<83> ap_ST_fsm_state10;
    static const sc_lv<83> ap_ST_fsm_state11;
    static const sc_lv<83> ap_ST_fsm_state12;
    static const sc_lv<83> ap_ST_fsm_state13;
    static const sc_lv<83> ap_ST_fsm_state14;
    static const sc_lv<83> ap_ST_fsm_state15;
    static const sc_lv<83> ap_ST_fsm_state16;
    static const sc_lv<83> ap_ST_fsm_state17;
    static const sc_lv<83> ap_ST_fsm_state18;
    static const sc_lv<83> ap_ST_fsm_state19;
    static const sc_lv<83> ap_ST_fsm_state20;
    static const sc_lv<83> ap_ST_fsm_state21;
    static const sc_lv<83> ap_ST_fsm_state22;
    static const sc_lv<83> ap_ST_fsm_state23;
    static const sc_lv<83> ap_ST_fsm_state24;
    static const sc_lv<83> ap_ST_fsm_state25;
    static const sc_lv<83> ap_ST_fsm_state26;
    static const sc_lv<83> ap_ST_fsm_state27;
    static const sc_lv<83> ap_ST_fsm_state28;
    static const sc_lv<83> ap_ST_fsm_state29;
    static const sc_lv<83> ap_ST_fsm_state30;
    static const sc_lv<83> ap_ST_fsm_state31;
    static const sc_lv<83> ap_ST_fsm_state32;
    static const sc_lv<83> ap_ST_fsm_state33;
    static const sc_lv<83> ap_ST_fsm_state34;
    static const sc_lv<83> ap_ST_fsm_state35;
    static const sc_lv<83> ap_ST_fsm_state36;
    static const sc_lv<83> ap_ST_fsm_state37;
    static const sc_lv<83> ap_ST_fsm_state38;
    static const sc_lv<83> ap_ST_fsm_state39;
    static const sc_lv<83> ap_ST_fsm_state40;
    static const sc_lv<83> ap_ST_fsm_state41;
    static const sc_lv<83> ap_ST_fsm_state42;
    static const sc_lv<83> ap_ST_fsm_state43;
    static const sc_lv<83> ap_ST_fsm_state44;
    static const sc_lv<83> ap_ST_fsm_state45;
    static const sc_lv<83> ap_ST_fsm_state46;
    static const sc_lv<83> ap_ST_fsm_state47;
    static const sc_lv<83> ap_ST_fsm_pp0_stage0;
    static const sc_lv<83> ap_ST_fsm_pp0_stage1;
    static const sc_lv<83> ap_ST_fsm_pp0_stage2;
    static const sc_lv<83> ap_ST_fsm_pp0_stage3;
    static const sc_lv<83> ap_ST_fsm_pp0_stage4;
    static const sc_lv<83> ap_ST_fsm_state62;
    static const sc_lv<83> ap_ST_fsm_state63;
    static const sc_lv<83> ap_ST_fsm_state64;
    static const sc_lv<83> ap_ST_fsm_state65;
    static const sc_lv<83> ap_ST_fsm_state66;
    static const sc_lv<83> ap_ST_fsm_state67;
    static const sc_lv<83> ap_ST_fsm_state68;
    static const sc_lv<83> ap_ST_fsm_state69;
    static const sc_lv<83> ap_ST_fsm_state70;
    static const sc_lv<83> ap_ST_fsm_state71;
    static const sc_lv<83> ap_ST_fsm_state72;
    static const sc_lv<83> ap_ST_fsm_state73;
    static const sc_lv<83> ap_ST_fsm_state74;
    static const sc_lv<83> ap_ST_fsm_state75;
    static const sc_lv<83> ap_ST_fsm_state76;
    static const sc_lv<83> ap_ST_fsm_state77;
    static const sc_lv<83> ap_ST_fsm_state78;
    static const sc_lv<83> ap_ST_fsm_state79;
    static const sc_lv<83> ap_ST_fsm_state80;
    static const sc_lv<83> ap_ST_fsm_state81;
    static const sc_lv<83> ap_ST_fsm_state82;
    static const sc_lv<83> ap_ST_fsm_state83;
    static const sc_lv<83> ap_ST_fsm_state84;
    static const sc_lv<83> ap_ST_fsm_state85;
    static const sc_lv<83> ap_ST_fsm_state86;
    static const sc_lv<83> ap_ST_fsm_state87;
    static const sc_lv<83> ap_ST_fsm_state88;
    static const sc_lv<83> ap_ST_fsm_state89;
    static const sc_lv<83> ap_ST_fsm_state90;
    static const sc_lv<83> ap_ST_fsm_state91;
    static const sc_lv<83> ap_ST_fsm_state92;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_32;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFC;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<64> ap_const_lv64_3FF0000000000000;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<12> ap_const_lv12_C01;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<11> ap_const_lv11_3FF;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_54;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<32> ap_const_lv32_52;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_J_address0();
    void thread_J_address1();
    void thread_J_ce0();
    void thread_J_ce1();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state41();
    void thread_ap_CS_fsm_state42();
    void thread_ap_CS_fsm_state43();
    void thread_ap_CS_fsm_state44();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state47();
    void thread_ap_CS_fsm_state62();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_CS_fsm_state92();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp0_stage4();
    void thread_ap_block_pp0_stage4_11001();
    void thread_ap_block_pp0_stage4_subdone();
    void thread_ap_block_state48_pp0_stage0_iter0();
    void thread_ap_block_state49_pp0_stage1_iter0();
    void thread_ap_block_state50_pp0_stage2_iter0();
    void thread_ap_block_state51_pp0_stage3_iter0();
    void thread_ap_block_state52_pp0_stage4_iter0();
    void thread_ap_block_state53_pp0_stage0_iter1();
    void thread_ap_block_state54_pp0_stage1_iter1();
    void thread_ap_block_state55_pp0_stage2_iter1();
    void thread_ap_block_state56_pp0_stage3_iter1();
    void thread_ap_block_state57_pp0_stage4_iter1();
    void thread_ap_block_state58_pp0_stage0_iter2();
    void thread_ap_block_state59_pp0_stage1_iter2();
    void thread_ap_block_state60_pp0_stage2_iter2();
    void thread_ap_block_state61_pp0_stage3_iter2();
    void thread_ap_condition_pp0_exit_iter0_state48();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_q_phi_fu_382_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_b_address0();
    void thread_b_address1();
    void thread_b_ce0();
    void thread_b_ce1();
    void thread_exitcond_fu_1016_p2();
    void thread_grp_fu_394_p0();
    void thread_grp_fu_394_p1();
    void thread_grp_fu_398_p0();
    void thread_grp_fu_398_p1();
    void thread_grp_fu_402_p1();
    void thread_grp_fu_407_p1();
    void thread_grp_fu_412_p0();
    void thread_isNeg_1_fu_770_p3();
    void thread_isNeg_2_fu_900_p3();
    void thread_isNeg_3_fu_628_p3();
    void thread_isNeg_fu_498_p3();
    void thread_mantissa_V_1_cast_fu_484_p1();
    void thread_mantissa_V_1_fu_746_p4();
    void thread_mantissa_V_2_fu_876_p4();
    void thread_mantissa_V_3_cast_fu_756_p1();
    void thread_mantissa_V_3_fu_604_p4();
    void thread_mantissa_V_5_cast_fu_886_p1();
    void thread_mantissa_V_7_cast_fu_614_p1();
    void thread_mantissa_V_fu_474_p4();
    void thread_p_Val2_10_fu_850_p1();
    void thread_p_Val2_15_fu_578_p1();
    void thread_p_Val2_20_fu_570_p3();
    void thread_p_Val2_21_fu_713_p3();
    void thread_p_Val2_22_fu_842_p3();
    void thread_p_Val2_23_fu_997_p3();
    void thread_p_Val2_24_fu_972_p3();
    void thread_p_Val2_25_fu_1009_p3();
    void thread_p_Val2_26_fu_700_p3();
    void thread_p_Val2_27_fu_985_p3();
    void thread_p_Val2_5_fu_720_p1();
    void thread_p_Val2_s_fu_448_p1();
    void thread_q_1_fu_1022_p2();
    void thread_r_V_1_fu_542_p2();
    void thread_r_V_2_fu_808_p2();
    void thread_r_V_3_fu_814_p2();
    void thread_r_V_4_fu_938_p2();
    void thread_r_V_5_fu_944_p2();
    void thread_r_V_6_fu_666_p2();
    void thread_r_V_7_fu_672_p2();
    void thread_r_V_fu_536_p2();
    void thread_result_V_1_fu_708_p2();
    void thread_result_V_3_fu_992_p2();
    void thread_result_V_5_fu_1004_p2();
    void thread_result_V_7_fu_980_p2();
    void thread_sh_assign_11_cast_fu_654_p1();
    void thread_sh_assign_2_cast_fu_524_p1();
    void thread_sh_assign_3_fu_764_p2();
    void thread_sh_assign_5_cast_fu_796_p1();
    void thread_sh_assign_6_fu_894_p2();
    void thread_sh_assign_8_cast_fu_926_p1();
    void thread_sh_assign_9_fu_622_p2();
    void thread_sh_assign_fu_492_p2();
    void thread_tmp_10_fu_962_p4();
    void thread_tmp_11_fu_548_p3();
    void thread_tmp_12_fu_686_p1();
    void thread_tmp_13_fu_690_p4();
    void thread_tmp_19_fu_820_p3();
    void thread_tmp_1_fu_832_p4();
    void thread_tmp_25_fu_950_p3();
    void thread_tmp_29_fu_678_p3();
    void thread_tmp_2_fu_1028_p1();
    void thread_tmp_3_fu_958_p1();
    void thread_tmp_4_fu_1033_p2();
    void thread_tmp_8_fu_556_p1();
    void thread_tmp_9_fu_560_p4();
    void thread_tmp_V_1_fu_470_p1();
    void thread_tmp_V_2_fu_732_p4();
    void thread_tmp_V_3_fu_742_p1();
    void thread_tmp_V_4_fu_862_p4();
    void thread_tmp_V_5_fu_872_p1();
    void thread_tmp_V_6_fu_590_p4();
    void thread_tmp_V_7_fu_600_p1();
    void thread_tmp_V_fu_460_p4();
    void thread_tmp_i_i_i1_9_fu_800_p1();
    void thread_tmp_i_i_i1_cast_10_fu_804_p1();
    void thread_tmp_i_i_i1_cast_fu_784_p1();
    void thread_tmp_i_i_i1_fu_778_p2();
    void thread_tmp_i_i_i2_11_fu_930_p1();
    void thread_tmp_i_i_i2_cast_12_fu_934_p1();
    void thread_tmp_i_i_i2_cast_fu_914_p1();
    void thread_tmp_i_i_i2_fu_908_p2();
    void thread_tmp_i_i_i3_13_fu_658_p1();
    void thread_tmp_i_i_i3_cast_14_fu_662_p1();
    void thread_tmp_i_i_i3_cast_fu_642_p1();
    void thread_tmp_i_i_i3_fu_636_p2();
    void thread_tmp_i_i_i_7_fu_528_p1();
    void thread_tmp_i_i_i_cast_8_fu_532_p1();
    void thread_tmp_i_i_i_cast_fu_512_p1();
    void thread_tmp_i_i_i_fu_506_p2();
    void thread_tmp_i_i_i_i1_cast4_fu_760_p1();
    void thread_tmp_i_i_i_i2_cast3_fu_890_p1();
    void thread_tmp_i_i_i_i3_cast2_fu_618_p1();
    void thread_tmp_i_i_i_i_cast5_fu_488_p1();
    void thread_tmp_s_fu_828_p1();
    void thread_ush_1_fu_788_p3();
    void thread_ush_2_fu_918_p3();
    void thread_ush_3_fu_646_p3();
    void thread_ush_fu_516_p3();
    void thread_x_address0();
    void thread_x_ce0();
    void thread_x_d0();
    void thread_x_new_address0();
    void thread_x_new_address1();
    void thread_x_new_ce0();
    void thread_x_new_ce1();
    void thread_x_new_d0();
    void thread_x_new_d1();
    void thread_x_new_we0();
    void thread_x_new_we1();
    void thread_x_we0();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
