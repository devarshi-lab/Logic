#include "EvenHeader.h"

//////////////////////////////////////////////////////////////////////////////
//
//Function Name	:	ChkEven
//Parameters	:	Integer
//Output	:	Integer
//Description	:	Used to check even digits in given number
//date		:	04-08-2020
//Author	:	Mayur Dimble
//
//////////////////////////////////////////////////////////////////////////////

int ChkEven(int no)
{
	int rem = 0,iCnt = 0;
	if(no < 0)
	{
		no = -no;
	}
	while(no != 0)
	{
		rem = no % 10;
		if(rem % 2 == 0)
		{
			iCnt++;
		}
		no = no/10;
	}
	return iCnt;
}

