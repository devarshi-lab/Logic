#include "DescFactorHeader.h"

////////////////////////////////////////////////////////////////////////////////////
//
//Function Name	:	FactRev
//Parameter	:	integer
//Return Value	:	none
//Description	:	Used to Display Factors of given number in descending order
//Author	:	Mayur Dimble
//Date		:	31-07-2020
//
/////////////////////////////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
	int iCnt = 0;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	for(iCnt = iNo/2; iCnt >= 1;iCnt--)
	{
		if(iNo % iCnt == 0)
		{
			printf("%d\t",iCnt);
		}
	}
	printf("\n");
}
