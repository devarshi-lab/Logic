#include "q4_Header.h"
///////////////////////////////////////////////////////////////////////////
//
//Function Name	:	Check
//Parameters	:	int
//Return Value	:	BOOL
//Description	:	Used to check given number is divisible 5 or not
//Author	:	Myur Dimble
//Date		:	24-07-2020
//
//////////////////////////////////////////////////////////////////////////

BOOL Check( int iNo)
{
	if(( iNo % 5) == 0)
	{	
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
