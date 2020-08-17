/*
	Accept number of rows and number of columns from user and display below pattern.
	Input : iRow = 4	iCol = 4

	Output : A A A A
		 B B B B
		 C C C C
		 D D D D
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
	for(i = 1,c = 'A';i <= iRow;i++,c++)
	{
		for(j = 0;j < iCol;j++)
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
