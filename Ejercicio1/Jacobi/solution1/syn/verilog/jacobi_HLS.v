// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="jacobi_HLS,hls_ip_2018_3,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.621000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=14,HLS_SYN_FF=5146,HLS_SYN_LUT=7568,HLS_VERSION=2018_3}" *)

module jacobi_HLS (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        J_address0,
        J_ce0,
        J_q0,
        b_address0,
        b_ce0,
        b_q0,
        n,
        iter,
        x_address0,
        x_ce0,
        x_we0,
        x_d0,
        error
);

parameter    ap_ST_fsm_state1 = 63'd1;
parameter    ap_ST_fsm_state2 = 63'd2;
parameter    ap_ST_fsm_state3 = 63'd4;
parameter    ap_ST_fsm_state4 = 63'd8;
parameter    ap_ST_fsm_state5 = 63'd16;
parameter    ap_ST_fsm_state6 = 63'd32;
parameter    ap_ST_fsm_state7 = 63'd64;
parameter    ap_ST_fsm_state8 = 63'd128;
parameter    ap_ST_fsm_state9 = 63'd256;
parameter    ap_ST_fsm_state10 = 63'd512;
parameter    ap_ST_fsm_state11 = 63'd1024;
parameter    ap_ST_fsm_state12 = 63'd2048;
parameter    ap_ST_fsm_state13 = 63'd4096;
parameter    ap_ST_fsm_state14 = 63'd8192;
parameter    ap_ST_fsm_state15 = 63'd16384;
parameter    ap_ST_fsm_state16 = 63'd32768;
parameter    ap_ST_fsm_state17 = 63'd65536;
parameter    ap_ST_fsm_state18 = 63'd131072;
parameter    ap_ST_fsm_state19 = 63'd262144;
parameter    ap_ST_fsm_state20 = 63'd524288;
parameter    ap_ST_fsm_state21 = 63'd1048576;
parameter    ap_ST_fsm_state22 = 63'd2097152;
parameter    ap_ST_fsm_state23 = 63'd4194304;
parameter    ap_ST_fsm_state24 = 63'd8388608;
parameter    ap_ST_fsm_state25 = 63'd16777216;
parameter    ap_ST_fsm_state26 = 63'd33554432;
parameter    ap_ST_fsm_state27 = 63'd67108864;
parameter    ap_ST_fsm_state28 = 63'd134217728;
parameter    ap_ST_fsm_state29 = 63'd268435456;
parameter    ap_ST_fsm_state30 = 63'd536870912;
parameter    ap_ST_fsm_state31 = 63'd1073741824;
parameter    ap_ST_fsm_state32 = 63'd2147483648;
parameter    ap_ST_fsm_state33 = 63'd4294967296;
parameter    ap_ST_fsm_state34 = 63'd8589934592;
parameter    ap_ST_fsm_state35 = 63'd17179869184;
parameter    ap_ST_fsm_state36 = 63'd34359738368;
parameter    ap_ST_fsm_state37 = 63'd68719476736;
parameter    ap_ST_fsm_state38 = 63'd137438953472;
parameter    ap_ST_fsm_state39 = 63'd274877906944;
parameter    ap_ST_fsm_state40 = 63'd549755813888;
parameter    ap_ST_fsm_state41 = 63'd1099511627776;
parameter    ap_ST_fsm_state42 = 63'd2199023255552;
parameter    ap_ST_fsm_state43 = 63'd4398046511104;
parameter    ap_ST_fsm_state44 = 63'd8796093022208;
parameter    ap_ST_fsm_state45 = 63'd17592186044416;
parameter    ap_ST_fsm_state46 = 63'd35184372088832;
parameter    ap_ST_fsm_state47 = 63'd70368744177664;
parameter    ap_ST_fsm_state48 = 63'd140737488355328;
parameter    ap_ST_fsm_state49 = 63'd281474976710656;
parameter    ap_ST_fsm_state50 = 63'd562949953421312;
parameter    ap_ST_fsm_state51 = 63'd1125899906842624;
parameter    ap_ST_fsm_state52 = 63'd2251799813685248;
parameter    ap_ST_fsm_state53 = 63'd4503599627370496;
parameter    ap_ST_fsm_state54 = 63'd9007199254740992;
parameter    ap_ST_fsm_state55 = 63'd18014398509481984;
parameter    ap_ST_fsm_state56 = 63'd36028797018963968;
parameter    ap_ST_fsm_state57 = 63'd72057594037927936;
parameter    ap_ST_fsm_state58 = 63'd144115188075855872;
parameter    ap_ST_fsm_state59 = 63'd288230376151711744;
parameter    ap_ST_fsm_state60 = 63'd576460752303423488;
parameter    ap_ST_fsm_state61 = 63'd1152921504606846976;
parameter    ap_ST_fsm_state62 = 63'd2305843009213693952;
parameter    ap_ST_fsm_state63 = 63'd4611686018427387904;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [3:0] J_address0;
output   J_ce0;
input  [31:0] J_q0;
output  [1:0] b_address0;
output   b_ce0;
input  [31:0] b_q0;
input  [31:0] n;
input  [31:0] iter;
output  [3:0] x_address0;
output   x_ce0;
output   x_we0;
output  [31:0] x_d0;
input  [63:0] error;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg J_ce0;
reg b_ce0;
reg x_ce0;
reg x_we0;

