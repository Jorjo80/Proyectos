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
		for(int i=0; i<16; i++)
		{
			hardware.x[i](fifo_x.sc_fifo_in_if);
			software.x[i](fifo_x.sc_fifo_out_if);
		}
		hardware.sum(fifo_sum);
		software.sum(fifo_sum);
	}

	top(sc_module_name nm, int sizeA[4][4],int sizeb[4],int sizex[16], double size):sc_module(nm), fifo_A("fifo_A",sizeA),fifo_b("fifo_b",sizeb),fifo_x("fifo_x",sizex), fifo_sum("fifo_sum",size), hardware("hardware"), software("software"){

		for(int i=0; i<4; i++)
		{
			software.b[i](fifo_b.sc_fifo_in_if);
			hardware.b[i](fifo_b.sc_fifo_out_if);
			for(int j=0; j<4;j++)
			{
				software.A[i][j](fifo_A.sc_fifo_in_if);
				hardware.A[i][j](fifo_A.sc_fifo_out_if);
			}


		jacobitop();
	}
};


#endif
