// top.h
#ifndef TOP_H
#define TOP_H

#include "systemc.h"
#include "producer.h"
#include "consumer.h"
#include "hierarchical.h"

class top: public sc_module{
public:

	sc_in<bool> clk_prod;
	sc_in<bool> clk_cons;

	sc_signal<char> data_cons;
	sc_signal<char> data_prod;
	sc_signal<bool> valid_cons,ready_cons;
	sc_signal<bool> valid_prod,ready_prod;

	sc_fifo<char>fifo_inst;
	producer prod_inst;
	consumer cons_inst;
	adapter_write w_inst;
	adapter_read r_inst;


	top(sc_module_name nm, int size):sc_module(nm), fifo_inst("fifo_inst",size), prod_inst("producer_inst"), cons_inst("consumer_inst"),w_inst("write_inst"),r_inst("read_inst"){
	//top(sc_module_name nm, int size):sc_module(nm), fifo_inst("fifo_inst",size), prod_inst("producer_inst"),w_inst("write_inst"){

		//interconnections prod
		prod_inst.data_out(data_prod);
		prod_inst.valid_w(valid_prod);
		prod_inst.ready_w(ready_prod);

		//interconnections adapter_write
		w_inst.data_in(data_prod);
		w_inst.valid_w(valid_prod);
		w_inst.ready_w(ready_prod);
		w_inst.data_fifo_out(fifo_inst);

		//interconnections adapter_read
		r_inst.data_out(data_cons);
		r_inst.valid_r(valid_cons);
		r_inst.ready_r(ready_cons);
		r_inst.data_fifo_in(fifo_inst);

		//interconnections cons
		cons_inst.data_in(data_cons);
		cons_inst.valid_r(valid_cons);
		cons_inst.ready_r(ready_cons);

		//
		prod_inst.clock(clk_prod);
		w_inst.clock(clk_prod);
		r_inst.clock(clk_cons);
		cons_inst.clock(clk_cons);
	}

};

#endif
