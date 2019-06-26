// consumer.h
#ifndef SOFTWARE_H
#define SOFTWARE_H


#include "systemc.h"
#include "stack.h"
#include "stdio.h"


SC_MODULE(software){
public:
	sc_port<stack_read_if> MatX;
	sc_port<stack_write_if> MatA;
	sc_port<stack_write_if> MatB;
	sc_port<stack_read_if> SumPort;

	sc_in<bool> clock;
	double ReadXFromStack, ReadSumFromStack;
	double matrixA[16];
	double matrixB[4];
	double matrixX[16];
	double sum;
	void SendMatA();
	void SendMatB();
	void ReceiveMatX();
	void ReceiveSum();
	SC_CTOR(software){
		SC_THREAD(SendMatA);
		sensitive << clock.pos();
		SC_THREAD(SendMatB);
		sensitive << clock.pos();
		SC_THREAD(ReceiveMatX);
		sensitive << clock.pos();
		SC_THREAD(ReceiveSum);
		sensitive << clock.pos();
	}
};

#endif
