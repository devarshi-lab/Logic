/*
	Write a program which accept number from user and display its digits in reverse order.
	Input :	2395
	Output : 5 9 3 2
*/

#include "NumberHelper.c"

int main()
{
	int n = 0;
	printf("\nEnter Number \t");
	scanf("%d",&n);
	
	ReverseNumber(n);
	return 0;
}
