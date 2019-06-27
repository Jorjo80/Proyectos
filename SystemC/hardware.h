// producer.h
#ifndef HARDWARE_H
#define HARDWARE_H

#include <systemc.h>
#include "stack.h"
#define iter 16
#define n 4

SC_MODULE(hardware){
public:

	sc_port<stack_write_if> MatX;
	sc_port<stack_read_if> MatA;
	sc_port<stack_read_if> MatB;
	sc_port<stack_write_if> SumPort;
	sc_in<bool> clock;

	bool receive;
	bool send;
	bool calculate;
	double sum;

	double ReadAFromStack;
	double ReadBFromStack;
	double matrixA[16],matrixB[4],matrixX[16];
	void Receiving();
	void Sending();
	void control();
	void do_reset();
	void calculojacobi();

	SC_CTOR(hardware){
		SC_THREAD(do_reset);
		sensitive<<clock.pos();
		SC_THREAD(control);
		sensitive << clock.pos();
	}

};
#endif
