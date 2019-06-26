#ifndef SOFTWARE_H
#define SOFTWARE_H

#include <systemc.h>

SC_MODULE (software){
public:
	int A[4][4],b[4];
	sc_port <sc_fifo_out_if < int > > matrixA;
	sc_port<sc_fifo_out_if < int > > matrixb;
	sc_port <sc_fifo_in_if < int > > matrixx;
	void initialization(int A[4][4],int b[4]);
	void senddata();

	SC_CTOR(software){
		initialization(A,b);
		senddata();


	}
};

#endif
