/*
	Write a program which accept range from user and return addition of all even numbers in between that 		range. (Range should contains positive numbers only)
*/

#include<stdio.h>

int DisplayEvenAddition(int iStart,int iEnd)
{
	int iCnt = 0,iSum = 0;
	if( (iEnd < 0) || (iStart < 0) || (iEnd < iStart))
	{
		return -1;
	}
	else
	{
		for(iCnt = iStart;iCnt <= iEnd;iCnt++)
		{
			if(iCnt % 2 == 0)
			{
				iSum = iCnt + iSum;
			}
		}
	return iSum;
	}
}
int main()
{
	int iStart = 0,iEnd = 0,iSum = 0;
	printf("\nEnter Starting point of range\t");
	scanf("%d",&iStart);
	printf("\nEnter End point of range\t");
	scanf("%d",&iEnd);

	iSum = DisplayEvenAddition(iStart,iEnd);
	if(iSum == -1)
	{
		printf("\nInvalid range\n");
	}
	else
	{
		printf("%d\n",iSum);
	}
}
