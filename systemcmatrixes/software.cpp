#include "software.h"

void software::initialization(int A[4][4], int b[4]){
	for (int j=0;j<4;j++){
		b[j]=((j+2));
		for(int k=0;k<4;k++)
			A[j][k]=j*k+(j/(k+1));
	}
}
void software::senddata(){
	for (int j=0;j<4;j++){

			matrixb->write(b[j]);
			for(int k=0;k<4;k++)
				matrixA->write(A[j][k]);
		}

}


