#include "FourHeader.h"
//////////////////////////////////////////////////////////////////////////
//
//Function Name	:	CountFour
//Parameter	:	integer
//Return Value	:	Integer
//Description	:	Used to return frequency of digit 2 in given number
//Author	:	Mayur Dimble
//Date		:	04-07-2020
//
////////////////////////////////////////////////////////////////////////////
int CountFour(int iNo)
{
	int iRem = 0,iCnt = 0;
	while(iNo != 0)
	{
		iRem = iNo % 10;
		if(iRem == 4)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
