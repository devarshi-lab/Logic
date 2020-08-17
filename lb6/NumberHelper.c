#include "NumberHeader.h"

//////////////////////////////////////////////////////////////////////////////
//
//Function Name	:	ReverseNumber
//Parameters	:	Integer
//Output	:	Integer
//Description	:	Used to reverse number
//date		:	04-08-2020
//Author	:	Mayur Dimble
//
//////////////////////////////////////////////////////////////////////////////

void ReverseNumber(int no)
{
	int rem = 0;
	if(no < 0)
	{
		no = -no;
	}
	while(no != 0)
	{
		rem = no % 10;
		printf("%d\n",rem);
		no = no/10;
	}
}

