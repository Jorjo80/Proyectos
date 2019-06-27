#include "software.h"

void software::do_reset()
{
	ReadXFromStack=0;
	ReadSumFromStack=0;
}
void software::Sending(){
	int i = 0;
	for(int j=0;j<16;j++)
	{
		matrixA[j]=(double)(2*j*j);
	}
	for(int j=0;j<4;j++)
	{
		matrixB[j]=(double)(12*j);
	}
	while(true)
	{
		for(int j=0;j<16;j++)
		{
			wait();
			if(MatA->nb_write(matrixA[j])){
				//cout << "W MatA" << (matrixB[j]) << " at " << sc_time_stamp() << endl;
			}

		}
		for(int j=0;j<4;j++)
		{
			wait();
			if(MatB->nb_write(matrixB[j])){
				//cout << "W MatB" << (matrixA[j]) << " at " << sc_time_stamp() << endl;
			}
		}
	}
}

void software::Receiving()
{
	int i=0;
	do
	{
		for(int j= 0;j<16;j++)
		{
			wait();
			if(MatX->nb_read(ReadXFromStack))
			{
				//cout << "R MatX" << ReadXFromStack << " at " << sc_time_stamp() << endl;
				matrixX[j]=ReadXFromStack;
			}
		}
		if(SumPort->nb_read(ReadSumFromStack)){
			//cout<<"R Sum"<<ReadSumFromStack<<" at "<<sc_time_stamp()<<endl;
			sum=ReadSumFromStack;
			i=1;
		}
		error=sqrt(sum);
	}while(i==0);
	printf("\n Matrix X= ");
	for(int i=0;i<16;i++)
	{
		printf("%f ",matrixX[i]);
	}
	printf("\n error= %f \n", error);

}

