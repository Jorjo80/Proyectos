#include "systemc.h"
#include "consumer.h"
#include "producer.h"
#include "top.h"
#include "stdlib.h"
#include "stdio.h"

int sc_main(int argc, char* argv[]){

	int a=32;
	int b=32;
	int x=32;
	int sum=64;
	top todo("top", a, b, x, sum);
	todo.jacobitop();
	printf("solution \n x= ");
	for(int i = 0; i<16;i++)
	{
		printf("%d\t",todo.software.resultado[i]);
	}
	printf("error = %f ", todo.software.error);
	sc_start(10000, SC_NS);
	return 1;
}
