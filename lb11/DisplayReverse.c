/*
	Write a program which accept accept range from user and display all numbers in between that range in 		reverse order.
*/

#include<stdio.h>

void DisplayReverseRange(int iStart,int iEnd)
{
	int iCnt = 0;
	if(iEnd < iStart)
	{
		printf("\nInvalid range\n");
		return ;
	}
	else
	{
		for(iCnt = iEnd;iCnt >= iStart;iCnt--)
		{
			printf("%d\t",iCnt);
		}
	printf("\n");
	}
}
int main()
{
	int iStart = 0,iEnd = 0;
	printf("\nEnter Starting point of range\t");
	scanf("%d",&iStart);
	printf("\nEnter End point of range\t");
	scanf("%d",&iEnd);

	DisplayReverseRange(iStart,iEnd);

	return 0;
}
