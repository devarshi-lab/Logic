/*
	Write a program which accept number from user and count frequency of 4 in it.
	Input :	2495
	Output : 1
*/

#include "FourHelper.c"
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	if(iValue == 0)
	{
		printf("Frequency of 4 is 0");
	}
	else
	{ 
		iRet = CountFour(iValue);
		printf("frequency of 4 is %d",iRet);
	}
	return 0;
}
