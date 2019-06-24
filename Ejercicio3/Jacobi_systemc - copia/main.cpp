#include "systemc.h"
#include "consumer.h"
#include "producer.h"
#include "top.h"
#include "stdlib.h"
#include "stdio.h"

int sc_main(int argc, char* argv[]){

	int a[4][4];
	int b[4];
	int x[16];
	double sum;
	top todo("top", a, b, x, sum);
	todo.jacobitop();
	printf("solution \n x= ");
	for(int i = 0; i<16;i++)
	{
		printf("%d\t",todo.software.x[i]->read());
	}
	printf("error = %f ", todo.software.error);
	sc_start(1000, SC_NS);
	return 0;
}
