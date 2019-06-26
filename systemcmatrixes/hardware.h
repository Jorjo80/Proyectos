#ifndef HARDWARE.H
#define HARDWARE.H
#include <systemc.h>
#include <stdio.h>
SC_MODULE (hardware){

public:
	int A[4][4],b[4],x[4], sum;
	sc_port<sc_fifo_in_if < int > > matrixA;
	sc_port<sc_fifo_in_if < int > > matrixb;
	sc_in < bool > clk;
	void fulfilling(int A[4][4], int b[4]){
		for(int j=0;j<4;j++){
			b[j]=matrixb->read();
			for(int k=0;k<4;k++)
				A[j][k]=matrixA->read();
		}
	}
	void timetoprint(void){

		for(int j=0;j<4;j++){
			printf("%d",b[j]);
			for(int k=0;k<4;k++)
				printf("%d",A[j][k]);
		}
	}


	SC_CTOR (hardware){
		sum=0;
		fulfilling(A,b);
		//sensitive<<clk.pos();
		timetoprint();

	}
};

#endif
