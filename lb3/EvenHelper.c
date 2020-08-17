#include "EvenHeader.h"

//////////////////////////////////////////////////////////////////////////////
//
//Function Name	:	PrintEven
//Parameters	:	Integer
//Return Value	:	none
//Description	:	Used to Print even numbers till given numbers of time
//Author	:	Mayur Dimble
//Date		:	31-07-2020
//
/////////////////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
	int iTemp = 2,iCnt = 0;
	if(iNo <= 0)
	{
		return;
	}
	while(1)
	{
		if(iTemp % 2 == 0)
		{
			printf("%d\t",iTemp);
			iCnt++;
		}
		if(iCnt == iNo)
		{
			break;
		}
		iTemp++;
	}
	printf("\n");
}
