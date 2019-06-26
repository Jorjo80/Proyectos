#include "software.h"

void software::ReceiveMatX()
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
			printf("%f ", matrixX[j]);
		}
		printf("\n ");
	}
}
