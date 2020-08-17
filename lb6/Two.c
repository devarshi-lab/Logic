/*
	Write a program which accept number from user and count frequency of 2 in it.
	Input :	2395
	Output : 1
*/

#include "TwoHelper.c"
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	if(iValue == 0)
	{
		printf("Frequency of 2 is 0");
	}
	else
	{ 
		iRet = CountTwo(iValue);
		printf("frequency of 2 is %d",iRet);
	}
	return 0;
}
