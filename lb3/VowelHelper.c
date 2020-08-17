#include "VowelHeader.h"

//////////////////////////////////////////////////////////////////////////
//
//Function Name	:	ChkVowel
//Parameter	:	Character
//Return Value	:	BOOLEAN
//Description	:	Used to check given character is vowel or not
//Author	:	Mayur Dimble
//Date		:	31-07-2020
//
//////////////////////////////////////////////////////////////////////////

BOOLEAN ChkVowel (char cValue)
{
	if(cValue == 'a' || cValue == 'e' ||cValue == 'i' ||cValue == 'o' ||cValue == 'u' ||cValue == 'A' ||cValue == 'E' ||cValue == 'I' ||cValue == 'O' ||cValue == 'U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
