#ifndef FSM_H
#define FSM_H

#include "systemc.h"
#include "stack.h"
#include "hardware.h"
#include "software.h"
#include "stdio.h"

SC_MODULE(fsm){
public:

	sc_in<bool> clock;

	//para controlar datos en Hardware

	sc_in<bool> finishSendM_X;
	sc_in<bool> finishSendSum;
	sc_in<bool> finishRecM_B;
	sc_in<bool> finishRecM_A;
	sc_in<bool> finishRecM_X;
	sc_in<bool> finishRecSum;
	sc_in<bool> finishSendM_B;
	sc_in<bool> finishSendM_A;

	sc_out<bool> SendM_X;
	sc_out<bool> SumSend;
	sc_out<bool> RecM_B;
	sc_out<bool> RecM_A;
	sc_out<bool> RecM_X;
	sc_out<bool> SumRec;
	sc_out<bool> SendM_B;
	sc_out<bool> SendM_A;

	void control();

	SC_CTOR(fsm){

		SC_THREAD(control);
		sensitive << clock.pos();
	}
};

#endif
