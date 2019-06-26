#include "hardware.h"

void hardware::SendmatrixX(){
		int i = 0;
		double matrixX[16];
		for(int j=0;j<16;j++)
		{
			matrixX[j]=(double)(j*(j+1.0));
		}
		while(true)
		{
			for(int j=0;j<16;j++)
			{
				wait();
				if(out->nb_write(matrixX[j])){
					cout << "W " << (matrixX[j]) << " at " << sc_time_stamp() << endl;
				}

			}
			//finishM_X->write(true);
		}
}



