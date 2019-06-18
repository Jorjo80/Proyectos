// top.h
#ifndef TOP_H
#define TOP_H

#include "systemc.h"
#include "producer.h"
#include "consumer.h"
#include "stack.h"

class top: public sc_module{
public:


	//channel to be used

	sc_fifo< int* >fifo_A;
	sc_fifo< int* >fifo_b;
	sc_fifo< int* >fifo_x;
	sc_fifo< double >fifo_sum;
	producer prod_inst;
	consumer cons_inst;

	top(sc_module_name nm, int sizeA,int sizeb,int sizex, double size):sc_module(nm), fifo_A("fifo_A",sizeA),fifo_b("fifo_b",sizeb),fifo_x("fifo_x",sizex), fifo_sum("fifo_sum",size), prod_inst("producer_inst"){
		cons_inst.A(fifo_A);
		prod_inst.A(fifo_A);
		cons_inst.b(fifo_b);
		prod_inst.b(fifo_b);
	}

};


#endif
