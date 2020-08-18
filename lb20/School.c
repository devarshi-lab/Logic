/*
    Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for
third standard 21000 and for fourth standard fees are 23450.
We have to accept standard from user and display the
corresponding fees.
Input : 2   Output : 12790
Input : 4   Output : 23450
Input : 6   Output : Wrong input
*/

#include<stdio.h>

int Fee(int iDiv)
{
    if(iDiv <= 0 || iDiv > 4)
    {
        return -1;
    }
    else
    {
        if(iDiv == 1)
        {
            return 8900;
        }
        else if(iDiv == 2)
        {
            return 12790;
        }
        else if(iDiv == 3)
        {
            return 21000;
        }
        else
        {
            return 23450;
        }
    }
}
int main()
{
    int iDiv = 0,iFee = 0;
    printf("\nEnter Division\t:");
    scanf("%d",&iDiv);

    iFee = Fee(iDiv);

    if(iFee == -1)
    {
        printf("\nError : Invalid Division\n");
    }
    else
    {
        printf("\nFees are \t%d\n",iFee);
    }
    
    return 0;
}