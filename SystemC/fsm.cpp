#include "fsm.h"


void fsm::control()
{
	int i=0;
	if(i==0)
	{
		SendM_X->write(false);
		SumSend->write(false);
		RecM_B->write(false);
		RecM_A->write(true);
		RecM_X->write(false);
		SumRec->write(false);
		SendM_B->write(false);
		SendM_A->write(true);
	}
	if(finishSendM_A.read())
	{
		if(finishRecM_A->read())
		{
			RecM_A->write(false);
			SendM_A->write(false);
			RecM_B->write(true);
			SendM_B->write(true);
		}
	}



	if(finishSendM_B.read())
	{
		if(finishRecM_B.read())
		{
			RecM_B->write(false);
			SendM_B->write(false);
			RecM_X->write(true);
			SendM_X->write(true);
		}

	}
	if(finishSendM_X.read())
	{
		if(finishRecM_X->read())
		{
			RecM_X->write(false);
			SendM_X->write(false);
			SumRec->write(true);
			SumSend->write(true);
		}
	}
	if(finishSendSum.read())
	{
		if(finishRecSum.read())
		{
			SumRec->write(false);
			SumSend->write(false);
			printf("\n all data sended \n");
		}
	}

}
