// top.h
#ifndef TOP_H
#define TOP_H

#include "systemc.h"
#include "stack.h"
#include "hardware.h"
#include "software.h"
#include "fsm.h"

class top: public sc_module{
public:

	sc_in<bool> clk;

	//señales para el envio de datos

	sc_signal<bool> SendMA;
	sc_signal<bool> RecMA;
	sc_signal<bool> finishSendMA;
	sc_signal<bool> finishRecMA;

	sc_signal<bool> SendMB;
	sc_signal<bool> RecMB;
	sc_signal<bool> finishSendMB;
	sc_signal<bool> finishRecMB;

	sc_signal<bool> SendMx;
	sc_signal<bool> RecMX;
	sc_signal<bool> finishSendMX;
	sc_signal<bool> finishRecMX;

	sc_signal<bool> SendSum;
	sc_signal<bool> RecSum;
	sc_signal<bool> finishSendSum;
	sc_signal<bool> finishRecSum;


	//channel to be used

	stack stk_inst_MatA;
	stack stk_inst_MatB;
	stack stk_inst_MatX;
	stack stk_inst_Sum;
	fsm fsm_inst;
	hardware prod_inst;
	software cons_inst;

	top(sc_module_name nm):sc_module(nm), prod_inst("producer_inst"), cons_inst("consumer_inst"), fsm_inst("fsm_inst"), stk_inst_MatA("stack_inst_MatA"),stk_inst_MatB("stk_inst_MatB"),stk_inst_MatX("stk_inst_MatX"),stk_inst_Sum("stk_inst_Sum"){

		prod_inst.MatA(stk_inst_MatA);
		prod_inst.MatB(stk_inst_MatB);
		prod_inst.MatX(stk_inst_MatX);
		prod_inst.SumPort(stk_inst_Sum);

		prod_inst.RecM_A(RecMA);
		prod_inst.finishRecM_A(finishRecMA);
		prod_inst.RecM_B(RecMB);
		prod_inst.finishRecM_B(finishRecMB);
		prod_inst.SendM_X(SendMx);
		prod_inst.finishSendM_X(finishSendMX);
		prod_inst.SumSend(SendSum);
		prod_inst.finishSendSum(finishSendSum);

		prod_inst.clock(clk);

		cons_inst.MatA(stk_inst_MatA);
		cons_inst.MatB(stk_inst_MatB);
		cons_inst.MatX(stk_inst_MatX);
		cons_inst.SumPort(stk_inst_Sum);

		cons_inst.SendM_A(SendMA);
		cons_inst.finishSendM_A(finishSendMA);
		cons_inst.SendM_B(SendMB);
		cons_inst.finishSendM_B(finishSendMB);
		cons_inst.RecM_X(RecMX);
		cons_inst.finishRecM_X(finishRecMX);
		cons_inst.SumRec(RecSum);
		cons_inst.finishRecSum(finishRecSum);

		cons_inst.clock(clk);

		fsm_inst.RecM_A(RecMA);
		fsm_inst.SendM_A(SendMA);
		fsm_inst.finishRecM_A(finishRecMA);
		fsm_inst.finishSendM_A(finishSendMA);

		fsm_inst.RecM_B(RecMB);
		fsm_inst.SendM_B(SendMB);
		fsm_inst.finishRecM_B(finishRecMB);
		fsm_inst.finishSendM_B(finishSendMB);

		fsm_inst.SendM_X(SendMx);
		fsm_inst.RecM_X(RecMX);
		fsm_inst.finishSendM_X(finishSendMX);
		fsm_inst.finishRecM_X(finishRecMX);

		fsm_inst.SumSend(SendSum);
		fsm_inst.SumRec(RecSum);
		fsm_inst.finishSendSum(finishSendSum);
		fsm_inst.finishRecSum(finishRecSum);

		fsm_inst.clock(clk);
	}

};


#endif
