// top.h
#ifndef TOP_H
#define TOP_H

#include "systemc.h"
#include "stack.h"
#include "hardware.h"
#include "software.h"

class top: public sc_module{
public:
	sc_in<bool> clk_prod;
	sc_in<bool> clk_cons;

	//channel to be used

	stack stk_inst_MatA;
	stack stk_inst_MatB;
	stack stk_inst_MatX;
	stack stk_inst_Sum;
	hardware prod_inst;
	software cons_inst;

	top(sc_module_name nm):sc_module(nm), prod_inst("producer_inst"), cons_inst("consumer_inst"),stk_inst_MatA("stack_inst_MatA"),stk_inst_MatB("stk_inst_MatB"),stk_inst_MatX("stk_inst_MatX"),stk_inst_Sum("stk_inst_Sum"){

		prod_inst.MatA(stk_inst_MatA);
		prod_inst.MatB(stk_inst_MatB);
		prod_inst.MatX(stk_inst_MatX);
		prod_inst.SumPort(stk_inst_Sum);
		prod_inst.clock(clk_prod);

		cons_inst.MatA(stk_inst_MatA);
		cons_inst.MatB(stk_inst_MatB);
		cons_inst.MatX(stk_inst_MatX);
		cons_inst.SumPort(stk_inst_Sum);
		cons_inst.clock(clk_cons);
	}

};


#endif
