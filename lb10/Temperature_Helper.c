#include "Temperature_Header.h"

//////////////////////////////////////////////////////////////////////////////////
//
//Function Name	:	temp_in_celcius
//parameters	:	floating point
//Return Value	:	floating point
//Description	:	Used to convert temperature in fahrenheit to celcius
//Author	:	Mayur Dimble
//Date		:	29-07-2020
//
/////////////////////////////////////////////////////////////////////////////////

float temp_in_celcius(float farh)
{
	float cel = 0.0f;	
	cel = (farh-32)*5/9;
	return cel;
}


