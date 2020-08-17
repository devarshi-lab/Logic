#include "Between3to7Header.h"

//////////////////////////////////////////////////////////////////////////////
//
//Function Name	:	CountRange
//Parameters	:	Integer
//Output	:	Integer
//Description	:	Used to Count digit in given number between 3 to 7
//date		:	04-08-2020
//Author	:	Mayur Dimble
//
//////////////////////////////////////////////////////////////////////////////

int CountRange(int no)
{
	int rem = 0,iCnt = 0;
	if(no < 0)
	{
		no = -no;
	}
	while(no != 0)
	{
		rem = no % 10;
		if(rem >3 && rem < 7)
		{
			iCnt++;
		}
		no = no/10;
	}
	return iCnt;
}

