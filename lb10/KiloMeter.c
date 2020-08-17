/*
	Write a program which accept distance in kilometre and convert it into meter.
	(1kilometre = 1000 Meter)
*/

#include<stdio.h>

int KiloToMeter(int iKilo)
{
	int iMeter = 0;
	iMeter = iKilo*1000;
	return iMeter;
}
int main()
{
	int iKilo = 0,iMeter = 0;
	printf("\nEnter Kilometers\t");
	scanf("%d",&iKilo);

	iMeter = KiloToMeter(iKilo);
	printf("\n%d Kilometer is %d meters\n",iKilo,iMeter);

	return 0;
}
