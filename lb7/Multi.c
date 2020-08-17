/*
	Write a program which accept number from user and return multiplication of all digits.
	Input : 2395
	Output : 270
*/

#include "MultiHelper.c"

int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = MultDigits(iValue);
	printf("%d",iRet);
	return 0;
}
