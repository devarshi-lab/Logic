/*
	Write a program which accept number from user and return the count of even digits.
Input : 2395
Output : 1
*/

#include "EvenHelper.c"

int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = ChkEven(iValue);
	printf("%d",iRet);
	return 0;
}
