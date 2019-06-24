#include "consumer.h"
#include "math.h"

void consumer::setmatrices(){

	int W[4][4], T[4];
	for (int j=0;j<4;j++){
		T[j]=j*j+(2*j);
		for(int k=0;k<4;k++)
			W[j][k]=j*k+k/(j+1);
	}
	//W={ { 1, 2, 3, 4}, { 2, 1, 5, 2}, { 32, 12, 3, 4}, { 1, 0, 5, 3} };
	//T={ 3, 4, 5, 1 };

	for (int i = 0; i<4;i++)
	{
		b[i]->write(T[i]);
		for(int j=0; j<4;j++)
		{
			A[i][j]->write(W[i][j]);
		}
	}
}

void consumer::calculo_error()
{
	double sumable;
	sumable=sum->read();
	error=sqrt(sumable);
}
