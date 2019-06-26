
#include "systemc.h"
#include "top.h"

int sc_main(int argc,char* argv[]){

	int i=0;

	sc_set_time_resolution(1,SC_NS);

	sc_clock clock("ClkFast", 10, SC_NS);


	top *top_inst;
	top_inst = new top("TOPINO");
	top_inst->clk_prod(clock);
	top_inst->clk_cons(clock);

	//Start Simulation
	sc_start(100000, SC_NS);


	return 0;

}
