/*
	2. Write a program which accept one number from user and check whether that number is greater than 100 		or not.
	Input : 101
	Output : Greater
	Input : 39
	Output : Smaller
*/

#include "GreaterHelper.c"

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	printf("Please enter number");
	scanf("%d",&iValue);
	if(iValue == 100)
	{
		printf("Equal to 100");
	}
	else
	{
		bRet = ChkGreater(iValue);

		if(bRet)
		{
			printf("Greater");
		}
		else
		{
			printf("Smaller");
		}
	}
	return 0;
}
