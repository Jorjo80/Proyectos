#include "math.h"
#include "stdlib.h"

int main ()
{
	int A[4][4];
	int b[4];
	int x[1][16];
	double error;
	int n,iter;
	jacobi_HLS(A,b,n,iter,x,error);

}

void jacobi_HLS(A,b,n,iter,x,error)
{
	int x_prev[1][16], x_new[1][16];
	for(int i= 0;i<16;i++)
	{
		x_prev[1][i]=0;
		x_new[1][i]=0;
	}

	for(int i=0; i<iter;i++)
	{
		x_prev=x_new;
		for(int i=0; i<n;i++)
		{
			double sigma=0.0;
			for(int j=0; j<n;j++)
			{
				if(j==i)
				{
					sigma=sigma+A[i-1][j]*x_prev[j];
				}
			}
			x_new[i]=(1/((A[i-1][i])*(b[i]-sigma)));
		}
	}

	x=x_new;
	error=sqrt(sum((x_new-x_prev)*(x_new-x_prev)));
}
