// consumer.h
#ifndef CONSUMER_H
#define CONSUMER_H


#include "systemc.h"


SC_MODULE(consumer){
public:

	sc_in<char> data_in;
	sc_in<bool> clock;
	sc_in<bool> valid_r;
	sc_out<bool> ready_r;

	char ReadCharFromStack;
	void consume_data(){

		ready_r->write(false);
		while(true){
			wait();

			if(valid_r.read() == true){
				//cout << "writer valid " << ready_r << " at " << sc_time_stamp() << endl;
				if(ready_r==true){
					//cout << "writer " << data_in.read() << " at " << sc_time_stamp() << endl;
					ready_r->write(false);
					ReadCharFromStack=data_in;
					cout << "Data received by the consumer "<< ReadCharFromStack << " at " << sc_time_stamp() << endl;
				}else{

					ready_r->write(true);
				}

			}

		}

	}

	SC_CTOR(consumer){
		SC_THREAD(consume_data);
		sensitive << clock.pos();
	}
};

#endif
