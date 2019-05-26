#include "math.h"
#include "stdlib.h"
#include "jacobi.h"

void jacobi_HLS(int J[4][4],int b[4],int n,int iter,int x[16],double error)
{
	int x_prev[16], x_new[16];

	for(int i= 0;i<16;i++)
	{

		x_prev[i]=0;
		x_new[i]=0;
	}

	for(int t=0; t<iter;t++)
	{
		for(int i=0; i<n; i++)
		{
			double sigma=0.0;
			for(int j=0; j<n;j++)
			{
				if(j==i)
				{
					sigma=sigma+(J[i-1][j]*x_prev[j]);
				}
			}
			x_new[i]=(1/((J[i-1][i])*(b[i]-sigma)));
		}
	}

	double sum=0.0;
	for(int q=0;q<16;q++)
	{
		x[q]=x_new[q];
		sum+=(x_new[q]-x_prev[q])*(x_new[q]-x_prev[q]);
	}
	error=sqrt(sum);
}

