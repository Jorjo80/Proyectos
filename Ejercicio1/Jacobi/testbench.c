#include "jacobi.h"

int main()
{
	int A[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	int b[4]={1,2,3,4};
	int x[16];
	double error;
	int n=4,iter=16;
	error=jacobi_HLS(A,b,n,iter,x);
}
