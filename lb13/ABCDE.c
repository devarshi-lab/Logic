/*
	1. Accept number from user and display below pattern.
	Input : 5
	Output : A B C D E
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
	char c = '\0';
	for(iCnt = 1,c = 'A';iCnt <= iNo;iCnt++,c++)
	{
		printf("%c\t",c);
	}
	printf("\n");
}
int main()
{
	int iNo = 0;
	printf("\nEnter Number\t:");
	scanf("%d",&iNo);

	Pattern(iNo);

	return 0;
}
