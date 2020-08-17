/*
	Write a program which accept number from user and count frequency of such a digits which are less than 6.
	Input :	2495
	Output : 3
*/

#include "Less6Helper.c"
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	if(iValue == 0)
	{
		printf("please enter correct value other than 0");
	}
	else
	{ 
		iRet = Count(iValue);
		printf("frequency of digits less than 6 are %d",iRet);
	}
	return 0;
}
