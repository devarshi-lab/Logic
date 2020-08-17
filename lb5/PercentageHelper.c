#include "PercentageHeader.h"

///////////////////////////////////////////////////////////////////
//
//Function Name	:	Percentage
//Parameter	:	integer, integer
//Return Value	:	Float
//Description	:	Used to calculate percetage of given number
//Author	:	Mayur Dimble
//Date		:	03-07-2020
//
///////////////////////////////////////////////////////////////////


float Percentage(int iValue1,int iValue2)
{
	float iPer = 0.0f;
	iPer = (float)(iValue2*100)/iValue1;
	return iPer;
}
