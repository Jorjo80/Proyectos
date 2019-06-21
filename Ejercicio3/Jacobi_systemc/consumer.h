// consumer.h
#ifndef CONSUMER_H
#define CONSUMER_H


#include "systemc.h"
#include "math.h"


class consumer:public sc_module{
public:

	sc_port<sc_fifo_in_if< double > > sum;
	sc_port<sc_fifo_in_if< int > > x[16];
	sc_port<sc_fifo_out_if< int > > A[4][4];
	sc_port<sc_fifo_out_if< int > > b[4];

	double error;

	void calculo_error();
	void setmatrices();

	consumer(sc_module_name nm):sc_module(nm){
		SC_THREAD(setmatrices());
	}
}
};

#endif
