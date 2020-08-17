#include "NonFactorHeader.h"

//////////////////////////////////////////////////////////////////////
//
//Function Name	:	NonFact
//Parameter	:	integer
//Return Value	:	none
//Description	:	Used to print non-factor value of given number
//Author	:	Mayur Dimble
//Date		:	31-07-2020
//
//////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
	int iCnt = 0;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 2;iCnt <= iNo;iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			printf("%d\t",iCnt);
		}
	}
	printf("\n");
}
