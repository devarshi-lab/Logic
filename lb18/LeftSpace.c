/*
	Accept number of rows and number of columns from user and display below pattern.
	Input : iRow = 4	iCol = 4

	Output : 
            	*  *  *  *
                *  *  *
                *  *  
                *
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
	            if(i+j <= iCol+1)
	            {
	                printf("*\t");
	            }
	            else
		    {
			printf("\t");
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
