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
#include "jacobi_HLS_dmul_6cud.h"
#include "jacobi_HLS_ddiv_6dEe.h"
#include "jacobi_HLS_sitodpeOg.h"
#include "jacobi_HLS_dsqrt_fYi.h"
#include "jacobi_HLS_x_prev.h"

namespace ap_rtl {

struct jacobi_HLS : public sc_module {
    // Port declarations 17
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > J_address0;
    sc_out< sc_logic > J_ce0;
    sc_in< sc_lv<32> > J_q0;
    sc_out< sc_lv<2> > b_address0;
    sc_out< sc_logic > b_ce0;
    sc_in< sc_lv<32> > b_q0;
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
    jacobi_HLS_x_prev* x_prev_U;
    jacobi_HLS_x_prev* x_new_U;
    jacobi_HLS_dadddsbkb<1,5,64,64,64>* jacobi_HLS_dadddsbkb_U1;
    jacobi_HLS_dmul_6cud<1,6,64,64,64>* jacobi_HLS_dmul_6cud_U2;
    jacobi_HLS_ddiv_6dEe<1,31,64,64,64>* jacobi_HLS_ddiv_6dEe_U3;
    jacobi_HLS_sitodpeOg<1,6,32,64>* jacobi_HLS_sitodpeOg_U4;
    jacobi_HLS_dsqrt_fYi<1,31,64,64,64>* jacobi_HLS_dsqrt_fYi_U5;
    sc_signal< sc_lv<107> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > sum_reg_272;
    sc_signal< sc_lv<5> > q_reg_284;
    sc_signal< sc_lv<64> > grp_fu_311_p1;
    sc_signal< sc_lv<64> > reg_321;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage3;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_state75_pp1_stage3_iter0;
    sc_signal< bool > ap_block_state80_pp1_stage3_iter1;
    sc_signal< bool > ap_block_state85_pp1_stage3_iter2;
    sc_signal< bool > ap_block_pp1_stage3_11001;
    sc_signal< sc_lv<1> > exitcond_reg_728;
    sc_signal< sc_lv<1> > exitcond_reg_728_pp1_iter1_reg;
    sc_signal< sc_lv<64> > grp_fu_295_p2;
    sc_signal< sc_lv<64> > reg_328;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<1> > tmp_13_reg_687;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_lv<1> > exitcond_reg_728_pp1_iter2_reg;
    sc_signal< sc_lv<5> > i_1_fu_340_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond3_fu_352_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<5> > t_1_fu_358_p2;
    sc_signal< sc_lv<5> > t_1_reg_634;
    sc_signal< sc_lv<3> > i_2_fu_370_p2;
    sc_signal< sc_lv<3> > i_2_reg_642;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > tmp_12_fu_394_p1;
    sc_signal< sc_lv<64> > tmp_12_reg_647;
    sc_signal< sc_lv<1> > exitcond2_fu_364_p2;
    sc_signal< sc_lv<32> > J_load_reg_663;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > x_prev_q0;
    sc_signal< sc_lv<32> > x_prev_load_1_reg_669;
    sc_signal< sc_lv<32> > tmp_14_fu_414_p2;
    sc_signal< sc_lv<32> > tmp_14_reg_674;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<3> > j_1_fu_424_p2;
    sc_signal< sc_lv<3> > j_1_reg_682;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<1> > tmp_13_fu_430_p2;
    sc_signal< sc_lv<1> > exitcond1_fu_418_p2;
    sc_signal< sc_lv<64> > sigma_1_fu_436_p3;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<64> > grp_fu_302_p2;
    sc_signal< sc_lv<64> > tmp_10_reg_707;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_lv<64> > grp_fu_306_p2;
    sc_signal< sc_lv<64> > x_assign_reg_712;
    sc_signal< sc_logic > ap_CS_fsm_state69;
    sc_signal< sc_lv<1> > p_Result_s_reg_717;
    sc_signal< sc_logic > ap_CS_fsm_state70;
    sc_signal< sc_lv<32> > p_Val2_5_fu_564_p3;
    sc_signal< sc_lv<32> > p_Val2_5_reg_722;
    sc_signal< sc_lv<1> > exitcond_fu_584_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state72_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state77_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state82_pp1_stage0_iter2;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<5> > q_1_fu_590_p2;
    sc_signal< sc_lv<5> > q_1_reg_732;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<64> > tmp_2_fu_596_p1;
    sc_signal< sc_lv<64> > tmp_2_reg_737;
    sc_signal< sc_lv<32> > tmp_3_fu_602_p2;
    sc_signal< sc_lv<32> > tmp_3_reg_752;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage1;
    sc_signal< bool > ap_block_state73_pp1_stage1_iter0;
    sc_signal< bool > ap_block_state78_pp1_stage1_iter1;
    sc_signal< bool > ap_block_state83_pp1_stage1_iter2;
    sc_signal< bool > ap_block_pp1_stage1_11001;
    sc_signal< sc_lv<32> > tmp_4_fu_608_p2;
    sc_signal< sc_lv<32> > tmp_4_reg_758;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage2;
    sc_signal< bool > ap_block_state74_pp1_stage2_iter0;
    sc_signal< bool > ap_block_state79_pp1_stage2_iter1;
    sc_signal< bool > ap_block_state84_pp1_stage2_iter2;
    sc_signal< bool > ap_block_pp1_stage2_11001;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state72;
    sc_signal< bool > ap_block_state76_pp1_stage4_iter0;
    sc_signal< bool > ap_block_state81_pp1_stage4_iter1;
    sc_signal< bool > ap_block_pp1_stage4_subdone;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage4;
    sc_signal< bool > ap_block_pp1_stage3_subdone;
    sc_signal< sc_lv<4> > x_prev_address0;
    sc_signal< sc_logic > x_prev_ce0;
    sc_signal< sc_logic > x_prev_we0;
    sc_signal< sc_lv<32> > x_prev_d0;
    sc_signal< sc_lv<4> > x_new_address0;
    sc_signal< sc_logic > x_new_ce0;
    sc_signal< sc_logic > x_new_we0;
    sc_signal< sc_lv<32> > x_new_d0;
    sc_signal< sc_lv<32> > x_new_q0;
    sc_signal< sc_lv<5> > i_reg_215;
    sc_signal< sc_lv<1> > exitcond4_fu_334_p2;
    sc_signal< sc_lv<5> > t_reg_226;
    sc_signal< sc_lv<3> > i1_reg_237;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state71;
    sc_signal< sc_lv<64> > sigma_reg_249;
    sc_signal< sc_lv<3> > j_reg_261;
    sc_signal< sc_lv<5> > ap_phi_mux_q_phi_fu_288_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<64> > tmp_fu_346_p1;
    sc_signal< sc_lv<64> > tmp_17_cast_fu_409_p1;
    sc_signal< bool > ap_block_pp1_stage1;
    sc_signal< sc_lv<32> > p_Val2_6_fu_577_p3;
    sc_signal< sc_lv<64> > grp_fu_295_p0;
    sc_signal< sc_lv<64> > grp_fu_295_p1;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< bool > ap_block_pp1_stage4;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_lv<32> > grp_fu_311_p0;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< bool > ap_block_pp1_stage3;
    sc_signal< sc_logic > ap_CS_fsm_state86;
    sc_signal< sc_lv<3> > tmp_9_fu_376_p2;
    sc_signal< sc_lv<5> > tmp_11_fu_382_p3;
    sc_signal< sc_lv<6> > tmp_12_cast_fu_399_p1;
    sc_signal< sc_lv<6> > tmp_16_cast_fu_390_p1;
    sc_signal< sc_lv<6> > tmp_16_fu_403_p2;
    sc_signal< sc_lv<64> > p_Val2_s_fu_443_p1;
    sc_signal< sc_lv<52> > tmp_V_1_fu_464_p1;
    sc_signal< sc_lv<54> > mantissa_V_fu_468_p4;
    sc_signal< sc_lv<11> > tmp_V_fu_454_p4;
    sc_signal< sc_lv<12> > tmp_i_i_i_i_cast2_fu_482_p1;
    sc_signal< sc_lv<12> > sh_assign_fu_486_p2;
    sc_signal< sc_lv<11> > tmp_i_i_i_fu_500_p2;
    sc_signal< sc_lv<1> > isNeg_fu_492_p3;
    sc_signal< sc_lv<12> > tmp_i_i_i_cast_fu_506_p1;
    sc_signal< sc_lv<12> > ush_fu_510_p3;
    sc_signal< sc_lv<32> > sh_assign_2_cast_fu_518_p1;
    sc_signal< sc_lv<54> > tmp_i_i_i_cast_12_fu_526_p1;
    sc_signal< sc_lv<137> > mantissa_V_1_cast_fu_478_p1;
    sc_signal< sc_lv<137> > tmp_i_i_i_11_fu_522_p1;
    sc_signal< sc_lv<54> > r_V_fu_530_p2;
    sc_signal< sc_lv<1> > tmp_22_fu_542_p3;
    sc_signal< sc_lv<137> > r_V_1_fu_536_p2;
    sc_signal< sc_lv<32> > tmp_17_fu_550_p1;
    sc_signal< sc_lv<32> > tmp_18_fu_554_p4;
    sc_signal< sc_lv<32> > result_V_1_fu_572_p2;
    sc_signal< bool > ap_block_pp1_stage2;
    sc_signal< sc_lv<2> > grp_fu_295_opcode;
    sc_signal< bool > ap_block_pp1_stage4_00001;
    sc_signal< sc_lv<64> > grp_fu_315_p2;
    sc_signal< sc_logic > ap_CS_fsm_state116;
    sc_signal< sc_lv<107> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp1_stage1_subdone;
    sc_signal< bool > ap_block_pp1_stage2_subdone;
    sc_signal< bool > ap_block_pp1_stage4_11001;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<107> ap_ST_fsm_state1;
    static const sc_lv<107> ap_ST_fsm_state2;
    static const sc_lv<107> ap_ST_fsm_state3;
    static const sc_lv<107> ap_ST_fsm_state4;
    static const sc_lv<107> ap_ST_fsm_state5;
    static const sc_lv<107> ap_ST_fsm_state6;
    static const sc_lv<107> ap_ST_fsm_state7;
    static const sc_lv<107> ap_ST_fsm_state8;
    static const sc_lv<107> ap_ST_fsm_state9;
    static const sc_lv<107> ap_ST_fsm_state10;
    static const sc_lv<107> ap_ST_fsm_state11;
    static const sc_lv<107> ap_ST_fsm_state12;
    static const sc_lv<107> ap_ST_fsm_state13;
    static const sc_lv<107> ap_ST_fsm_state14;
    static const sc_lv<107> ap_ST_fsm_state15;
    static const sc_lv<107> ap_ST_fsm_state16;
    static const sc_lv<107> ap_ST_fsm_state17;
    static const sc_lv<107> ap_ST_fsm_state18;
    static const sc_lv<107> ap_ST_fsm_state19;
    static const sc_lv<107> ap_ST_fsm_state20;
    static const sc_lv<107> ap_ST_fsm_state21;
    static const sc_lv<107> ap_ST_fsm_state22;
    static const sc_lv<107> ap_ST_fsm_state23;
    static const sc_lv<107> ap_ST_fsm_state24;
    static const sc_lv<107> ap_ST_fsm_state25;
    static const sc_lv<107> ap_ST_fsm_state26;
    static const sc_lv<107> ap_ST_fsm_state27;
    static const sc_lv<107> ap_ST_fsm_state28;
    static const sc_lv<107> ap_ST_fsm_state29;
    static const sc_lv<107> ap_ST_fsm_state30;
    static const sc_lv<107> ap_ST_fsm_state31;
    static const sc_lv<107> ap_ST_fsm_state32;
    static const sc_lv<107> ap_ST_fsm_state33;
    static const sc_lv<107> ap_ST_fsm_state34;
    static const sc_lv<107> ap_ST_fsm_state35;
    static const sc_lv<107> ap_ST_fsm_state36;
    static const sc_lv<107> ap_ST_fsm_state37;
    static const sc_lv<107> ap_ST_fsm_state38;
    static const sc_lv<107> ap_ST_fsm_state39;
    static const sc_lv<107> ap_ST_fsm_state40;
    static const sc_lv<107> ap_ST_fsm_state41;
    static const sc_lv<107> ap_ST_fsm_state42;
    static const sc_lv<107> ap_ST_fsm_state43;
    static const sc_lv<107> ap_ST_fsm_state44;
    static const sc_lv<107> ap_ST_fsm_state45;
    static const sc_lv<107> ap_ST_fsm_state46;
    static const sc_lv<107> ap_ST_fsm_state47;
    static const sc_lv<107> ap_ST_fsm_state48;
    static const sc_lv<107> ap_ST_fsm_state49;
    static const sc_lv<107> ap_ST_fsm_state50;
    static const sc_lv<107> ap_ST_fsm_state51;
    static const sc_lv<107> ap_ST_fsm_state52;
    static const sc_lv<107> ap_ST_fsm_state53;
    static const sc_lv<107> ap_ST_fsm_state54;
    static const sc_lv<107> ap_ST_fsm_state55;
    static const sc_lv<107> ap_ST_fsm_state56;
    static const sc_lv<107> ap_ST_fsm_state57;
    static const sc_lv<107> ap_ST_fsm_state58;
    static const sc_lv<107> ap_ST_fsm_state59;
    static const sc_lv<107> ap_ST_fsm_state60;
    static const sc_lv<107> ap_ST_fsm_state61;
    static const sc_lv<107> ap_ST_fsm_state62;
    static const sc_lv<107> ap_ST_fsm_state63;
    static const sc_lv<107> ap_ST_fsm_state64;
    static const sc_lv<107> ap_ST_fsm_state65;
    static const sc_lv<107> ap_ST_fsm_state66;
    static const sc_lv<107> ap_ST_fsm_state67;
    static const sc_lv<107> ap_ST_fsm_state68;
    static const sc_lv<107> ap_ST_fsm_state69;
    static const sc_lv<107> ap_ST_fsm_state70;
    static const sc_lv<107> ap_ST_fsm_state71;
    static const sc_lv<107> ap_ST_fsm_pp1_stage0;
    static const sc_lv<107> ap_ST_fsm_pp1_stage1;
    static const sc_lv<107> ap_ST_fsm_pp1_stage2;
    static const sc_lv<107> ap_ST_fsm_pp1_stage3;
    static const sc_lv<107> ap_ST_fsm_pp1_stage4;
    static const sc_lv<107> ap_ST_fsm_state86;
    static const sc_lv<107> ap_ST_fsm_state87;
    static const sc_lv<107> ap_ST_fsm_state88;
    static const sc_lv<107> ap_ST_fsm_state89;
    static const sc_lv<107> ap_ST_fsm_state90;
    static const sc_lv<107> ap_ST_fsm_state91;
    static const sc_lv<107> ap_ST_fsm_state92;
    static const sc_lv<107> ap_ST_fsm_state93;
    static const sc_lv<107> ap_ST_fsm_state94;
    static const sc_lv<107> ap_ST_fsm_state95;
    static const sc_lv<107> ap_ST_fsm_state96;
    static const sc_lv<107> ap_ST_fsm_state97;
    static const sc_lv<107> ap_ST_fsm_state98;
    static const sc_lv<107> ap_ST_fsm_state99;
    static const sc_lv<107> ap_ST_fsm_state100;
    static const sc_lv<107> ap_ST_fsm_state101;
    static const sc_lv<107> ap_ST_fsm_state102;
    static const sc_lv<107> ap_ST_fsm_state103;
    static const sc_lv<107> ap_ST_fsm_state104;
    static const sc_lv<107> ap_ST_fsm_state105;
    static const sc_lv<107> ap_ST_fsm_state106;
    static const sc_lv<107> ap_ST_fsm_state107;
    static const sc_lv<107> ap_ST_fsm_state108;
    static const sc_lv<107> ap_ST_fsm_state109;
    static const sc_lv<107> ap_ST_fsm_state110;
    static const sc_lv<107> ap_ST_fsm_state111;
    static const sc_lv<107> ap_ST_fsm_state112;
    static const sc_lv<107> ap_ST_fsm_state113;
    static const sc_lv<107> ap_ST_fsm_state114;
    static const sc_lv<107> ap_ST_fsm_state115;
    static const sc_lv<107> ap_ST_fsm_state116;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_4A;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_44;
    static const sc_lv<32> ap_const_lv32_45;
    static const sc_lv<32> ap_const_lv32_47;
    static const sc_lv<32> ap_const_lv32_48;
    static const sc_lv<32> ap_const_lv32_49;
    static const sc_lv<32> ap_const_lv32_4B;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_46;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<64> ap_const_lv64_3FF0000000000000;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_4C;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<12> ap_const_lv12_C01;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<11> ap_const_lv11_3FF;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_54;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_6A;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_J_address0();
    void thread_J_ce0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp1_stage1();
    void thread_ap_CS_fsm_pp1_stage2();
    void thread_ap_CS_fsm_pp1_stage3();
    void thread_ap_CS_fsm_pp1_stage4();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state116();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state69();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state70();
    void thread_ap_CS_fsm_state71();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state86();
    void thread_ap_CS_fsm_state9();
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
    void thread_ap_block_state72_pp1_stage0_iter0();
    void thread_ap_block_state73_pp1_stage1_iter0();
    void thread_ap_block_state74_pp1_stage2_iter0();
    void thread_ap_block_state75_pp1_stage3_iter0();
    void thread_ap_block_state76_pp1_stage4_iter0();
    void thread_ap_block_state77_pp1_stage0_iter1();
    void thread_ap_block_state78_pp1_stage1_iter1();
    void thread_ap_block_state79_pp1_stage2_iter1();
    void thread_ap_block_state80_pp1_stage3_iter1();
    void thread_ap_block_state81_pp1_stage4_iter1();
    void thread_ap_block_state82_pp1_stage0_iter2();
    void thread_ap_block_state83_pp1_stage1_iter2();
    void thread_ap_block_state84_pp1_stage2_iter2();
    void thread_ap_block_state85_pp1_stage3_iter2();
    void thread_ap_condition_pp1_exit_iter0_state72();
    void thread_ap_done();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_q_phi_fu_288_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_b_address0();
    void thread_b_ce0();
    void thread_exitcond1_fu_418_p2();
    void thread_exitcond2_fu_364_p2();
    void thread_exitcond3_fu_352_p2();
    void thread_exitcond4_fu_334_p2();
    void thread_exitcond_fu_584_p2();
    void thread_grp_fu_295_opcode();
    void thread_grp_fu_295_p0();
    void thread_grp_fu_295_p1();
    void thread_grp_fu_311_p0();
    void thread_i_1_fu_340_p2();
    void thread_i_2_fu_370_p2();
    void thread_isNeg_fu_492_p3();
    void thread_j_1_fu_424_p2();
    void thread_mantissa_V_1_cast_fu_478_p1();
    void thread_mantissa_V_fu_468_p4();
    void thread_p_Val2_5_fu_564_p3();
    void thread_p_Val2_6_fu_577_p3();
    void thread_p_Val2_s_fu_443_p1();
    void thread_q_1_fu_590_p2();
    void thread_r_V_1_fu_536_p2();
    void thread_r_V_fu_530_p2();
    void thread_result_V_1_fu_572_p2();
    void thread_sh_assign_2_cast_fu_518_p1();
    void thread_sh_assign_fu_486_p2();
    void thread_sigma_1_fu_436_p3();
    void thread_t_1_fu_358_p2();
    void thread_tmp_11_fu_382_p3();
    void thread_tmp_12_cast_fu_399_p1();
    void thread_tmp_12_fu_394_p1();
    void thread_tmp_13_fu_430_p2();
    void thread_tmp_14_fu_414_p2();
    void thread_tmp_16_cast_fu_390_p1();
    void thread_tmp_16_fu_403_p2();
    void thread_tmp_17_cast_fu_409_p1();
    void thread_tmp_17_fu_550_p1();
    void thread_tmp_18_fu_554_p4();
    void thread_tmp_22_fu_542_p3();
    void thread_tmp_2_fu_596_p1();
    void thread_tmp_3_fu_602_p2();
    void thread_tmp_4_fu_608_p2();
    void thread_tmp_9_fu_376_p2();
    void thread_tmp_V_1_fu_464_p1();
    void thread_tmp_V_fu_454_p4();
    void thread_tmp_fu_346_p1();
    void thread_tmp_i_i_i_11_fu_522_p1();
    void thread_tmp_i_i_i_cast_12_fu_526_p1();
    void thread_tmp_i_i_i_cast_fu_506_p1();
    void thread_tmp_i_i_i_fu_500_p2();
    void thread_tmp_i_i_i_i_cast2_fu_482_p1();
    void thread_ush_fu_510_p3();
    void thread_x_address0();
    void thread_x_ce0();
    void thread_x_d0();
    void thread_x_new_address0();
    void thread_x_new_ce0();
    void thread_x_new_d0();
    void thread_x_new_we0();
    void thread_x_prev_address0();
    void thread_x_prev_ce0();
    void thread_x_prev_d0();
    void thread_x_prev_we0();
    void thread_x_we0();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
