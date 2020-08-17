/*
	Write a program which accept number from user and check whether it contains 0 in it or not.
*/
#include "ZeroHelper.c"

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter number");
	scanf("%d",&iValue);
	bRet = ChkZero(iValue);
	if(bRet == TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	return 0;
}
