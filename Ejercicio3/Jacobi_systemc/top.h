// top.h
#ifndef TOP_H
#define TOP_H

#include <systemc.h>
#include "producer.h"
#include "consumer.h"
#include "stack.h"

class top: public sc_module{
public:


	//channel to be used
	sc_fifo< int >fifo_A;
	sc_fifo< int >fifo_b;
	sc_fifo< int >fifo_x;
	sc_fifo<double>fifo_sum;
	producer hardware;
	consumer software;

	void jacobitop(){
		hardware.jacobi();
		hardware.x(fifo_x);
		software.x(fifo_x);
		hardware.sum(fifo_sum);
		software.sum(fifo_sum);
	}

	top(sc_module_name nm, int sizeA,int sizeb,int sizex, double size):sc_module(nm), fifo_A("fifo_A",sizeA),fifo_b("fifo_b",sizeb),fifo_x("fifo_x",sizex), fifo_sum("fifo_sum",size), hardware("hardware"), software("software"){
		software.A(fifo_A);
		hardware.W(fifo_A);
		software.b(fifo_b);
		hardware.q(fifo_b);
		jacobitop();
	}
};


#endif
