// producer.h
#ifndef PRODUCER_H
#define PRODUCER_H

#include "systemc.h"
#include "stack.h"

SC_MODULE(producer){
public:

	sc_port<stack_write_if> out;
	sc_in<bool> clock;

	void produce_data(){
		int i = 0;
		char String2send[500] ="This is a course of HLS-TLM";
		while(true){
			wait();
			if(out->nb_write(String2send[i])){
				cout << "W " << String2send[i] << " at " << sc_time_stamp() << endl;
//				i=(i+1)% 32;
				i=(i+1);
			}
		}

	}

	SC_CTOR(producer){
		SC_THREAD(produce_data);
		sensitive << clock.pos();
	}

};

#endif
