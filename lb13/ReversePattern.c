/*
	Accept number from user and display below pattern.
	Input : 5
	Output : 5 # 4 # 3 # 2 # 1 #
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
	for(iCnt = iNo;iCnt >= 1;iCnt--)
	{
		printf("%d\t#\t",iCnt);
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
