#include "ZeroHeader.h"

///////////////////////////////////////////////////////////////////////////
//
//Function Name	:	ChkZero
//Paramater	:	integer
//Return Value	:	BOOLEAN
//Description	:	Used to check number contain zero in it
//Author	:	Mayur Dimble
//Date		:	04-07-2020
//
///////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
	int iRem = 0;
	while(iNo != 0)
	{
		iRem = iNo % 10;
		if(iRem == 0)
		{
			return TRUE;
		}
		iNo = iNo / 10;
	}
	return FALSE;
}

