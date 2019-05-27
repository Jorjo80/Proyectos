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

#include "jacobi_HLS_dadddsbkb.h"
#include "jacobi_HLS_dsub_6cud.h"
#include "jacobi_HLS_dmul_6dEe.h"
#include "jacobi_HLS_ddiv_6eOg.h"
#include "jacobi_HLS_sitodpfYi.h"
#include "jacobi_HLS_dsqrt_g8j.h"
#include "jacobi_HLS_x_prev.h"

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
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<32> > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const3;
    sc_signal< sc_lv<64> > ap_var_for_const2;


    // Module declarations
    jacobi_HLS(sc_module_name name);
    SC_HAS_PROCESS(jacobi_HLS);

    ~jacobi_HLS();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    jacobi_HLS_x_prev* x_prev_U;
    jacobi_HLS_x_prev* x_new_U;
    jacobi_HLS_dadddsbkb<1,5,64,64,64>* jacobi_HLS_dadddsbkb_U1;
    jacobi_HLS_dsub_6cud<1,5,64,64,64>* jacobi_HLS_dsub_6cud_U2;
    jacobi_HLS_dmul_6dEe<1,6,64,64,64>* jacobi_HLS_dmul_6dEe_U3;
    jacobi_HLS_dmul_6dEe<1,6,64,64,64>* jacobi_HLS_dmul_6dEe_U4;
    jacobi_HLS_ddiv_6eOg<1,31,64,64,64>* jacobi_HLS_ddiv_6eOg_U5;
    jacobi_HLS_ddiv_6eOg<1,31,64,64,64>* jacobi_HLS_ddiv_6eOg_U6;
    jacobi_HLS_sitodpfYi<1,6,32,64>* jacobi_HLS_sitodpfYi_U7;
    jacobi_HLS_sitodpfYi<1,6,32,64>* jacobi_HLS_sitodpfYi_U8;
    jacobi_HLS_sitodpfYi<1,6,32,64>* jacobi_HLS_sitodpfYi_U9;
    jacobi_HLS_sitodpfYi<1,6,32,64>* jacobi_HLS_sitodpfYi_U10;
    jacobi_HLS_dsqrt_g8j<1,31,64,64,64>* jacobi_HLS_dsqrt_g8j_U11;
    sc_signal< sc_lv<92> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > sum_reg_340;
    sc_signal< sc_lv<5> > q_reg_352;
    sc_signal< sc_lv<32> > x_prev_q0;
    sc_signal< sc_lv<32> > reg_410;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > x_prev_q1;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > reg_415;
    sc_signal< sc_lv<64> > grp_fu_390_p1;
    sc_signal< sc_lv<64> > reg_420;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage3;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_state60_pp1_stage3_iter0;
    sc_signal< bool > ap_block_state65_pp1_stage3_iter1;
    sc_signal< bool > ap_block_state70_pp1_stage3_iter2;
    sc_signal< bool > ap_block_pp1_stage3_11001;
    sc_signal< sc_lv<1> > exitcond_reg_1328;
    sc_signal< sc_lv<1> > exitcond_reg_1328_pp1_iter1_reg;
    sc_signal< sc_lv<64> > grp_fu_393_p1;
    sc_signal< sc_lv<64> > reg_426;
    sc_signal< sc_lv<64> > reg_432;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<64> > reg_438;
    sc_signal< sc_lv<64> > grp_fu_363_p2;
    sc_signal< sc_lv<64> > reg_444;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_lv<1> > exitcond_reg_1328_pp1_iter2_reg;
    sc_signal< sc_lv<64> > grp_fu_380_p2;
    sc_signal< sc_lv<64> > reg_450;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< sc_logic > ap_CS_fsm_state54;
    sc_signal< sc_lv<64> > grp_fu_385_p2;
    sc_signal< sc_lv<64> > reg_454;
    sc_signal< sc_lv<5> > i_1_fu_464_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > J_load_reg_1130;
    sc_signal< sc_lv<32> > J_load_1_reg_1136;
    sc_signal< sc_lv<32> > tmp_10_fu_476_p2;
    sc_signal< sc_lv<32> > tmp_10_reg_1152;
    sc_signal< sc_lv<32> > tmp_15_0_1_1_fu_481_p2;
    sc_signal< sc_lv<32> > tmp_15_0_1_1_reg_1162;
    sc_signal< sc_lv<32> > J_load_2_reg_1172;
    sc_signal< sc_lv<32> > J_load_3_reg_1178;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<32> > tmp_15_0_2_2_fu_486_p2;
    sc_signal< sc_lv<32> > tmp_15_0_2_2_reg_1194;
    sc_signal< sc_lv<32> > tmp_15_0_3_3_fu_491_p2;
    sc_signal< sc_lv<32> > tmp_15_0_3_3_reg_1204;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<64> > grp_fu_397_p1;
    sc_signal< sc_lv<64> > tmp_16_0_1_1_reg_1224;
    sc_signal< sc_lv<64> > grp_fu_400_p1;
    sc_signal< sc_lv<64> > tmp_7_0_1_reg_1229;
    sc_signal< sc_lv<64> > tmp_16_0_3_3_reg_1234;
    sc_signal< sc_lv<64> > tmp_7_0_3_reg_1239;
    sc_signal< sc_lv<64> > grp_fu_367_p2;
    sc_signal< sc_lv<64> > tmp_8_0_1_reg_1244;
    sc_signal< sc_lv<64> > tmp_8_0_2_reg_1249;
    sc_signal< sc_lv<64> > tmp_8_0_3_reg_1254;
    sc_signal< sc_lv<64> > grp_fu_372_p2;
    sc_signal< sc_lv<64> > tmp_9_reg_1259;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<64> > grp_fu_376_p2;
    sc_signal< sc_lv<64> > tmp_10_0_1_reg_1264;
    sc_signal< sc_lv<64> > tmp_10_0_2_reg_1269;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<64> > tmp_10_0_3_reg_1274;
    sc_signal< sc_lv<1> > p_Result_s_reg_1284;
    sc_signal< sc_lv<32> > p_Val2_20_fu_618_p3;
    sc_signal< sc_lv<32> > p_Val2_20_reg_1289;
    sc_signal< sc_lv<1> > p_Result_1_reg_1295;
    sc_signal< sc_lv<32> > p_Val2_22_fu_748_p3;
    sc_signal< sc_lv<32> > p_Val2_22_reg_1300;
    sc_signal< sc_lv<1> > p_Result_2_reg_1306;
    sc_signal< sc_logic > ap_CS_fsm_state55;
    sc_signal< sc_lv<32> > p_Val2_24_fu_902_p3;
    sc_signal< sc_lv<32> > p_Val2_24_reg_1311;
    sc_signal< sc_lv<1> > p_Result_3_reg_1317;
    sc_signal< sc_lv<32> > p_Val2_26_fu_1032_p3;
    sc_signal< sc_lv<32> > p_Val2_26_reg_1322;
    sc_signal< sc_lv<1> > exitcond_fu_1064_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state57_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state62_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state67_pp1_stage0_iter2;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<5> > q_1_fu_1070_p2;
    sc_signal< sc_lv<5> > q_1_reg_1332;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<64> > tmp_2_fu_1076_p1;
    sc_signal< sc_lv<64> > tmp_2_reg_1337;
    sc_signal< sc_lv<32> > tmp_3_fu_1082_p2;
    sc_signal< sc_lv<32> > tmp_3_reg_1352;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage1;
    sc_signal< bool > ap_block_state58_pp1_stage1_iter0;
    sc_signal< bool > ap_block_state63_pp1_stage1_iter1;
    sc_signal< bool > ap_block_state68_pp1_stage1_iter2;
    sc_signal< bool > ap_block_pp1_stage1_11001;
    sc_signal< sc_lv<32> > tmp_4_fu_1088_p2;
    sc_signal< sc_lv<32> > tmp_4_reg_1358;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage2;
    sc_signal< bool > ap_block_state59_pp1_stage2_iter0;
    sc_signal< bool > ap_block_state64_pp1_stage2_iter1;
    sc_signal< bool > ap_block_state69_pp1_stage2_iter2;
    sc_signal< bool > ap_block_pp1_stage2_11001;
    sc_signal< sc_logic > ap_CS_fsm_state56;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state57;
    sc_signal< bool > ap_block_state61_pp1_stage4_iter0;
    sc_signal< bool > ap_block_state66_pp1_stage4_iter1;
    sc_signal< bool > ap_block_pp1_stage4_subdone;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage4;
    sc_signal< bool > ap_block_pp1_stage3_subdone;
    sc_signal< sc_lv<4> > x_prev_address0;
    sc_signal< sc_logic > x_prev_ce0;
    sc_signal< sc_logic > x_prev_we0;
    sc_signal< sc_lv<4> > x_prev_address1;
    sc_signal< sc_logic > x_prev_ce1;
    sc_signal< sc_logic > x_prev_we1;
    sc_signal< sc_lv<4> > x_new_address0;
    sc_signal< sc_logic > x_new_ce0;
    sc_signal< sc_logic > x_new_we0;
    sc_signal< sc_lv<32> > x_new_d0;
    sc_signal< sc_lv<32> > x_new_q0;
    sc_signal< sc_lv<4> > x_new_address1;
    sc_signal< sc_logic > x_new_ce1;
    sc_signal< sc_logic > x_new_we1;
    sc_signal< sc_lv<32> > x_new_d1;
    sc_signal< sc_lv<32> > x_new_q1;
    sc_signal< sc_lv<5> > i_reg_329;
    sc_signal< sc_lv<1> > exitcond4_fu_458_p2;
    sc_signal< sc_lv<5> > ap_phi_mux_q_phi_fu_356_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<64> > tmp_fu_470_p1;
    sc_signal< bool > ap_block_pp1_stage1;
    sc_signal< sc_lv<32> > p_Val2_21_fu_761_p3;
    sc_signal< sc_lv<32> > p_Val2_23_fu_773_p3;
    sc_signal< sc_lv<32> > p_Val2_25_fu_1045_p3;
    sc_signal< sc_lv<32> > p_Val2_27_fu_1057_p3;
    sc_signal< sc_lv<64> > grp_fu_363_p0;
    sc_signal< sc_lv<64> > grp_fu_363_p1;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< bool > ap_block_pp1_stage4;
    sc_signal< sc_lv<64> > grp_fu_367_p0;
    sc_signal< sc_lv<64> > grp_fu_367_p1;
    sc_signal< sc_lv<64> > grp_fu_372_p0;
    sc_signal< sc_lv<64> > grp_fu_372_p1;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<64> > grp_fu_376_p0;
    sc_signal< sc_lv<64> > grp_fu_376_p1;
    sc_signal< sc_lv<64> > grp_fu_380_p1;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<64> > grp_fu_385_p1;
    sc_signal< sc_lv<32> > grp_fu_390_p0;
    sc_signal< bool > ap_block_pp1_stage3;
    sc_signal< sc_lv<32> > grp_fu_393_p0;
    sc_signal< sc_lv<32> > grp_fu_397_p0;
    sc_signal< sc_logic > ap_CS_fsm_state71;
    sc_signal< sc_lv<64> > p_Val2_s_fu_496_p1;
    sc_signal< sc_lv<52> > tmp_V_1_fu_518_p1;
    sc_signal< sc_lv<54> > mantissa_V_fu_522_p4;
    sc_signal< sc_lv<11> > tmp_V_fu_508_p4;
    sc_signal< sc_lv<12> > tmp_i_i_i_i_cast5_fu_536_p1;
    sc_signal< sc_lv<12> > sh_assign_fu_540_p2;
    sc_signal< sc_lv<11> > tmp_i_i_i_fu_554_p2;
    sc_signal< sc_lv<1> > isNeg_fu_546_p3;
    sc_signal< sc_lv<12> > tmp_i_i_i_cast_fu_560_p1;
    sc_signal< sc_lv<12> > ush_fu_564_p3;
    sc_signal< sc_lv<32> > sh_assign_2_cast_fu_572_p1;
    sc_signal< sc_lv<54> > tmp_i_i_i_cast_8_fu_580_p1;
    sc_signal< sc_lv<137> > mantissa_V_1_cast_fu_532_p1;
    sc_signal< sc_lv<137> > tmp_i_i_i_7_fu_576_p1;
    sc_signal< sc_lv<54> > r_V_fu_584_p2;
    sc_signal< sc_lv<1> > tmp_19_fu_596_p3;
    sc_signal< sc_lv<137> > r_V_1_fu_590_p2;
    sc_signal< sc_lv<32> > tmp_12_fu_604_p1;
    sc_signal< sc_lv<32> > tmp_13_fu_608_p4;
    sc_signal< sc_lv<64> > p_Val2_5_fu_626_p1;
    sc_signal< sc_lv<52> > tmp_V_3_fu_648_p1;
    sc_signal< sc_lv<54> > mantissa_V_1_fu_652_p4;
    sc_signal< sc_lv<11> > tmp_V_2_fu_638_p4;
    sc_signal< sc_lv<12> > tmp_i_i_i_i1_cast4_fu_666_p1;
    sc_signal< sc_lv<12> > sh_assign_3_fu_670_p2;
    sc_signal< sc_lv<11> > tmp_i_i_i1_fu_684_p2;
    sc_signal< sc_lv<1> > isNeg_1_fu_676_p3;
    sc_signal< sc_lv<12> > tmp_i_i_i1_cast_fu_690_p1;
    sc_signal< sc_lv<12> > ush_1_fu_694_p3;
    sc_signal< sc_lv<32> > sh_assign_5_cast_fu_702_p1;
    sc_signal< sc_lv<54> > tmp_i_i_i1_cast_10_fu_710_p1;
    sc_signal< sc_lv<137> > mantissa_V_3_cast_fu_662_p1;
    sc_signal< sc_lv<137> > tmp_i_i_i1_9_fu_706_p1;
    sc_signal< sc_lv<54> > r_V_2_fu_714_p2;
    sc_signal< sc_lv<1> > tmp_27_fu_726_p3;
    sc_signal< sc_lv<137> > r_V_3_fu_720_p2;
    sc_signal< sc_lv<32> > tmp_14_fu_734_p1;
    sc_signal< sc_lv<32> > tmp_15_fu_738_p4;
    sc_signal< sc_lv<32> > result_V_1_fu_756_p2;
    sc_signal< sc_lv<32> > result_V_3_fu_768_p2;
    sc_signal< sc_lv<64> > p_Val2_10_fu_780_p1;
    sc_signal< sc_lv<52> > tmp_V_5_fu_802_p1;
    sc_signal< sc_lv<54> > mantissa_V_2_fu_806_p4;
    sc_signal< sc_lv<11> > tmp_V_4_fu_792_p4;
    sc_signal< sc_lv<12> > tmp_i_i_i_i2_cast3_fu_820_p1;
    sc_signal< sc_lv<12> > sh_assign_6_fu_824_p2;
    sc_signal< sc_lv<11> > tmp_i_i_i2_fu_838_p2;
    sc_signal< sc_lv<1> > isNeg_2_fu_830_p3;
    sc_signal< sc_lv<12> > tmp_i_i_i2_cast_fu_844_p1;
    sc_signal< sc_lv<12> > ush_2_fu_848_p3;
    sc_signal< sc_lv<32> > sh_assign_8_cast_fu_856_p1;
    sc_signal< sc_lv<54> > tmp_i_i_i2_cast_12_fu_864_p1;
    sc_signal< sc_lv<137> > mantissa_V_5_cast_fu_816_p1;
    sc_signal< sc_lv<137> > tmp_i_i_i2_11_fu_860_p1;
    sc_signal< sc_lv<54> > r_V_4_fu_868_p2;
    sc_signal< sc_lv<1> > tmp_31_fu_880_p3;
    sc_signal< sc_lv<137> > r_V_5_fu_874_p2;
    sc_signal< sc_lv<32> > tmp_16_fu_888_p1;
    sc_signal< sc_lv<32> > tmp_17_fu_892_p4;
    sc_signal< sc_lv<64> > p_Val2_15_fu_910_p1;
    sc_signal< sc_lv<52> > tmp_V_7_fu_932_p1;
    sc_signal< sc_lv<54> > mantissa_V_3_fu_936_p4;
    sc_signal< sc_lv<11> > tmp_V_6_fu_922_p4;
    sc_signal< sc_lv<12> > tmp_i_i_i_i3_cast2_fu_950_p1;
    sc_signal< sc_lv<12> > sh_assign_9_fu_954_p2;
    sc_signal< sc_lv<11> > tmp_i_i_i3_fu_968_p2;
    sc_signal< sc_lv<1> > isNeg_3_fu_960_p3;
    sc_signal< sc_lv<12> > tmp_i_i_i3_cast_fu_974_p1;
    sc_signal< sc_lv<12> > ush_3_fu_978_p3;
    sc_signal< sc_lv<32> > sh_assign_11_cast_fu_986_p1;
    sc_signal< sc_lv<54> > tmp_i_i_i3_cast_14_fu_994_p1;
    sc_signal< sc_lv<137> > mantissa_V_7_cast_fu_946_p1;
    sc_signal< sc_lv<137> > tmp_i_i_i3_13_fu_990_p1;
    sc_signal< sc_lv<54> > r_V_6_fu_998_p2;
    sc_signal< sc_lv<1> > tmp_35_fu_1010_p3;
    sc_signal< sc_lv<137> > r_V_7_fu_1004_p2;
    sc_signal< sc_lv<32> > tmp_18_fu_1018_p1;
    sc_signal< sc_lv<32> > tmp_20_fu_1022_p4;
    sc_signal< sc_lv<32> > result_V_5_fu_1040_p2;
    sc_signal< sc_lv<32> > result_V_7_fu_1052_p2;
    sc_signal< bool > ap_block_pp1_stage2;
    sc_signal< sc_lv<2> > grp_fu_363_opcode;
    sc_signal< bool > ap_block_pp1_stage4_00001;
    sc_signal< sc_lv<64> > grp_fu_404_p2;
    sc_signal< sc_logic > ap_CS_fsm_state101;
    sc_signal< sc_lv<92> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp1_stage1_subdone;
    sc_signal< bool > ap_block_pp1_stage2_subdone;
    sc_signal< bool > ap_block_pp1_stage4_11001;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<92> ap_ST_fsm_state1;
    static const sc_lv<92> ap_ST_fsm_state2;
    static const sc_lv<92> ap_ST_fsm_state3;
    static const sc_lv<92> ap_ST_fsm_state4;
    static const sc_lv<92> ap_ST_fsm_state5;
    static const sc_lv<92> ap_ST_fsm_state6;
    static const sc_lv<92> ap_ST_fsm_state7;
    static const sc_lv<92> ap_ST_fsm_state8;
    static const sc_lv<92> ap_ST_fsm_state9;
    static const sc_lv<92> ap_ST_fsm_state10;
    static const sc_lv<92> ap_ST_fsm_state11;
    static const sc_lv<92> ap_ST_fsm_state12;
    static const sc_lv<92> ap_ST_fsm_state13;
    static const sc_lv<92> ap_ST_fsm_state14;
    static const sc_lv<92> ap_ST_fsm_state15;
    static const sc_lv<92> ap_ST_fsm_state16;
    static const sc_lv<92> ap_ST_fsm_state17;
    static const sc_lv<92> ap_ST_fsm_state18;
    static const sc_lv<92> ap_ST_fsm_state19;
    static const sc_lv<92> ap_ST_fsm_state20;
    static const sc_lv<92> ap_ST_fsm_state21;
    static const sc_lv<92> ap_ST_fsm_state22;
    static const sc_lv<92> ap_ST_fsm_state23;
    static const sc_lv<92> ap_ST_fsm_state24;
    static const sc_lv<92> ap_ST_fsm_state25;
    static const sc_lv<92> ap_ST_fsm_state26;
    static const sc_lv<92> ap_ST_fsm_state27;
    static const sc_lv<92> ap_ST_fsm_state28;
    static const sc_lv<92> ap_ST_fsm_state29;
    static const sc_lv<92> ap_ST_fsm_state30;
    static const sc_lv<92> ap_ST_fsm_state31;
    static const sc_lv<92> ap_ST_fsm_state32;
    static const sc_lv<92> ap_ST_fsm_state33;
    static const sc_lv<92> ap_ST_fsm_state34;
    static const sc_lv<92> ap_ST_fsm_state35;
    static const sc_lv<92> ap_ST_fsm_state36;
    static const sc_lv<92> ap_ST_fsm_state37;
    static const sc_lv<92> ap_ST_fsm_state38;
    static const sc_lv<92> ap_ST_fsm_state39;
    static const sc_lv<92> ap_ST_fsm_state40;
    static const sc_lv<92> ap_ST_fsm_state41;
    static const sc_lv<92> ap_ST_fsm_state42;
    static const sc_lv<92> ap_ST_fsm_state43;
    static const sc_lv<92> ap_ST_fsm_state44;
    static const sc_lv<92> ap_ST_fsm_state45;
    static const sc_lv<92> ap_ST_fsm_state46;
    static const sc_lv<92> ap_ST_fsm_state47;
    static const sc_lv<92> ap_ST_fsm_state48;
    static const sc_lv<92> ap_ST_fsm_state49;
    static const sc_lv<92> ap_ST_fsm_state50;
    static const sc_lv<92> ap_ST_fsm_state51;
    static const sc_lv<92> ap_ST_fsm_state52;
    static const sc_lv<92> ap_ST_fsm_state53;
    static const sc_lv<92> ap_ST_fsm_state54;
    static const sc_lv<92> ap_ST_fsm_state55;
    static const sc_lv<92> ap_ST_fsm_state56;
    static const sc_lv<92> ap_ST_fsm_pp1_stage0;
    static const sc_lv<92> ap_ST_fsm_pp1_stage1;
    static const sc_lv<92> ap_ST_fsm_pp1_stage2;
    static const sc_lv<92> ap_ST_fsm_pp1_stage3;
    static const sc_lv<92> ap_ST_fsm_pp1_stage4;
    static const sc_lv<92> ap_ST_fsm_state71;
    static const sc_lv<92> ap_ST_fsm_state72;
    static const sc_lv<92> ap_ST_fsm_state73;
    static const sc_lv<92> ap_ST_fsm_state74;
    static const sc_lv<92> ap_ST_fsm_state75;
    static const sc_lv<92> ap_ST_fsm_state76;
    static const sc_lv<92> ap_ST_fsm_state77;
    static const sc_lv<92> ap_ST_fsm_state78;
    static const sc_lv<92> ap_ST_fsm_state79;
    static const sc_lv<92> ap_ST_fsm_state80;
    static const sc_lv<92> ap_ST_fsm_state81;
    static const sc_lv<92> ap_ST_fsm_state82;
    static const sc_lv<92> ap_ST_fsm_state83;
    static const sc_lv<92> ap_ST_fsm_state84;
    static const sc_lv<92> ap_ST_fsm_state85;
    static const sc_lv<92> ap_ST_fsm_state86;
    static const sc_lv<92> ap_ST_fsm_state87;
    static const sc_lv<92> ap_ST_fsm_state88;
    static const sc_lv<92> ap_ST_fsm_state89;
    static const sc_lv<92> ap_ST_fsm_state90;
    static const sc_lv<92> ap_ST_fsm_state91;
    static const sc_lv<92> ap_ST_fsm_state92;
    static const sc_lv<92> ap_ST_fsm_state93;
    static const sc_lv<92> ap_ST_fsm_state94;
    static const sc_lv<92> ap_ST_fsm_state95;
    static const sc_lv<92> ap_ST_fsm_state96;
    static const sc_lv<92> ap_ST_fsm_state97;
    static const sc_lv<92> ap_ST_fsm_state98;
    static const sc_lv<92> ap_ST_fsm_state99;
    static const sc_lv<92> ap_ST_fsm_state100;
    static const sc_lv<92> ap_ST_fsm_state101;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_3B;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<32> ap_const_lv32_3A;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3C;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFC;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<64> ap_const_lv64_3FF0000000000000;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_3D;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<12> ap_const_lv12_C01;
    static const sc_lv<11> ap_const_lv11_3FF;
    static const sc_lv<32> ap_const_lv32_54;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_5B;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_J_address0();
    void thread_J_address1();
    void thread_J_ce0();
    void thread_J_ce1();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp1_stage1();
    void thread_ap_CS_fsm_pp1_stage2();
    void thread_ap_CS_fsm_pp1_stage3();
    void thread_ap_CS_fsm_pp1_stage4();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state101();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state53();
    void thread_ap_CS_fsm_state54();
    void thread_ap_CS_fsm_state55();
    void thread_ap_CS_fsm_state56();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state71();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp1_stage1();
    void thread_ap_block_pp1_stage1_11001();
    void thread_ap_block_pp1_stage1_subdone();
    void thread_ap_block_pp1_stage2();
    void thread_ap_block_pp1_stage2_11001();
    void thread_ap_block_pp1_stage2_subdone();
    void thread_ap_block_pp1_stage3();
    void thread_ap_block_pp1_stage3_11001();
    void thread_ap_block_pp1_stage3_subdone();
    void thread_ap_block_pp1_stage4();
    void thread_ap_block_pp1_stage4_00001();
    void thread_ap_block_pp1_stage4_11001();
    void thread_ap_block_pp1_stage4_subdone();
    void thread_ap_block_state57_pp1_stage0_iter0();
    void thread_ap_block_state58_pp1_stage1_iter0();
    void thread_ap_block_state59_pp1_stage2_iter0();
    void thread_ap_block_state60_pp1_stage3_iter0();
    void thread_ap_block_state61_pp1_stage4_iter0();
    void thread_ap_block_state62_pp1_stage0_iter1();
    void thread_ap_block_state63_pp1_stage1_iter1();
    void thread_ap_block_state64_pp1_stage2_iter1();
    void thread_ap_block_state65_pp1_stage3_iter1();
    void thread_ap_block_state66_pp1_stage4_iter1();
    void thread_ap_block_state67_pp1_stage0_iter2();
    void thread_ap_block_state68_pp1_stage1_iter2();
    void thread_ap_block_state69_pp1_stage2_iter2();
    void thread_ap_block_state70_pp1_stage3_iter2();
    void thread_ap_condition_pp1_exit_iter0_state57();
    void thread_ap_done();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_q_phi_fu_356_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_b_address0();
    void thread_b_address1();
    void thread_b_ce0();
    void thread_b_ce1();
    void thread_exitcond4_fu_458_p2();
    void thread_exitcond_fu_1064_p2();
    void thread_grp_fu_363_opcode();
    void thread_grp_fu_363_p0();
    void thread_grp_fu_363_p1();
    void thread_grp_fu_367_p0();
    void thread_grp_fu_367_p1();
    void thread_grp_fu_372_p0();
    void thread_grp_fu_372_p1();
    void thread_grp_fu_376_p0();
    void thread_grp_fu_376_p1();
    void thread_grp_fu_380_p1();
    void thread_grp_fu_385_p1();
    void thread_grp_fu_390_p0();
    void thread_grp_fu_393_p0();
    void thread_grp_fu_397_p0();
    void thread_i_1_fu_464_p2();
    void thread_isNeg_1_fu_676_p3();
    void thread_isNeg_2_fu_830_p3();
    void thread_isNeg_3_fu_960_p3();
    void thread_isNeg_fu_546_p3();
    void thread_mantissa_V_1_cast_fu_532_p1();
    void thread_mantissa_V_1_fu_652_p4();
    void thread_mantissa_V_2_fu_806_p4();
    void thread_mantissa_V_3_cast_fu_662_p1();
    void thread_mantissa_V_3_fu_936_p4();
    void thread_mantissa_V_5_cast_fu_816_p1();
    void thread_mantissa_V_7_cast_fu_946_p1();
    void thread_mantissa_V_fu_522_p4();
    void thread_p_Val2_10_fu_780_p1();
    void thread_p_Val2_15_fu_910_p1();
    void thread_p_Val2_20_fu_618_p3();
    void thread_p_Val2_21_fu_761_p3();
    void thread_p_Val2_22_fu_748_p3();
    void thread_p_Val2_23_fu_773_p3();
    void thread_p_Val2_24_fu_902_p3();
    void thread_p_Val2_25_fu_1045_p3();
    void thread_p_Val2_26_fu_1032_p3();
    void thread_p_Val2_27_fu_1057_p3();
    void thread_p_Val2_5_fu_626_p1();
    void thread_p_Val2_s_fu_496_p1();
    void thread_q_1_fu_1070_p2();
    void thread_r_V_1_fu_590_p2();
    void thread_r_V_2_fu_714_p2();
    void thread_r_V_3_fu_720_p2();
    void thread_r_V_4_fu_868_p2();
    void thread_r_V_5_fu_874_p2();
    void thread_r_V_6_fu_998_p2();
    void thread_r_V_7_fu_1004_p2();
    void thread_r_V_fu_584_p2();
    void thread_result_V_1_fu_756_p2();
    void thread_result_V_3_fu_768_p2();
    void thread_result_V_5_fu_1040_p2();
    void thread_result_V_7_fu_1052_p2();
    void thread_sh_assign_11_cast_fu_986_p1();
    void thread_sh_assign_2_cast_fu_572_p1();
    void thread_sh_assign_3_fu_670_p2();
    void thread_sh_assign_5_cast_fu_702_p1();
    void thread_sh_assign_6_fu_824_p2();
    void thread_sh_assign_8_cast_fu_856_p1();
    void thread_sh_assign_9_fu_954_p2();
    void thread_sh_assign_fu_540_p2();
    void thread_tmp_10_fu_476_p2();
    void thread_tmp_12_fu_604_p1();
    void thread_tmp_13_fu_608_p4();
    void thread_tmp_14_fu_734_p1();
    void thread_tmp_15_0_1_1_fu_481_p2();
    void thread_tmp_15_0_2_2_fu_486_p2();
    void thread_tmp_15_0_3_3_fu_491_p2();
    void thread_tmp_15_fu_738_p4();
    void thread_tmp_16_fu_888_p1();
    void thread_tmp_17_fu_892_p4();
    void thread_tmp_18_fu_1018_p1();
    void thread_tmp_19_fu_596_p3();
    void thread_tmp_20_fu_1022_p4();
    void thread_tmp_27_fu_726_p3();
    void thread_tmp_2_fu_1076_p1();
    void thread_tmp_31_fu_880_p3();
    void thread_tmp_35_fu_1010_p3();
    void thread_tmp_3_fu_1082_p2();
    void thread_tmp_4_fu_1088_p2();
    void thread_tmp_V_1_fu_518_p1();
    void thread_tmp_V_2_fu_638_p4();
    void thread_tmp_V_3_fu_648_p1();
    void thread_tmp_V_4_fu_792_p4();
    void thread_tmp_V_5_fu_802_p1();
    void thread_tmp_V_6_fu_922_p4();
    void thread_tmp_V_7_fu_932_p1();
    void thread_tmp_V_fu_508_p4();
    void thread_tmp_fu_470_p1();
    void thread_tmp_i_i_i1_9_fu_706_p1();
    void thread_tmp_i_i_i1_cast_10_fu_710_p1();
    void thread_tmp_i_i_i1_cast_fu_690_p1();
    void thread_tmp_i_i_i1_fu_684_p2();
    void thread_tmp_i_i_i2_11_fu_860_p1();
    void thread_tmp_i_i_i2_cast_12_fu_864_p1();
    void thread_tmp_i_i_i2_cast_fu_844_p1();
    void thread_tmp_i_i_i2_fu_838_p2();
    void thread_tmp_i_i_i3_13_fu_990_p1();
    void thread_tmp_i_i_i3_cast_14_fu_994_p1();
    void thread_tmp_i_i_i3_cast_fu_974_p1();
    void thread_tmp_i_i_i3_fu_968_p2();
    void thread_tmp_i_i_i_7_fu_576_p1();
    void thread_tmp_i_i_i_cast_8_fu_580_p1();
    void thread_tmp_i_i_i_cast_fu_560_p1();
    void thread_tmp_i_i_i_fu_554_p2();
    void thread_tmp_i_i_i_i1_cast4_fu_666_p1();
    void thread_tmp_i_i_i_i2_cast3_fu_820_p1();
    void thread_tmp_i_i_i_i3_cast2_fu_950_p1();
    void thread_tmp_i_i_i_i_cast5_fu_536_p1();
    void thread_ush_1_fu_694_p3();
    void thread_ush_2_fu_848_p3();
    void thread_ush_3_fu_978_p3();
    void thread_ush_fu_564_p3();
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
    void thread_x_prev_address0();
    void thread_x_prev_address1();
    void thread_x_prev_ce0();
    void thread_x_prev_ce1();
    void thread_x_prev_we0();
    void thread_x_prev_we1();
    void thread_x_we0();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif