/*
	Write a program which accept number from user and return difference between summation of even digits 		and summation of odd digits.
	Input :	2395
	Output : -15
*/

#include "DiffHelper.c"

int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = CountDiff(iValue);
	printf("%d",iRet);
	return 0;
}
