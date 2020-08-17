#include "OddHeader.h"

//////////////////////////////////////////////////////////////////////////////
//
//Function Name	:	MultDigits
//Parameters	:	Integer
//Output	:	Integer
//Description	:	Used to return multiplication of digits in given number
//date		:	04-08-2020
//Author	:	Mayur Dimble
//
//////////////////////////////////////////////////////////////////////////////

int MultDigits(int no)
{
	int rem = 0,iCnt = 0,iMul = 1;
	if(no < 0)
	{
		no = -no;
	}
	while(no != 0)
	{
		rem = no % 10;
		iMul = iMul * rem;
		no = no/10;
	}
	return iMul;
}

