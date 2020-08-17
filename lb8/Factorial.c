#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt = 0,iRet = 1;
    for(iCnt = iNo;iCnt>0;iCnt--)
    {
        iRet = iRet * iCnt;
    }
    return iRet;
}

int main()
{
        int iNo = 0,iAns = 0;
        printf("\nEnter Number");
        scanf("%d",&iNo);

        iAns = Factorial(iNo);

        printf("\nFactorial of number is %d",iAns);
        return 0;
}