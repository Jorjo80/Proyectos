// top.h
#ifndef TOP_H
#define TOP_H

#include "systemc.h"
#include "stack.h"
#include "producer.h"
#include "consumer.h"

class top: public sc_module{
public:
	sc_in<bool> clk_prod;
	sc_in<bool> clk_cons;

	//channel to be used

	stack stk_inst;
	producer prod_inst;
	consumer cons_inst;

	top(sc_module_name nm):sc_module(nm), prod_inst("producer_inst"), cons_inst("consumer_inst"),stk_inst("stack_inst"){
		prod_inst.out(stk_inst);
		prod_inst.clock(clk_prod);

		cons_inst.in(stk_inst);
		cons_inst.clock(clk_cons);
	}

};


#endif
