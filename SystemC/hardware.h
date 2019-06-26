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

	sc_out<bool> finishSendM_X;
	sc_in<bool> SendM_X;
	sc_out<bool> finishSendSum;
	sc_in<bool> SumSend;
	sc_out<bool> finishRecM_B;
	sc_in<bool> RecM_B;
	sc_out<bool> finishRecM_A;
	sc_in<bool> RecM_A;

	double ReadAFromStack;
	double ReadBFromStack;
	double matrixA[16],matrixB[4],matrixX[16];
	void ReceiveMatA();
	void ReceiveMatB();
	void SendMatX();
	void SendSum();
	void do_reset();

	SC_CTOR(hardware){
		finishSendM_X->write(false);
		finishSendSum->write(false);
		finishRecM_B->write(false);
		finishRecM_A->write(false);
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
