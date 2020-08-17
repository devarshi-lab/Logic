#include "q1_Header.h"

////////////////////////////////////////////////////////////
//
//Function name	:	Divide
//Parameters	:	int ,int
//Return Value	:	int
//Description	:	Used to divide two numbers
//Author	:	Mayur Dimble
//Date		:	24-07-2020
//
///////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
	int iAns = 0;
	if(iNo2 == 0)
	{
		return -1;
	}
	iAns = iNo1 / iNo2;

	return iAns;
}
