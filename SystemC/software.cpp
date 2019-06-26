#include "software.h"

void software::SendMatA(){
	int i = 0;
	double matrixA[16];
	for(int j=0;j<16;j++)
	{
		matrixA[j]=(double)(j*(j+1.0));
	}
	while(SendM_A->read()==true)
	{
		for(int j=0;j<16;j++)
		{
			wait();
			if(MatA->nb_write(matrixB[j])){
				cout << "W MatA" << (matrixB[j]) << " at " << sc_time_stamp() << endl;
			}

		}
		finishSendM_A->write(true);
	}
}
void software::SendMatB(){
	double matrixB[4];
	for(int j=0;j<4;j++)
	{
		matrixB[j]=(double)(j*(j+1.0));
	}
	while(SendM_B->read()==true)
	{
		for(int j=0;j<4;j++)
		{
			wait();
			if(MatB->nb_write(matrixB[j])){
				cout << "W MatB" << (matrixA[j]) << " at " << sc_time_stamp() << endl;
			}

		}
		finishSendM_B->write(true);
	}
}

void software::ReceiveMatX()
{
	while(RecM_X->read()==true)
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
		printf("\n Matrix X = ");
		for(int j= 0;j<16;j++)
		{
			printf("%f ", matrixX[j]);
		}
		printf("\n ");
		finishRecM_X->write(true);
	}
}
void software::ReceiveSum(){
	while(SumRec->read()==true){
		wait();
		if(SumPort->nb_read(ReadSumFromStack)){
			//cout<<"R Sum"<<ReadSumFromStack<<" at "<<sc_time_stamp()<<endl;
			sum=ReadSumFromStack;
		}
		printf("%f", sum);
		finishRecSum->write(true);
	}

}
