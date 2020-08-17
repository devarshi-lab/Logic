/*
    Write a program which accept number from user and print numbers till that number.
*/

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    if(iNo == 0)
    {
        printf("0\n");
        return;
    }
    else if(iNo > 0)
    {
        for(iCnt = 1;iCnt <= iNo;iCnt++)
        {
            printf("%d\t",iCnt);
        }  
    printf("\n");
    }
    else
    {
        for(iCnt = -1;iCnt >= iNo;iCnt--)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
    }
    
}
int main()
{
    int iNo = 0;
    printf("\nEnter Number\t");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}