#include "systemc.h"
#include "top.h"

int sc_main(int argc,char* argv[]){

	int i=0;

	sc_set_time_resolution(1,SC_NS);

	sc_clock clock1("ClkFast", 100, SC_NS);
	sc_clock clock2("ClkSlow", 25, SC_NS);




	top *top_inst;
	int size = 2;
	top_inst = new top("TOPINO",size);
	top_inst->clk_prod(clock1);
	top_inst->clk_cons(clock2);

	//Start Simulation
	sc_start(100000, SC_NS);



	return 0;

}
