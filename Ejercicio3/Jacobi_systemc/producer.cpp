#include "producer.h"

void producer::jacobi()
{
	int x_prev[16], x_new[16];
	for(int i=0; i < ITER; i++)
	{
		x_prev[i]=0;
		x_new[i]=1;
	}

	for(int i=0; i < ITER; i++)
	{

		x_prev[i]=x_new[i];
		for(int i=0; i<N; i++)
		{
			double sigma=0.0;
			filas:for(int j=0; j<N;j++)
			{

				if(j==i)
				{
					sigma=sigma+((A[i-1][j]->read())*x_prev[j]);
				}
			}
			x_new[i]=(1/((A[i-1][i]->read())*((b[i]->read())-sigma)));
		}
	}

	double sumatorio=0.0;

	for(int i=0; i <ITER; i++)
	{
		x[i]->write(x_new[i]);
		sumatorio+=(x_new[i]-x_prev[i])*(x_new[i]-x_prev[i]);
	}
	sum->write(sumatorio);
}
