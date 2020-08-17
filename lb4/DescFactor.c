/*
	Write a program which accept number from user and display its factors in decreasing order.
	Input :	12
	Output :6 4 3 2 1
*/
#include "DescFactorHelper.c"

int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	FactRev(iValue);
	return 0;
}