(* fsm_encoding = "none" *) reg   [62:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [63:0] grp_fu_235_p2;
reg   [63:0] reg_256;
wire    ap_CS_fsm_state10;
reg   [0:0] tmp_10_reg_584;
wire    ap_CS_fsm_state22;
wire   [63:0] grp_fu_251_p1;
reg   [63:0] reg_261;
wire    ap_CS_fsm_state17;
wire   [4:0] i_1_fu_273_p2;
wire    ap_CS_fsm_state2;
wire   [30:0] t_1_fu_293_p2;
reg   [30:0] t_1_reg_553;
wire    ap_CS_fsm_state3;
wire   [31:0] i1_cast_fu_299_p1;
reg   [31:0] i1_cast_reg_558;
wire    ap_CS_fsm_state4;
wire   [30:0] i_2_fu_308_p2;
reg   [30:0] i_2_reg_566;
wire   [5:0] tmp_11_cast_fu_324_p3;
reg   [5:0] tmp_11_cast_reg_571;
wire   [0:0] tmp_3_fu_303_p2;
wire   [31:0] j_1_fu_337_p2;
reg   [31:0] j_1_reg_579;
wire    ap_CS_fsm_state5;
wire   [0:0] tmp_10_fu_343_p2;
wire   [0:0] exitcond1_fu_332_p2;
wire   [63:0] tmp_9_fu_348_p1;
reg   [63:0] tmp_9_reg_589;
wire   [5:0] tmp_12_fu_357_p2;
reg   [5:0] tmp_12_reg_594;
wire   [63:0] sigma_1_fu_362_p3;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state16;
wire   [63:0] grp_fu_242_p2;
reg   [63:0] tmp_8_reg_624;
wire    ap_CS_fsm_state28;
wire   [63:0] grp_fu_246_p2;
reg   [63:0] x_assign_reg_629;
wire    ap_CS_fsm_state59;
reg   [0:0] p_Result_s_reg_634;
wire    ap_CS_fsm_state60;
wire   [31:0] p_Val2_5_fu_494_p3;
reg   [31:0] p_Val2_5_reg_639;
wire   [4:0] q_1_fu_520_p2;
reg   [4:0] q_1_reg_648;
wire    ap_CS_fsm_state62;
wire   [63:0] tmp_7_fu_526_p1;
reg   [63:0] tmp_7_reg_653;
wire   [0:0] exitcond_fu_514_p2;
reg   [3:0] x_new_address0;
reg    x_new_ce0;
reg    x_new_we0;
reg   [31:0] x_new_d0;
wire   [31:0] x_new_q0;
reg   [4:0] i_reg_167;
wire   [0:0] exitcond2_fu_267_p2;
reg   [30:0] t_reg_178;
reg   [30:0] i1_reg_189;
wire    ap_CS_fsm_state61;
wire   [0:0] tmp_2_fu_288_p2;
reg   [63:0] sigma_reg_201;
reg   [31:0] j_reg_213;
reg   [4:0] q_reg_224;
wire    ap_CS_fsm_state63;
wire   [63:0] tmp_fu_279_p1;
wire  signed [63:0] tmp_12_cast_fu_369_p1;
wire   [31:0] p_Val2_6_fu_507_p3;
reg   [63:0] grp_fu_235_p0;
reg   [63:0] grp_fu_235_p1;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state18;
wire    ap_CS_fsm_state23;
wire    ap_CS_fsm_state29;
reg   [31:0] grp_fu_251_p0;
wire   [31:0] t_cast_fu_284_p1;
wire   [3:0] tmp_4_fu_314_p1;
wire   [3:0] tmp_5_fu_318_p2;
wire   [5:0] tmp_11_fu_353_p1;
wire   [63:0] p_Val2_s_fu_373_p1;
wire   [51:0] tmp_V_1_fu_394_p1;
wire   [53:0] mantissa_V_fu_398_p4;
wire   [10:0] tmp_V_fu_384_p4;
wire   [11:0] tmp_i_i_i_i_cast2_fu_412_p1;
wire   [11:0] sh_assign_fu_416_p2;
wire   [10:0] tmp_i_i_i_fu_430_p2;
wire   [0:0] isNeg_fu_422_p3;
wire  signed [11:0] tmp_i_i_i_cast_fu_436_p1;
wire   [11:0] ush_fu_440_p3;
wire  signed [31:0] sh_assign_2_cast_fu_448_p1;
wire   [53:0] tmp_i_i_i_cast_8_fu_456_p1;
wire   [136:0] mantissa_V_1_cast_fu_408_p1;
wire   [136:0] tmp_i_i_i_7_fu_452_p1;
wire   [53:0] r_V_fu_460_p2;
wire   [0:0] tmp_18_fu_472_p3;
wire   [136:0] r_V_1_fu_466_p2;
wire   [31:0] tmp_13_fu_480_p1;
wire   [31:0] tmp_14_fu_484_p4;
wire   [31:0] result_V_1_fu_502_p2;
reg   [1:0] grp_fu_235_opcode;
reg   [62:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 63'd1;
end

jacobi_HLS_x_new #(
    .DataWidth( 32 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
x_new_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(x_new_address0),
    .ce0(x_new_ce0),
    .we0(x_new_we0),
    .d0(x_new_d0),
    .q0(x_new_q0)
);

jacobi_HLS_dadddsbkb #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
jacobi_HLS_dadddsbkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_235_p0),
    .din1(grp_fu_235_p1),
    .opcode(grp_fu_235_opcode),
    .ce(1'b1),
    .dout(grp_fu_235_p2)
);

jacobi_HLS_dmul_6cud #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
jacobi_HLS_dmul_6cud_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_261),
    .din1(reg_256),
    .ce(1'b1),
    .dout(grp_fu_242_p2)
);

