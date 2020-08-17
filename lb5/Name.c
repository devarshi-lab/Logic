/*
	Write a program which accept name from user and print that name.
	Input : Piyush Khairnar
	Output : Piyush Khairnar
*/
#include<stdio.h>
int main()
{
	int i = 0;
	char Name[30];
	printf("Please enter full name");
//	gets(Name);
	scanf("%[^\n]",Name);
	printf("Your name is %s",Name);
	return 0;
}
