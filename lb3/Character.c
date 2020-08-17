/*
	Accept one character from user and convert case of that character.
	Input : a Output : A
	Input : D Output : d
*/
#include "CharacterHelper.c"

int main()
{
	char cValue = '\0',cReturn = '\0';
	printf("Enter character\n");
	scanf("%c",&cValue);
	cReturn = DisplayConvert(cValue);
	printf("%c",cReturn);
	return 0;
}
