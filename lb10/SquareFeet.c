/*
	Write a program which accept area in square feet and convert it into square meter.
	(1 square feet = 0.0929 Square meter)
*/

#include<stdio.h>

double FeetToMeter(float fFeet)
{
	double fAns = 0.0f;
	fAns = fFeet*0.0929;
	return fAns;
}
int main()
{
	float fFeet = 0.0f;
	double dMeter = 0.0;
	printf("\nEnter Area in Square Feet\t");
	scanf("%f",&fFeet);

	dMeter = FeetToMeter(fFeet);
	printf("%f square feet is %f square meter\n",fFeet,dMeter);

	return 0;
}