jacobi_HLS_ddiv_6dEe #(
    .ID( 1 ),
    .NUM_STAGE( 31 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
jacobi_HLS_ddiv_6dEe_U3(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(64'd4607182418800017408),
    .din1(tmp_8_reg_624),
    .ce(1'b1),
    .dout(grp_fu_246_p2)
);

jacobi_HLS_sitodpeOg #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 32 ),
    .dout_WIDTH( 64 ))
jacobi_HLS_sitodpeOg_U4(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_251_p0),
    .ce(1'b1),
    .dout(grp_fu_251_p1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (tmp_2_fu_288_p2 == 1'd1))) begin
        i1_reg_189 <= 31'd0;
    end else if ((1'b1 == ap_CS_fsm_state61)) begin
        i1_reg_189 <= i_2_reg_566;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond2_fu_267_p2 == 1'd0))) begin
        i_reg_167 <= i_1_fu_273_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_167 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (tmp_3_fu_303_p2 == 1'd1))) begin
        j_reg_213 <= 32'd0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        j_reg_213 <= j_1_reg_579;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (tmp_2_fu_288_p2 == 1'd0))) begin
        q_reg_224 <= 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state63)) begin
        q_reg_224 <= q_1_reg_648;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (tmp_3_fu_303_p2 == 1'd1))) begin
        sigma_reg_201 <= 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        sigma_reg_201 <= sigma_1_fu_362_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond2_fu_267_p2 == 1'd1))) begin
        t_reg_178 <= 31'd0;
    end else if (((1'b1 == ap_CS_fsm_state4) & (tmp_3_fu_303_p2 == 1'd0))) begin
        t_reg_178 <= t_1_reg_553;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i1_cast_reg_558[30 : 0] <= i1_cast_fu_299_p1[30 : 0];
        i_2_reg_566 <= i_2_fu_308_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        j_1_reg_579 <= j_1_fu_337_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state60)) begin
        p_Result_s_reg_634 <= p_Val2_s_fu_373_p1[32'd63];
        p_Val2_5_reg_639 <= p_Val2_5_fu_494_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state62)) begin
        q_1_reg_648 <= q_1_fu_520_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state22) | ((1'b1 == ap_CS_fsm_state10) & (tmp_10_reg_584 == 1'd1)))) begin
        reg_256 <= grp_fu_235_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state22))) begin
        reg_261 <= grp_fu_251_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        t_1_reg_553 <= t_1_fu_293_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond1_fu_332_p2 == 1'd0))) begin
        tmp_10_reg_584 <= tmp_10_fu_343_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (tmp_3_fu_303_p2 == 1'd1))) begin
        tmp_11_cast_reg_571[5 : 2] <= tmp_11_cast_fu_324_p3[5 : 2];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond1_fu_332_p2 == 1'd1))) begin
        tmp_12_reg_594 <= tmp_12_fu_357_p2;
        tmp_9_reg_589[30 : 0] <= tmp_9_fu_348_p1[30 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state62) & (exitcond_fu_514_p2 == 1'd0))) begin
        tmp_7_reg_653[4 : 0] <= tmp_7_fu_526_p1[4 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state28)) begin
        tmp_8_reg_624 <= grp_fu_242_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state59)) begin
        x_assign_reg_629 <= grp_fu_246_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        J_ce0 = 1'b1;
    end else begin
        J_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state62) & (exitcond_fu_514_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state62) & (exitcond_fu_514_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        b_ce0 = 1'b1;
    end else begin
        b_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        grp_fu_235_opcode = 2'd1;
    end else if (((1'b1 == ap_CS_fsm_state6) & (tmp_10_reg_584 == 1'd1))) begin
        grp_fu_235_opcode = 2'd0;
    end else begin
        grp_fu_235_opcode = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        grp_fu_235_p0 = reg_261;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_fu_235_p0 = sigma_reg_201;
    end else begin
        grp_fu_235_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        grp_fu_235_p1 = sigma_reg_201;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_fu_235_p1 = 64'd0;
    end else begin
        grp_fu_235_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        grp_fu_251_p0 = J_q0;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        grp_fu_251_p0 = b_q0;
    end else begin
        grp_fu_251_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state63)) begin
        x_ce0 = 1'b1;
    end else begin
        x_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state62)) begin
        x_new_address0 = tmp_7_fu_526_p1;
    end else if ((1'b1 == ap_CS_fsm_state61)) begin
        x_new_address0 = tmp_9_reg_589;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        x_new_address0 = tmp_fu_279_p1;
    end else begin
        x_new_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state61) | (1'b1 == ap_CS_fsm_state62) | (1'b1 == ap_CS_fsm_state2))) begin
        x_new_ce0 = 1'b1;
    end else begin
        x_new_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state61)) begin
        x_new_d0 = p_Val2_6_fu_507_p3;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        x_new_d0 = 32'd0;
    end else begin
        x_new_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state61) | ((1'b1 == ap_CS_fsm_state2) & (exitcond2_fu_267_p2 == 1'd0)))) begin
        x_new_we0 = 1'b1;
    end else begin
        x_new_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state63)) begin
        x_we0 = 1'b1;
    end else begin
        x_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (exitcond2_fu_267_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (tmp_2_fu_288_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state62;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (tmp_3_fu_303_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (exitcond1_fu_332_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            ap_NS_fsm = ap_ST_fsm_state34;
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            ap_NS_fsm = ap_ST_fsm_state36;
        end
        ap_ST_fsm_state36 : begin
            ap_NS_fsm = ap_ST_fsm_state37;
        end
        ap_ST_fsm_state37 : begin
            ap_NS_fsm = ap_ST_fsm_state38;
        end
        ap_ST_fsm_state38 : begin
            ap_NS_fsm = ap_ST_fsm_state39;
        end
        ap_ST_fsm_state39 : begin
            ap_NS_fsm = ap_ST_fsm_state40;
        end
        ap_ST_fsm_state40 : begin
            ap_NS_fsm = ap_ST_fsm_state41;
        end
        ap_ST_fsm_state41 : begin
            ap_NS_fsm = ap_ST_fsm_state42;
        end
        ap_ST_fsm_state42 : begin
            ap_NS_fsm = ap_ST_fsm_state43;
        end
        ap_ST_fsm_state43 : begin
            ap_NS_fsm = ap_ST_fsm_state44;
        end
        ap_ST_fsm_state44 : begin
            ap_NS_fsm = ap_ST_fsm_state45;
        end
        ap_ST_fsm_state45 : begin
            ap_NS_fsm = ap_ST_fsm_state46;
        end
        ap_ST_fsm_state46 : begin
            ap_NS_fsm = ap_ST_fsm_state47;
        end
        ap_ST_fsm_state47 : begin
            ap_NS_fsm = ap_ST_fsm_state48;
        end
        ap_ST_fsm_state48 : begin
            ap_NS_fsm = ap_ST_fsm_state49;
        end
        ap_ST_fsm_state49 : begin
            ap_NS_fsm = ap_ST_fsm_state50;
        end
        ap_ST_fsm_state50 : begin
            ap_NS_fsm = ap_ST_fsm_state51;
        end
        ap_ST_fsm_state51 : begin
            ap_NS_fsm = ap_ST_fsm_state52;
        end
        ap_ST_fsm_state52 : begin
            ap_NS_fsm = ap_ST_fsm_state53;
        end
        ap_ST_fsm_state53 : begin
            ap_NS_fsm = ap_ST_fsm_state54;
        end
        ap_ST_fsm_state54 : begin
            ap_NS_fsm = ap_ST_fsm_state55;
        end
        ap_ST_fsm_state55 : begin
            ap_NS_fsm = ap_ST_fsm_state56;
        end
        ap_ST_fsm_state56 : begin
            ap_NS_fsm = ap_ST_fsm_state57;
        end
        ap_ST_fsm_state57 : begin
            ap_NS_fsm = ap_ST_fsm_state58;
        end
        ap_ST_fsm_state58 : begin
            ap_NS_fsm = ap_ST_fsm_state59;
        end
        ap_ST_fsm_state59 : begin
            ap_NS_fsm = ap_ST_fsm_state60;
        end
        ap_ST_fsm_state60 : begin
            ap_NS_fsm = ap_ST_fsm_state61;
        end
        ap_ST_fsm_state61 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state62 : begin
            if (((1'b1 == ap_CS_fsm_state62) & (exitcond_fu_514_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state63;
            end
        end
        ap_ST_fsm_state63 : begin
            ap_NS_fsm = ap_ST_fsm_state62;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign J_address0 = tmp_12_cast_fu_369_p1;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state22 = ap_CS_fsm[32'd21];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];

assign ap_CS_fsm_state28 = ap_CS_fsm[32'd27];

assign ap_CS_fsm_state29 = ap_CS_fsm[32'd28];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state59 = ap_CS_fsm[32'd58];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state60 = ap_CS_fsm[32'd59];

assign ap_CS_fsm_state61 = ap_CS_fsm[32'd60];

assign ap_CS_fsm_state62 = ap_CS_fsm[32'd61];

assign ap_CS_fsm_state63 = ap_CS_fsm[32'd62];

assign b_address0 = tmp_9_fu_348_p1;

assign exitcond1_fu_332_p2 = ((j_reg_213 == n) ? 1'b1 : 1'b0);

assign exitcond2_fu_267_p2 = ((i_reg_167 == 5'd16) ? 1'b1 : 1'b0);

assign exitcond_fu_514_p2 = ((q_reg_224 == 5'd16) ? 1'b1 : 1'b0);

assign i1_cast_fu_299_p1 = i1_reg_189;

assign i_1_fu_273_p2 = (i_reg_167 + 5'd1);

assign i_2_fu_308_p2 = (i1_reg_189 + 31'd1);

assign isNeg_fu_422_p3 = sh_assign_fu_416_p2[32'd11];

assign j_1_fu_337_p2 = (j_reg_213 + 32'd1);

assign mantissa_V_1_cast_fu_408_p1 = mantissa_V_fu_398_p4;

assign mantissa_V_fu_398_p4 = {{{{1'd1}, {tmp_V_1_fu_394_p1}}}, {1'd0}};

assign p_Val2_5_fu_494_p3 = ((isNeg_fu_422_p3[0:0] === 1'b1) ? tmp_13_fu_480_p1 : tmp_14_fu_484_p4);

assign p_Val2_6_fu_507_p3 = ((p_Result_s_reg_634[0:0] === 1'b1) ? result_V_1_fu_502_p2 : p_Val2_5_reg_639);

assign p_Val2_s_fu_373_p1 = x_assign_reg_629;

assign q_1_fu_520_p2 = (q_reg_224 + 5'd1);

assign r_V_1_fu_466_p2 = mantissa_V_1_cast_fu_408_p1 << tmp_i_i_i_7_fu_452_p1;

assign r_V_fu_460_p2 = mantissa_V_fu_398_p4 >> tmp_i_i_i_cast_8_fu_456_p1;

assign result_V_1_fu_502_p2 = (32'd0 - p_Val2_5_reg_639);

assign sh_assign_2_cast_fu_448_p1 = $signed(ush_fu_440_p3);

assign sh_assign_fu_416_p2 = ($signed(12'd3073) + $signed(tmp_i_i_i_i_cast2_fu_412_p1));

assign sigma_1_fu_362_p3 = ((tmp_10_reg_584[0:0] === 1'b1) ? reg_256 : sigma_reg_201);

assign t_1_fu_293_p2 = (t_reg_178 + 31'd1);

assign t_cast_fu_284_p1 = t_reg_178;

assign tmp_10_fu_343_p2 = ((j_reg_213 == i1_cast_reg_558) ? 1'b1 : 1'b0);

assign tmp_11_cast_fu_324_p3 = {{tmp_5_fu_318_p2}, {2'd0}};

assign tmp_11_fu_353_p1 = i1_reg_189[5:0];

assign tmp_12_cast_fu_369_p1 = $signed(tmp_12_reg_594);

assign tmp_12_fu_357_p2 = (tmp_11_fu_353_p1 + tmp_11_cast_reg_571);

assign tmp_13_fu_480_p1 = tmp_18_fu_472_p3;

assign tmp_14_fu_484_p4 = {{r_V_1_fu_466_p2[84:53]}};

assign tmp_18_fu_472_p3 = r_V_fu_460_p2[32'd53];

assign tmp_2_fu_288_p2 = (($signed(t_cast_fu_284_p1) < $signed(iter)) ? 1'b1 : 1'b0);

assign tmp_3_fu_303_p2 = (($signed(i1_cast_fu_299_p1) < $signed(n)) ? 1'b1 : 1'b0);

assign tmp_4_fu_314_p1 = i1_reg_189[3:0];

assign tmp_5_fu_318_p2 = ($signed(4'd15) + $signed(tmp_4_fu_314_p1));

assign tmp_7_fu_526_p1 = q_reg_224;

assign tmp_9_fu_348_p1 = i1_reg_189;

assign tmp_V_1_fu_394_p1 = p_Val2_s_fu_373_p1[51:0];

assign tmp_V_fu_384_p4 = {{p_Val2_s_fu_373_p1[62:52]}};

assign tmp_fu_279_p1 = i_reg_167;

assign tmp_i_i_i_7_fu_452_p1 = $unsigned(sh_assign_2_cast_fu_448_p1);

assign tmp_i_i_i_cast_8_fu_456_p1 = $unsigned(sh_assign_2_cast_fu_448_p1);

assign tmp_i_i_i_cast_fu_436_p1 = $signed(tmp_i_i_i_fu_430_p2);

assign tmp_i_i_i_fu_430_p2 = (11'd1023 - tmp_V_fu_384_p4);

assign tmp_i_i_i_i_cast2_fu_412_p1 = tmp_V_fu_384_p4;

assign ush_fu_440_p3 = ((isNeg_fu_422_p3[0:0] === 1'b1) ? tmp_i_i_i_cast_fu_436_p1 : sh_assign_fu_416_p2);

assign x_address0 = tmp_7_reg_653;

assign x_d0 = x_new_q0;

always @ (posedge ap_clk) begin
    i1_cast_reg_558[31] <= 1'b0;
    tmp_11_cast_reg_571[1:0] <= 2'b00;
    tmp_9_reg_589[63:31] <= 33'b000000000000000000000000000000000;
    tmp_7_reg_653[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
end

endmodule //jacobi_HLS
