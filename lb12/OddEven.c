/*
	Write a program which returns difference between Even factorial and odd factorial of given number.
*/

#include<stdio.h>

int Factorial(int iNum)
{
	int iCnt = 0,iOdd = 1,iEven = 1,iAns = 0;
	if(iNum < 0)
	{
		iNum = -iNum;
	}
	for(iCnt = iNum;iCnt > 0;iCnt--)
	{
		if(iCnt % 2 != 0)
		{
			iOdd = iCnt * iOdd;
		}
	}
	for(iCnt = iNum;iCnt > 0;iCnt--)
	{
		if(iCnt % 2 == 0)
		{
			iEven = iCnt * iEven;
		}
	}
	iAns = iEven - iOdd;
	return iAns;
}
int main()
{
	int iNum = 0,iFact = 0;
	printf("\nEnter Number\t");
	scanf("%d",&iNum);
	
	iFact = Factorial(iNum);
	printf("%d\n",iFact);
}
