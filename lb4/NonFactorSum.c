/*
	4.Write a program which accept number from user and return summation of all its non factors.
	Input 	: 12
	Output	: 50
	Input	: 10
	Output	: 37
*/

#include "NonFactorSumHelper.c"

int main()
{
	int iValue = 0,iSum = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iSum = NonFact(iValue);
	printf("Addtion of non Factor number is %d\n",iSum);
	return 0;
}
