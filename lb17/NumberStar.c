/*
	Accept number of rows and number of columns from user and display below pattern.
	Input : iRow = 4	iCol = 4

	Output : 
         1  2  3  4     11  12  13  14
         1  *  *  4     21  22  23  24
         1  *  *  4     31  32  33  34
         1  2  3  4     41  42  43  44
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
	for(i = 1;i <= iRow;i++)
	{
		for(j = 1;j <= iCol;j++)
		{
	            if((i == 1) || (j == 1) || (i == iRow) || (j == iCol))
	            {
	                printf("%d\t",j);
	            }
	            else
	            {
	                printf("*\t");
	            }
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
