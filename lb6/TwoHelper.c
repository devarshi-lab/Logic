#include "TwoHeader.h"
//////////////////////////////////////////////////////////////////////////
//
//Function Name	:	CountTwo
//Parameter	:	integer
//Return Value	:	Integer
//Description	:	Used to return frequency of digit 2 in given number
//
//
////////////////////////////////////////////////////////////////////////////
int CountTwo(int iNo)
{
	int iRem = 0,iCnt = 0;
	while(iNo != 0)
	{
		iRem = iNo % 10;
		if(iRem == 2)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
