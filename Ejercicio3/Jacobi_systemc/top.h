// top.h
#ifndef TOP_H
#define TOP_H

#include "systemc.h"
#include "producer.h"
#include "consumer.h"
#include "stack.h"

class top: public sc_module{
public:
	sc_in<bool> clk_prod;
	sc_in<bool> clk_cons;

	//channel to be used

	sc_fifo<char>fifo_inst;
	producer prod_inst;
	consumer cons_inst;

	top(sc_module_name nm, int size):sc_module(nm), fifo_inst("fifo_inst",size), prod_inst("producer_inst"), cons_inst("consumer_inst"){
		prod_inst.out(fifo_inst);
		prod_inst.clock(clk_prod);

		cons_inst.in(fifo_inst);
		cons_inst.clock(clk_cons);
	}

};


#endif
