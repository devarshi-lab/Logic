/*
	Write a program which accept number from user and if number is less than 50
	then print small , if it is greater than 50 and less than 100 then print medium, if it is
	greater than 100 then print large.
*/
#include<stdio.h>

void ChkNumber(int iNo)
{
	if(iNo < 50)
	{
		printf("\nSmall\n");
	}
	else if(iNo > 50 && iNo < 100)
	{
		printf("\nMedium\n");
	}
	else
	{
		printf("\nGreater");
	}
}
int main()
{
	int iNo = 0;
	printf("\nEnter Number\t:");
	scanf("%d",&iNo);

	ChkNumber(iNo);

	return 0;
}
