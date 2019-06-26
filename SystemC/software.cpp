#include "software.h"

void software::SendMatA(){
	int i = 0;
	double matrixA[16];
	for(int j=0;j<16;j++)
	{
		matrixA[j]=(double)(j*(j+1.0));
	}
	while(true)
	{
		for(int j=0;j<16;j++)
		{
			wait();
			if(MatA->nb_write(matrixB[j])){
				cout << "W MatA" << (matrixB[j]) << " at " << sc_time_stamp() << endl;
			}

		}
		//finishM_X->write(true);
	}
}
void software::SendMatB(){
	int i = 0;
	double matrixB[4];
	for(int j=0;j<4;j++)
	{
		matrixB[j]=(double)(j*(j+1.0));
	}
	while(true)
	{
		for(int j=0;j<4;j++)
		{
			wait();
			if(MatB->nb_write(matrixB[j])){
				cout << "W MatB" << (matrixA[j]) << " at " << sc_time_stamp() << endl;
			}

		}
		//finishM_X->write(true);
	}
}

void software::ReceiveMatX()
{
	while(true)
	{
		for(int j= 0;j<16;j++)
		{
			wait();
			if(MatX->nb_read(ReadXFromStack))
			{
				cout << "R MatX" << ReadXFromStack << " at " << sc_time_stamp() << endl;
				matrixX[j]=ReadXFromStack;
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
void software::ReceiveSum(){
	while(true){
		wait();
		if(SumPort->nb_read(ReadSumFromStack)){
			cout<<"R Sum"<<ReadSumFromStack<<" at "<<sc_time_stamp()<<endl;
			sum=ReadSumFromStack;
		}
	}

}
