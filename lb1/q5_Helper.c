#include "q5_Header.h"
//////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name	:	Accept
//Paramters	:	int
//Return Value	:	void
//Description	:	Used to display * on screen number of times user enter value times
//Author	:	Mayur Dimble
//Date		:	24-07-2020
//
//////////////////////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
	int iCnt = 0;
	for( iCnt = 1 ; iCnt <= iNo ; iCnt++)
	{
		printf("*");
	}
}
