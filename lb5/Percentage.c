/*
	5. Write a program which accept total marks & obtained marks from user and calculate percentage.
	Input : 1000 745
	Output : 74.5%
*/

#include "PercentageHelper.c"
int main()
{
	int iValue1 = 0,iValue2 = 0;
	float fRet = 0.0f;
	printf("Please enter total marks");
	scanf("%d",&iValue1);
	printf("Please enter obtained marks");
	scanf("%d",&iValue2);
	fRet = Percentage(iValue1,iValue2);
	printf("Percentage is %f",fRet);
	return 0;
}
