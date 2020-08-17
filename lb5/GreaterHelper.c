#include "GreaterHeader.h"
////////////////////////////////////////////////////////////////////////
//
//Function name	:	ChkGreater
//parameter	:	integer
//Return value	:	Boolean
//Description	:	Used to check given number is greater than 100 
//Author	:	Mayur Dimble
//Date		:	03-07-2020
//
////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
	if(iNo > 100)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
