// producer.h
#ifndef PRODUCER_H
#define PRODUCER_H

#include <systemc.h>
#include "math.h"
#include "stdlib.h"
#define ITER 16
#define N 4

SC_MODULE(producer){
public:

	sc_port<sc_fifo_out_if< double > > sum;
	sc_port<sc_fifo_out_if< int > > x;
	sc_port<sc_fifo_in_if< int > > W;
	sc_port<sc_fifo_in_if< int > > q;
	int A[4][4],b[4];
	void reading(int A[4][4], int b[4]);
	void jacobi();

	SC_CTOR(producer){
		reading(A,b);
	}

};

#endif
