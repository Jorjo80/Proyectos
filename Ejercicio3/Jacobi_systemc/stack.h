// stack.h
#ifndef STACK_H
#define STACK_H

#include "systemc.h"

class stack_read_if: virtual public sc_interface{
	public:

		//read a character
		virtual bool nb_read(double&)=0;

};

class stack_write_if: virtual public sc_interface{
	public:

		//read a character
		virtual bool nb_write(double)=0;

		virtual void reset()=0;

};


class stack: public sc_module, public stack_write_if, public stack_read_if{

	private:
		char data[20];
		int top;

	public:
		stack(sc_module_name nm):sc_module(nm),top(0){}

		bool nb_write (double c){
			if(top < 20){
				data[top++]=c;
				return true;
			}
			return false;
		}

		void reset(){
			top=0;
		}

		bool nb_read (double &c){
			if(top > 0){
				c=data[--top];
				return true;
			}
			return false;
		}

		void register_port(sc_port_base& port_, const char* if_typename_){
			cout<< "binding " << port_.name() << " to interface: " << if_typename_ << endl;
		}

};


#endif
