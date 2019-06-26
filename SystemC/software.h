// consumer.h
#ifndef SOFTWARE_H
#define SOFTWARE_H


#include "systemc.h"
#include "stack.h"
#include "stdio.h"


SC_MODULE(software){
public:
	sc_port<stack_read_if> in;
	sc_in<bool> clock;
	double ReadCharFromStack;
	double matrixX[16];
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
