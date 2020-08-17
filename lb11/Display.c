/*
	Write a program which accept range from user and display all numbers in between that range.
*/

#include<stdio.h>

void DisplayRange(int iStart,int iEnd)
{
	int iCnt = 0;
	if(iEnd < iStart)
	{
		printf("\nInvalid range\n");
		return ;
	}
	else
	{
		for(iCnt = iStart;iCnt <= iEnd;iCnt++)
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

	DisplayRange(iStart,iEnd);

	return 0;
}
