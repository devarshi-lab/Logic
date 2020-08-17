/*
    Write a program which accept number from user and print its numbers line.
*/
#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
    {
        printf("\n0\n");
        return;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = -iNo;iCnt <= iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iNo = 0;
    printf("\nEnter Number\t");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}