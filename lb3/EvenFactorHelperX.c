#include "EvenFactorHeader.h"
/////////////////////////////////////////////////////////////////////////
//
//Function name	:	DisplayFactor
//Parameters	:	integer
//Return Value	:	none
//Description	:	Used to Display Even factors of given number
//Author	:	Mayur Dimble
//Date		:	31-07-2020
//
/////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
	int i = 0;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	for(i = 2; i<= iNo/2;i++)
	{
		if(iNo % i == 0 && i % 2 ==0)
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
}
