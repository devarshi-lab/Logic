#include "NonFactorSumHeader.h"

//////////////////////////////////////////////////////////////////////
//
//Function Name	:	NonFact
//Parameter	:	integer
//Return Value	:	integer
//Description	:	Used to return non-factor numbers addition of given number
//Author	:	Mayur Dimble
//Date		:	31-07-2020
//
//////////////////////////////////////////////////////////////////////

int NonFact(int iNo)
{
	int iCnt = 0,iSum = 0;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 2;iCnt <= iNo;iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}
