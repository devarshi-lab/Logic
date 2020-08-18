/*
Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input       : N : 6
Elements    : 85 66 3 80 93 88
Output      : 11 is not present

Input       : N : 6
Elements    : 85 66 3 80 11 88
Output      : 11 is not present

*/

#include<stdio.h>
#include<stdlib.h>

int Eleven(int iArr[],int iNo)
{
    int iFlag = 0,iCnt = 0;
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        if(iArr[iCnt] == 11)
        {
           iFlag = 1;
           break;
        }
    }
    return iFlag;
}

int main()
{
    int iNo = 0,iCnt = 0,iCount = 0;
    int *iArr = NULL;
    printf("\nHow many numbers\t:");
    scanf("%d",&iNo);

    iArr = (int *)malloc(iNo * sizeof(int));

    if(iArr == NULL)
    {
        printf("\nError : Unable to allocate memory\n");
        return -1;
    }
    else
    {
        printf("\nEnter %d elements\n",iNo);
        for(iCnt = 0;iCnt < iNo;iCnt++)
        {
            scanf("%d",&iArr[iCnt]);
        }
        iCount = Eleven(iArr,iNo);
        if(iCount == 1)
        {
            printf("\n11 is Present\n");
        }
        else
        {
            printf("\n11 is absent\n");
        }
    }
    free(iArr);
    return 0;
}
