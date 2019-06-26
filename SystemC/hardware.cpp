#include "hardware.h"
void hardware::do_reset(){
	for (int j=0;j<16;j++){
		matrixA[j]=0;
		matrixX[j]=0;
	}
	for (int j=0;j<4;j++)
		matrixB[j]=0;
	ReadAFromStack=0;
	ReadBFromStack=0;
}
void hardware::ReceiveMatA(){
	while(true)
	{
		for(int j= 0;j<16;j++)
		{
			wait();
			if(MatA->nb_read(ReadAFromStack))
			{
				cout << "R MatA" << ReadAFromStack << " at " << sc_time_stamp() << endl;
				matrixA[j]=ReadAFromStack;
			}
		}
		printf("\n Matrix A = ");
		for(int j= 0;j<16;j++)
		{
			printf("%f ", matrixA[j]);
		}
		printf("\n ");
	}

}
void hardware::ReceiveMatB(){
	while(true)
	{
		for(int j= 0;j<4;j++)
		{
			wait();
			if(MatB->nb_read(ReadBFromStack))
			{
				cout << "R MatB" << ReadBFromStack << " at " << sc_time_stamp() << endl;
				matrixB[j]=ReadBFromStack;
			}
		}
		printf("\n Matrix B = ");
		for(int j= 0;j<4;j++)
		{
			printf("%f ", matrixB[j]);
		}
		printf("\n ");
	}

}

void hardware::SendMatX(){
		int i = 0;
		double matrixX[16];
		for(int j=0;j<16;j++)
		{
			matrixX[j]=(double)(j*(j+1.0));
		}
		while(true)
		{
			for(int j=0;j<16;j++)
			{
				wait();
				if(MatX->nb_write(matrixX[j])){
					cout << "W MatX" << (matrixX[j]) << " at " << sc_time_stamp() << endl;
				}

			}
			//finishM_X->write(true);
		}
}
void hardware::SendSum(){
	double sum;
	sum=matrixX[3]+matrixX[5];
	while(true)
	{
		wait();
		if(SumPort->nb_write(sum))
			cout<<"W Sum"<<sum<<" at "<<sc_time_stamp()<<endl;
	}

}



