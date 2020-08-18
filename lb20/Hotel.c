/*
    Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of
    customer. If bill amount is less than 500 then there is no discount , if bill amount is less than 1500 and more than 500 they give 10%
    discount. And if the bill amount is more than 1500 then they give 15% discount. Our application should accept total bill amount and depends on
    the discount policy we have to return the amount after applying discount.

    Input : 1200    Output : 1080
    Input : 290     Output : 290
    Input : 3700    Output : 3145
*/
#include<stdio.h>
int Discount(int iAmount)
{
    if(iAmount <= 0)
    {
        return -1;
    }
    else if(iAmount <= 500)
    {
        return iAmount;
    }
    else if(iAmount > 500 && iAmount <= 1500)
    {
        int iAns = 0;
        iAns = iAmount*0.1;
        return (iAmount-iAns);
    }
    else
    {
        int iAns = 0;
        iAns = iAmount*0.15;
        return (iAmount-iAns);
    }
}
int main()
{
    int iAmount = 0,iDiscount = 0;
    printf("\nEnter Bill Amount\t:");
    scanf("%d",&iAmount);

    iDiscount = Discount(iAmount);
    if(iDiscount == -1)
    {
        printf("Error : Invalid Bill\n");
    }
    else
    {
        printf("Final bill is \t%d\n",iDiscount);
    }

    return 0;
}