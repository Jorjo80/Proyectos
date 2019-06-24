// producer.h
#ifndef PRODUCER_H
#define PRODUCER_H

#include <systemc.h>
#include "math.h"
#include "stdlib.h"
#define ITER 16
#define N 4
//class producer:public sc_module
SC_MODULE(producer){
public:

	sc_port<sc_fifo_out_if< double > > sum;
	sc_port<sc_fifo_out_if< int > > x[16];
	sc_port<sc_fifo_in_if< int > > A[4][4];
	sc_port<sc_fifo_in_if< int > > b[4];

	void jacobi();
	SC_CTOR(producer){

	}
};

#endif
