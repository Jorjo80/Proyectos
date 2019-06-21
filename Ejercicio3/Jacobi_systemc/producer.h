// producer.h
#ifndef PRODUCER_H
#define PRODUCER_H

#include <systemc.h>
#include "math.h"
#include "stdlib.h"

class producer:public sc_module{
public:

	sc_port<sc_fifo_out_if< double > > sum;
	sc_port<sc_fifo_out_if< int > > x[16];
	sc_port<sc_fifo_in_if< int > > A[4][4];
	sc_port<sc_fifo_in_if< int > > b[4];

	sc_in< bool > clock;

	int n=4;
    int iter= 16;

	void jacobi();

	producer(sc_module_name nm):sc_module(nm){

	}

};

#endif
