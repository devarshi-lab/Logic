/*
    Write a program which accept number from user and print that number of $ & * on screen.
*/

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo ==  0)
    {
        printf("\nEnter non zero number\n");
        return;
    }
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}
int main()
{
    int iNo = 0;
    printf("\nEnter Number\t");
    scanf("%d",&iNo);

    Pattern(iNo);
    return 0;
}