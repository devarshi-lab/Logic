/*
	Write a program to find even factorial of given number.
*/


#include<stdio.h>

int EvenFactorial(int iNum)
{
	int iCnt = 0,iFact = 1;
	if(iNum < 0)
	{
		iNum = -iNum;
	}
	for(iCnt = iNum;iCnt > 0;iCnt--)
	{
		if(iCnt % 2 == 0)
		{
			printf("%d\t",iCnt);
			iFact = iCnt * iFact;
		}
	}
	printf("\n");
	return iFact;
}
int main()
{
	int iNum = 0,iFact = 0;
	printf("\nEnter Number\t");
	scanf("%d",&iNum);
	
	iFact = EvenFactorial(iNum);
	printf("%d\n",iFact);
}
