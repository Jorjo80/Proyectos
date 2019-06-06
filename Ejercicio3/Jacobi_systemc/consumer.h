// consumer.h
#ifndef CONSUMER_H
#define CONSUMER_H


#include "systemc.h"
#include "fifo.h"
//#include "stack.h"


SC_MODULE(consumer){
public:

	sc_port<sc_fifo_in_if<double> > error;
	sc_port<sc_fifo_in_if<int*> > x;
	sc_in<bool> clock;
	double ReadCharFromStack;
	void consume_data(){
		while(true){
			wait();
			if(error->nb_read(ReadCharFromStack)){
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
