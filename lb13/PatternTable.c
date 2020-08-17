/*
	Accept number from user and display below pattern.
	Input : 8
	Output : 2 4 6 8 10 12 14 16
*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	if(iNo == 0)
	{
		return ;
	}
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("%d\t",iCnt*2);
	}
	printf("\n");
}

int main()
{
	int iNo = 0;
	printf("\nEnter number\t");
	scanf("%d",&iNo);

	Pattern(iNo);

	return 0;
}
