/*
	Write a program which accept number from user and display below pattern.
	Input : 5
	Output : * * * * * # # # # #
*/
#include<stdio.h>
void Pattern(int iNum)
{
	int iCnt = 0;
	if(iNum < 0)
	{
		iNum = -iNum;
	}
	for(iCnt = 0;iCnt < iNum;iCnt++)
	{
		printf("*\t");
	}
	for(iCnt = 0;iCnt < iNum;iCnt++)
	{
		printf("#\t");
	}
	printf("\n");
}
int main()
{
	int iNum = 0;
	printf("\nEnter Number\t");
	scanf("%d",&iNum);

	Pattern(iNum);

	return 0;
}
