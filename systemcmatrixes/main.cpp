#include <systemc.h>
#include "top.h"
#define SIZE 32

int sc_main(int argc, char* argv[]){
	top ourtop("top",SIZE,SIZE);
	printf("It's over\n");

return 0;
}
