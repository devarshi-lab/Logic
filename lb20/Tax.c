/*
    Design application for income tax department to calculate tax
amount. According to the income tax department there is no
income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20%
tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax
amount.

Input : 600000      Output : 10000      (0 + 10000)
Input : 450000      Output : 0
Input : 1200000     Output : 90000      (0 + 50000 + 40000)

*/
#include<stdio.h>

int Tax(int iAmount)
{
    int iAns1 = 0,iAns2 = 0,iAns3 = 0;
    if(iAmount <= 0)
    {
        return -1;
    }
    else
    {
        if(iAmount <= 500000)
        {
            return 0;
        }
        else if(iAmount > 500000 && iAmount <= 1000000)
        {
            iAns1 = iAmount - 500000;
            return iAns1 * 0.1;
        }
        else if(iAmount > 1000000 && iAmount <= 2000000)
        {
            iAns2 = iAmount - 1000000;
            iAmount = iAmount - iAns2;

            iAns1 = iAmount - 500000;

            return iAns1*0.1+iAns2*0.2;
        }
        else
        {
            iAns3 = iAmount - 2000000;
            iAmount = iAmount - iAns3;

            iAns2 = iAmount - 1000000;
            iAmount = iAmount - iAns2;

            iAns1 = iAmount - 500000;

            return iAns1*0.1+iAns2*0.2+iAns3*0.3;
        }
        
    }
    
}

int main()
{
    int iAmount = 0,iTax = 0;
    printf("\nEnter Amount\t:");
    scanf("%d",&iAmount);

    iTax = Tax(iAmount);
    if(iTax == -1)
    {
        printf("Error : Invalid Amount\n");
    }
    else
    {
        printf("Income Tax is\t%d\n",iTax);
    }
    
    return 0;
}