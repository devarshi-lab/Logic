/*
    Write a program which accept number from user and display its table in reverse
order.
*/

#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        printf("0 have not a table");
        return;
    }
    for(iCnt = 10;iCnt > 0;iCnt--)
    {
        int iAns = 0;
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
    }
    printf("\n");
}
int main()
{
    int iNo = 0;
    printf("\nEnter Number\t");
    scanf("%d",&iNo);

    Table(iNo);

    return 0;
}