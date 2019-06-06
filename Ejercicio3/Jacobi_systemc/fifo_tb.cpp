#include "systemc.h"
#include "top.h"

int sc_main(int argc,char* argv[]){

	int i=0;

	sc_set_time_resolution(1,SC_NS);

	sc_clock clock1("ClkFast", 25, SC_NS);
	sc_clock clock2("ClkSlow", 100, SC_NS);




	top *top_inst;
	int size = 10;
	top_inst = new top("TOPINO",size);
	top_inst->clk_prod(clock1);
	top_inst->clk_cons(clock2);

	//Start Simulation
	sc_start(100000, SC_NS);

//	sc_trace_file *wf = sc_create_vcd_trace_file("TOPINO");
//	// Dump the desired signals
//	sc_trace(wf, clock2, "clk_cons");
//	sc_trace(wf, clock1, "clk_prod");


	return 0;

}
