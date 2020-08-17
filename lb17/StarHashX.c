/*
	Accept number of rows and number of columns from user and display below pattern.
	Input : iRow = 4	iCol = 4

	Output : 
         *  *  *  *     
         *  *  *  #                 24
         *  *  #  #             33  34
         *  #  #  #         42  43  44
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
		for(j = 0;j < iCol;j++)
		{
	            if(iRow - i > j)	// (4-0) 4 > 0 1 2 3 
	            {			// (4-1) 3 > 0 1 2
	                printf("*\t");	// (4-2) 2 > 0 1
	            }			// (4-3) 1 > 0
	            else
	            {
	                printf("#\t");
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
