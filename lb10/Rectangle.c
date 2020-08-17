/*
	Write a program which accept width & height of rectangle from user and calculate its area.
	(Area = Width * Height)
*/

#include<stdio.h>

double CalculateArea(float W,float H)
{
	return W*H;
}

int main()
{
	float fWidth = 0.0f;
	float fHeight = 0.0f;
	double dArea = 0.0;

	printf("\nEnter Width of Reactangle\t");
	scanf("%f",&fWidth);

	printf("\nEnter Height of Reactangle\t");
	scanf("%f",&fHeight);

	dArea = CalculateArea(fWidth,fHeight);
	printf("\nArea of rectangle is %f\n",dArea);

	return 0;
}
