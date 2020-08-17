/*
	Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
	Input : E Output : TRUE
	Input : d Output : FALSE
*/
#include "VowelHelper.c"

int main()
{
	char cValue = '\0';
	BOOLEAN bRet = FALSE;
	printf("Enter character\n");
	scanf("%c",&cValue);
	bRet = ChkVowel(cValue);
	if (bRet == TRUE)
	{
		printf("It is Vowel\n");
	}
	else
	{
		printf("It is not Vowel\n");
	}
	return 0;
}
