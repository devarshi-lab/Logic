/*
	Write a program which accept number from user and return the count of odd digits.
	Input :	2395
	Output : 3
*/

#include "OddHelper.c"

int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = ChkOdd(iValue);
	printf("%d",iRet);
	return 0;
}
