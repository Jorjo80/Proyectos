// consumer.h
#ifndef CONSUMER_H
#define CONSUMER_H


#include <systemc.h>
#include "math.h"


//class consumer:public sc_module
SC_MODULE(consumer){
public:

	sc_port<sc_fifo_in_if< double > > sum;
	sc_port<sc_fifo_in_if< int > > x;
	sc_port<sc_fifo_out_if< int > > A;
	sc_port<sc_fifo_out_if< int > > b;

	double error;
	int resultado[16];
	void calculo_error();
	void setmatrices();
	void reading(int resultado[16]);

	SC_CTOR(consumer){
		error=0;
		setmatrices();
		reading(resultado);
	}
};

#endif
