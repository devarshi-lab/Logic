#include "CharacterHeader.h"
///////////////////////////////////////////////////////////////
//
//Function Name	:	DisplayConvert
//Parameters	:	Character
//Return Value	:	character
//Description	:	Used to return character in reverse case
//Author	:	Mayur Dimble
//Date		:	31-07-2020
//
///////////////////////////////////////////////////////////////

char DisplayConvert (char cValue)
{
	if(cValue >= 'a' && cValue <= 'z')
	{
		char ans = '\0';
		int iAsc = 0;
		ans = (int)cValue;
		ans = ans - 32;
		return (char)ans;
	}
	else if(cValue >= 'A' && cValue <= 'Z')
	{
		char ans = '\0';
		int iAsc = 0;
		ans = (int)cValue;
		ans = ans + 32;
		return (char)ans;
	}
	printf("\n");
}

