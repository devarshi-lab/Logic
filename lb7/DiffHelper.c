#include "OddHeader.h"

//////////////////////////////////////////////////////////////////////////////
//
//Function Name	:	CountDiff
//Parameters	:	Integer
//Output	:	Integer
//Description	:	Used to check Odd digits in given number
//date		:	04-08-2020
//Author	:	Mayur Dimble
//
//////////////////////////////////////////////////////////////////////////////
/*
int CountDiff(int no)
{
	int rem = 0,iOdd= 0,iEven = 0;
	if(no < 0)
	{
		no = -no;
	}
	while(no != 0)
	{
		rem = no % 10;
		if(rem % 2 != 0)
		{
			iOdd = iOdd + rem;
		}
		else
		{
			iEven = iEven + rem;
		}
		no = no/10;
	}
	return iEven - iOdd;
}

*/
int CountDiff(int no)
{
	int Diff = 0;
	if(no < 0)
	{
		no = -no;
	}
	while(no != 0)
	{
		if((no % 10) % 2 != 0)
		{
			Diff = Diff - (no % 10);
		}
		else
		{
			Diff = Diff + (no % 10);
		}
		no = no/10;
	}
	return Diff;
}



