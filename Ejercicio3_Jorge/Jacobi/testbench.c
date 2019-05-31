#include "jacobi.h"
#include "stdlib.h"

int main()
{
	int A[4][4]={{1,2,3,4},{5,2,45,6},{1,55,11,22},{1,13,12,4}};
	int b[4]={1,4,6,8};
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
