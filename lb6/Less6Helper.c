#include "Less6Header.h"
//////////////////////////////////////////////////////////////////////////
//
//Function Name	:	Count
//Parameter	:	integer
//Return Value	:	Integer
//Description	:	Used to return count of digit less than 6 in given number
//Author	:	Mayur Dimble
//Date		:	04-07-2020
//
////////////////////////////////////////////////////////////////////////////
int Count(int iNo)
{
	int iRem = 0,iCnt = 0;
	while(iNo != 0)
	{
		iRem = iNo % 10;
		if(iRem < 6)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
