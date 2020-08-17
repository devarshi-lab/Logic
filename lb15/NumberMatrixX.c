/*
	Accept number of rows and number of columns from user and display below pattern.
	Input : iRow = 4	iCol = 4

	Output : 1  2  3  4
		 5  6  7  8
		 9  10 11 12
		 13 14 15 16
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0,j = 0;
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	for(i = 0;i < iRow;i++)
	{
		for(j = 1;j <= iCol;j++)
		{
			printf("%d\t",j+(4*i));
		}
		printf("\n");
	}
}
/*
	1->	1 2 3 4
	2->	5 6 7 8
*/
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
