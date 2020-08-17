/*
	Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 		rupees.
*/

#include<stdio.h>

int DollarToRupee(int iDollar)
{
	return iDollar*70;
}
int main()
{
	int iDollar = 0,iRupee;
	printf("\nEnter Amount in dollar\t");
	scanf("%d",&iDollar);

	iRupee = DollarToRupee(iDollar);
	printf("%d\n",iRupee);

	return 0;
}
