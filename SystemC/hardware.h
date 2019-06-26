// producer.h
#ifndef HARDWARE_H
#define HARDWARE_H

#include "systemc.h"
#include "stack.h"

SC_MODULE(hardware){
public:

	sc_port<stack_write_if> out;
	sc_in<bool> clock;

	void produce_data(){
		int i = 0;
		int matrixX[16];
		for(int j=0;j<16;j++)
		{
			matrixX[j]=j*(j+1);
		}
		while(true)
		{
			for(int j=0;j<16;j++)
			{
				wait();
				if(out->nb_write(matrixX[j])){
					cout << "W " << (matrixX[j]) << " at " << sc_time_stamp() << endl;
				}
			}
		}

	}

	SC_CTOR(hardware){
		SC_THREAD(produce_data);
		sensitive << clock.pos();
	}

};

#endif
