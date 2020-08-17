/*
	Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4	iCol = 4

Output :A B C D
	A B C D
	A B C D
	A B C D

*/


#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0,j = 0;
	char c = '\0';
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	for(i = 1;i <= iRow;i++)
	{
		for(j = 0,c = 'A';j < iCol;j++,c++)
		{
			printf("%c\t",c);
		}
		printf("\n");
	}
}
int main()
{
	int iRow = 0,iCol = 0;
	printf("\nHow many rows\t");
	scanf("%d",&iRow);

	printf("\nHow many column\t");
	scanf("%d",&iCol);

	Pattern(iRow,iCol);

	return 0;
}
