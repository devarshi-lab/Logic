/*
	Write a program which accept number from user and return the count of digits in between 3 and 7.
	Input	:	234
	Output	:	1

*/

#include "Between3to7Helper.c"

int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = CountRange(iValue);
	printf("%d",iRet);
	return 0;
}
