// ==============================================================
// File generated on Tue May 28 11:39:35 +0200 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __jacobi_HLS_dsub_6cud__HH__
#define __jacobi_HLS_dsub_6cud__HH__
#include "ACMP_dsub.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(jacobi_HLS_dsub_6cud) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_dsub<ID, 5, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_dsub_U;

    SC_CTOR(jacobi_HLS_dsub_6cud):  ACMP_dsub_U ("ACMP_dsub_U") {
        ACMP_dsub_U.clk(clk);
        ACMP_dsub_U.reset(reset);
        ACMP_dsub_U.ce(ce);
        ACMP_dsub_U.din0(din0);
        ACMP_dsub_U.din1(din1);
        ACMP_dsub_U.dout(dout);

    }

};

#endif //
