#include "FactorDiffHeader.h"
/////////////////////////////////////////////////////////////
//
//Function Name	:	FactDiff
//Parameter	:	integer
//Return Value	:	Integer
//Description	:	Used to return difference between summation
//			of factor and summation of non factor
//Author	:	Mayur Dimble
//Date		:	31-07-2020
//
/////////////////////////////////////////////////////////////

int FactDiff(int iValue)
{
	int iCnt = 0,iNonFact = 0,iFact = 0;
	if(iValue <= 0)
	{
		iValue = -iValue;
	}
	for(iCnt = 1;iCnt <= iValue/2;iCnt++)
	{
		if(iValue % iCnt == 0)
		{
			iFact = iFact + iCnt;
		}
	}
	for(iCnt = 2;iCnt <= iValue;iCnt++)
	{
		if(iValue % iCnt != 0)
		{
			iNonFact = iNonFact + iCnt;
		}
	}
	return iFact - iNonFact;
}
