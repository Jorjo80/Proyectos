// consumer.h
#ifndef CONSUMER_H
#define CONSUMER_H


#include "systemc.h"
#include "stack.h"


SC_MODULE(consumer){
public:
	sc_port<stack_read_if> in;
	sc_in<bool> clock;
	char ReadCharFromStack;
	void consume_data(){
		while(true){
			wait();
			if(in->nb_read(ReadCharFromStack)){
				cout << "R " << ReadCharFromStack << " at " << sc_time_stamp() << endl;
			}
		}

	}

	SC_CTOR(consumer){
		SC_THREAD(consume_data);
		sensitive << clock.pos();
	}
};

#endif
