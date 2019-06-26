// producer.h
#ifndef HARDWARE_H
#define HARDWARE_H

#include "systemc.h"
#include "stack.h"

SC_MODULE(hardware){
public:

	sc_port<stack_write_if> out;
	sc_in<bool> clock;
	//sc_out<bool> finishM_X;
	//sc_in<bool> SendM_X;
	void ReceiveMatA();
	void ReceiveMatB();
	void SendMatX();
	void SendSum();
	SC_CTOR(software){
		SC_THREAD(ReceiveMatA);
		sensitive << clock.pos();
		SC_THREAD(ReceiveMatB);
		sensitive << clock.pos();
		SC_THREAD(SendMatX);
		sensitive << clock.pos();
		SC_THREAD(ReceiveSum);
		sensitive << clock.pos();
	}

};
#endif
