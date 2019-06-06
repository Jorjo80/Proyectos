
#include "systemc.h"
#include "top.h"

int sc_main(int argc,char* argv[]){

	int i=0;
//	sc_signal<bool> clock1;
//	sc_signal<bool> clock2;

	sc_set_time_resolution(1,SC_NS);

	sc_clock clock1("ClkFast", 100, SC_NS);
	sc_clock clock2("ClkSlow", 5, SC_NS);




	top *top_inst;
	top_inst = new top("TOPINO");
	top_inst->clk_prod(clock1);
	top_inst->clk_cons(clock2);

	//Start Simulation
	sc_start(100000, SC_NS);

//	sc_trace_file *wf = sc_create_vcd_trace_file("TOPINO");
//	// Dump the desired signals
//	sc_trace(wf, clock2, "clk_cons");
//	sc_trace(wf, clock1, "clk_prod");




//	while(true) {
//		clock1.write(true);
//		clock2.write(true);
//		sc_start(1);
//		clock1.write(true);
//		clock2.write(false);
//		sc_start(1);
//		clock1.write(false);
//		clock2.write(true);
//		sc_start(1);
//		clock1.write(false);
//		clock2.write(false);
//		sc_start(1);
//	}

//	while(true) {
//		clock1.write(true);
//		clock2.write(true);
//		wait(50,SC_NS);
//		clock1.write(true);
//		clock2.write(false);
//		wait(50,SC_NS);
//		clock1.write(false);
//		clock2.write(true);
//		wait(50,SC_NS);
//		clock1.write(false);
//		clock2.write(false);
//		wait(50,SC_NS);
//	}






	return 0;

}
