// ==============================================================
// File generated on Wed Jun 19 12:57:50 +0200 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __jacobi_HLS_sitodpeOg__HH__
#define __jacobi_HLS_sitodpeOg__HH__
#include "ACMP_sitodp.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int dout_WIDTH>
SC_MODULE(jacobi_HLS_sitodpeOg) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_sitodp<ID, 6, din0_WIDTH, dout_WIDTH> ACMP_sitodp_U;

    SC_CTOR(jacobi_HLS_sitodpeOg):  ACMP_sitodp_U ("ACMP_sitodp_U") {
        ACMP_sitodp_U.clk(clk);
        ACMP_sitodp_U.reset(reset);
        ACMP_sitodp_U.ce(ce);
        ACMP_sitodp_U.din0(din0);
        ACMP_sitodp_U.dout(dout);

    }

};

#endif //
