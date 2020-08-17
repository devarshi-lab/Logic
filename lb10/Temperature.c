/*
	Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin(K) 
	(Hint: C=5/9(F-32), K = C + 273.15)
*/
#include "Temperature_Helper.c"

int main()
{
	float farh = 0.0f,cel = 0.0f,kel = 0.0f;

	printf("\nEnter temperature in fahrenheit\t");
	scanf("%f",&farh);
	
	cel = temp_in_celcius(farh);
	printf("\nTemperature in celcius is %f\n",cel);

	return 0;
}
