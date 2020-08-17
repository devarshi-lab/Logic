/*
	Accept number of rows and number of columns from user and display below pattern.
	Input : iRow = 4	iCol = 4

	Output : 2 4 6 8 
		 1 3 5 7
		 2 4 6 8 
		 1 3 5 7
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iEvenCount = 2,iOddCount = 1;
	int i = 0,j = 0;
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
		for(j = 1;j <= iCol;j++)
		{
			if(i % 2 != 0)
			{
				printf("%d\t",iEvenCount);
				iEvenCount = iEvenCount+2;
			}
			else
			{
				printf("%d\t",iOddCount);
				iOddCount = iOddCount+2;
			}
		}
		iEvenCount = 2;
		iOddCount = 1;
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
