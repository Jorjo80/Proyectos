#ifndef TOP_H
#define TOP_H
#include <systemc.h>
#include "software.h"
#include "hardware.h"
class top: public sc_module{
public:
	sc_fifo< int >fifo_A;
	sc_fifo< int >fifo_B;

	software oursoftware;
	hardware ourhardware;
	void overallrun(){
			ourhardware.matrixA(fifo_A);
			oursoftware.matrixA(fifo_A);
			ourhardware.matrixb(fifo_B);
			ourhardware.matrixb(fifo_B);

	}

top(sc_module_name nm,int sizeA, int sizeB):sc_module(nm),fifo_A("fifo_A",sizeA),fifo_B("fifo_B",sizeB),ourhardware("ourhardware"),oursoftware("oursoftware"){
	overallrun();

}

};

#endif
