// producer.h
#ifndef PRODUCER_H
#define PRODUCER_H

#include "systemc.h"

SC_MODULE(producer){
public:

	sc_out<char> data_out;
	sc_in<bool> clock;
	sc_out<bool> valid_w;
	sc_in<bool> ready_w;


	void produce_data(){
		int i = 0,k=0;
		char String2send[500] ="This is a course of HLS-TLM";

		while(true){
			wait();

			if(ready_w==true){
				cout << "Data sent from the producer " << data_out ;
				cout << " at " << sc_time_stamp() << endl;
				valid_w.write(false);
				if(i<27){
					i=i+1;
				}else{
					i=0;
				}

			}else{
				valid_w->write(true);
				data_out->write(String2send[i]);

			}
		}
	}

	SC_CTOR(producer){
		SC_THREAD(produce_data);
		sensitive << clock.pos();
	}

};

#endif
