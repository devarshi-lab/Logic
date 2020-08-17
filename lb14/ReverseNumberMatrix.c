/*
	Accept number of rows and number of columns from user and display below pattern.
	Input : iRow = 4	iCol = 3

	Output : 3 2 1
		 3 2 1
		 3 2 1
		 3 2 1
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
		for(j = iCol;j >= 1;j--)
		{
			printf("%d\t",j);
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
