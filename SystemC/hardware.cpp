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
	send = false;
	receive = true;
	calculate = false;

}

void hardware::Receiving(){
	while(receive)
	{
		for(int j= 0;j<16;j++)
		{
			wait();
			if(MatA->nb_read(ReadAFromStack))
			{
				//cout << "R MatA" << ReadAFromStack << " at " << sc_time_stamp() << endl;
				matrixA[j]=ReadAFromStack;
			}
		}
		for(int j= 0;j<4;j++)
		{
			wait();
			if(MatB->nb_read(ReadBFromStack))
			{
						//cout << "R MatB" << ReadBFromStack << " at " << sc_time_stamp() << endl;
						matrixB[j]=ReadBFromStack;
			}
		}
		receive=false;
		calculate=true;
	}
	printf("\n Matrix A = ");
	for(int j= 0;j<16;j++)
	{
		printf("%f ", matrixA[j]);
	}
	printf("\n Matrix B = ");
	for(int j= 0;j<4;j++)
	{
		printf("%f ", matrixB[j]);
	}
	printf("\n ");
}

void hardware::Sending(){
	int i = 0;
	while(send)
	{
		for(int j=0;j<16;j++)
		{
			wait();
			if(MatX->nb_write(matrixX[j])){
				//cout << "W MatX" << (matrixX[j]) << " at " << sc_time_stamp() << endl;
			}

		}
		wait();
		if(SumPort->nb_write(sum))
		{
			//cout<<"W Sum"<<sum<<" at "<<sc_time_stamp()<<endl;
		}
	}
	send=true;
}

void hardware::calculojacobi()
{
	int A[4][4];
	for(int i=0; i<4; i++)
	{
		for(int k=0; k<4;k++)
		{
			A[i][k]=matrixA[i+k];
		}
	}
	int x_prev[16], x_new[16];
	double error;
	for(int i= 0;i<iter;i++)
	{
		x_prev[i]=0;
		x_new[i]=1;
	}

	for(int t=0; t<iter;t++)
	{
		x_prev[iter]=x_new[iter];
		for(int i=0; i<n; i++)
		{
			double sigma=0.0;
			for(int j=0; j<n;j++)
			{
				if(j!=i)
				{
					sigma=sigma+(A[i-1][j]*x_prev[j]);
				}
			}
			x_new[i]=(1/((A[i-1][i])*(matrixB[i]-sigma)));
		}
	}
	for(int q=0;q<iter;q++)
	{
		matrixX[q]=x_new[q];
		sum+=(x_new[q]-x_prev[q])*(x_new[q]-x_prev[q]);
	}
	printf("\n fin jacobi \n");
	calculate = false;
	send = true;
}

void hardware::control(){

	while(receive)
	{
		hardware::Receiving();
	}
	while(calculate)
	{
			hardware::calculojacobi();
	}
	while(send)
	{
		hardware::Sending();
	}

}



