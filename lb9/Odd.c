/*
    Write a program which accepts N from user and print all odd numbers up to N
*/

#include<stdio.h>
void OddDisplay(int iNo)
{
    int iCnt = 3;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iCnt <= iNo)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
    }
    printf("\n");
}
int main()
{
    int iNo = 0;
    printf("\nEnter Number\t");
    scanf("%d",&iNo);

    OddDisplay(iNo);
    return 0;
}