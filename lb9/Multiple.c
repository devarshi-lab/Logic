/*
    Write a program which accept N and print first 5 multiples of N
*/
#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    if(iNo == 0)
    {
        printf("0\n");
        return;
    }
    if(iNo < 0)
    {
        iNo = -iNo; 
    }
    for(iCnt = 1;iCnt <= 5;iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
    printf("\n");
}
int main()
{
    int iNo = 0;
    printf("\nEnter Number\t");
    scanf("%d",&iNo);

    MultipleDisplay(iNo);
    return 0;
}