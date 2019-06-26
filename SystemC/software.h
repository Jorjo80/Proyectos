// consumer.h
#ifndef SOFTWARE_H
#define SOFTWARE_H


#include "systemc.h"
#include "stack.h"
#include "stdio.h"


SC_MODULE(software){
public:
	sc_port<stack_read_if> in;
	sc_in<bool> clock;
	int ReadCharFromStack;
	int matrixX[16];
	void consume_data()
	{
		while(true)
		{
			for(int j= 0;j<16;j++)
			{
				wait();
				if(in->nb_read(ReadCharFromStack))
				{
					cout << "R " << ReadCharFromStack << " at " << sc_time_stamp() << endl;
					matrixX[j]=ReadCharFromStack;
				}
			}
			printf("\n Matrix X = ");
			for(int j= 0;j<16;j++)
			{

				printf("%d ", matrixX[j]);

			}
			printf("\n ");
		}
	}

	SC_CTOR(software){
		SC_THREAD(consume_data);
		sensitive << clock.pos();
	}
};

#endif
