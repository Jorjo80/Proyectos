#include "jacobi.h"
#include "stdlib.h"

int main()
{
	int A[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	int b[4]={1,2,3,4};
	int x[16];
	double error;
	error=jacobi_HLS(A,b,x);
	printf("error = %f\n",error);
	printf("x[]=  { ");
	for(int i=0; i<15;i++)
	{
		printf("%d,",x[i]);
	}
	printf("%d }\n",x[15]);
}
