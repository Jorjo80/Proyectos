// producer.h
#ifndef HARDWARE_H
#define HARDWARE_H

#include <systemc.h>
#include "stack.h"

SC_MODULE(hardware){
public:

	sc_port<stack_write_if> MatX;
	sc_port<stack_read_if> MatA;
	sc_port<stack_read_if> MatB;
	sc_port<stack_write_if> SumPort;
	sc_in<bool> clock;
	//sc_out<bool> finishM_X;
	//sc_in<bool> SendM_X;
	double ReadAFromStack;
	double ReadBFromStack;
	double matrixA[16],matrixB[4],matrixX[16];
	void ReceiveMatA();
	void ReceiveMatB();
	void SendMatX();
	void SendSum();
	void do_reset();

	SC_CTOR(hardware){
		SC_THREAD(do_reset);
		sensitive<<clock.pos();
		SC_THREAD(ReceiveMatA);
		sensitive << clock.pos();
		SC_THREAD(ReceiveMatB);
		sensitive << clock.pos();
		SC_THREAD(SendMatX);
		sensitive << clock.pos();
		SC_THREAD(SendSum);
		sensitive << clock.pos();
	}

};
#endif
