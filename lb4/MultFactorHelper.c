#include "MultFactorHeader.h"
////////////////////////////////////////////////////////////////////////////////
//
//Function Name	:	MultiFact
//Parameter	:	integer
//Return Value	:	integer
//Description	:	Used to return multiplication of factors of given number
//Author	:	Mayur Dimble
//Date		:	31-07-2020
//
///////////////////////////////////////////////////////////////////////////////
int MultFact(int iNo)
{

	int iCnt = 0,iMul = 1;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 2;iCnt <= iNo/2;iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iMul = iMul * iCnt;
		}
	}
	return iMul;
}
