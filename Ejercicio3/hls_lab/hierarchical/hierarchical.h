// hierarchical.h
#ifndef HIERARCHICAL_H
#define HIERARCHICAL_H


#include "systemc.h"

SC_MODULE(adapter_write){
public:

	sc_in<char> data_in;
	sc_port<sc_fifo_out_if<char> > data_fifo_out;
	sc_in<bool> clock;
	sc_in<bool> valid_w;
	sc_out<bool> ready_w;

	void write_action(){
		bool data_written=true;
		char ReadFromProd;

		ready_w->write(false);
		while(true){
			wait();

			if(valid_w.read() == true && data_written==true){

				if(ready_w==true){
					ReadFromProd=data_in;

					if(data_fifo_out->nb_write(ReadFromProd)==false){
						ready_w->write(false);
						data_written=false;
					}else{
						data_written=true;
						cout << "Data received by the writer " << data_in << " at " << sc_time_stamp() << endl;
					}
					ready_w->write(false);
				}else{

					ready_w->write(true);
				}

			}else if(valid_w.read() == true && data_written!=true){
				if(data_fifo_out->nb_write(data_in)==false){
					ready_w->write(false);
					data_written=false;
				}else{
					data_written=true;
				}

			}

		}

	}

	SC_CTOR(adapter_write){
		SC_THREAD(write_action);
		sensitive << clock.pos();
	}

};




SC_MODULE(adapter_read){
public:

	sc_out<char> data_out;
	sc_port<sc_fifo_in_if<char> > data_fifo_in;
	sc_in<bool> clock;
	sc_out<bool> valid_r;
	sc_in<bool> ready_r;
	char ReadCharFIFO;


	void read_action(){

		bool data_valid=false,data_sent=true;


		while(true){
			wait();
			if((data_fifo_in->nb_read(ReadCharFIFO))==true && data_sent==true){

				//ok data_valid==true
				data_valid=true;
				data_sent=false;
			}else{
				data_valid=false;
			}


			if(data_valid==true){
				valid_r->write(true);
				data_out->write(ReadCharFIFO);
			}


			if(ready_r==true){
				cout << "Data sent from the reader " << data_out << " at " << sc_time_stamp() << endl;
				valid_r.write(false);
				data_sent=true;
			}
		}
	}

	SC_CTOR(adapter_read){
		SC_THREAD(read_action);
		sensitive << clock.pos();
	}

};




#endif
