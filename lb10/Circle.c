/*
	Write a program which accept radius of circle from user and calculate its area. Consider value of PI 		as 3.14. (Area = PI * Radius * Radius)

*/
#include<stdio.h>
#define PI 3.14

double area(float);
int main()
{
	float r=0.0f;
	double a=0.0;
	
	printf("\nEnter radius of circle\t:");
	scanf("%f",&r);

	a=area(r);

	printf("\nArea is %f\n",a);

	return 0;
}
double area(float radius)
{
	double ans=0;
	ans=PI*radius*radius;
	return ans;
}

