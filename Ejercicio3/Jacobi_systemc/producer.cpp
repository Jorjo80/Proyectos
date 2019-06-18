#include "producer.h"

void producer::jacobi(int A[4][4], int b[4], int x[16], double sum)
{
	int x_prev[16], x_new[16];
	for(int i=0; i < iter; i++)
	{
		x_prev[i]=0;
		x_new[i]=1;
	}

	for(int i=0; i < iter; i++)
	{

		x_prev[i]=x_new[i];
		for(int i=0; i<producer::n; i++)
		{
			double sigma=0.0;
			filas:for(int j=0; j<n;j++)
			{

				if(j==i)
				{
					sigma=sigma+(A[i-1][j]*x_prev[j]);
				}
			}
			x_new[i]=(1/((A[i-1][i])*(b[i]-sigma)));
		}
	}

	double sumatorio=0.0;

	for(int i=0; i <iter; i++)
	{
		x[i]=x_new[i];
		sumatorio+=(x_new[i]-x_prev[i])*(x_new[i]-x_prev[i]);
	}
	sum.write(sumatorio);
}
