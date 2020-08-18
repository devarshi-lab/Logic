/*
    Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.
Input       : N : 6 No  66
Elements    : 11 66 11 80 66 88
Output      : 2

Input       : N : 6 No  66
Elements    : 85 8 3 80 11 88
Output      : 0

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int iArr[],int iN,int iNo)
{
    int iFlag = 0,iCnt = 0;
    for(iCnt = 0;iCnt < iN;iCnt++)
    {
        if(iArr[iCnt] == iNo)
        {
           iFlag++;
        }
    }
    return iFlag;
}

int main()
{
    int iNo = 0,iCnt = 0,iCount = 0,iN = 0;
    int *iArr = NULL;
    printf("\nHow many numbers\t:");
    scanf("%d",&iN);

    iArr = (int *)malloc(iN * sizeof(int));

    if(iArr == NULL)
    {
        printf("\nError : Unable to allocate memory\n");
        return -1;
    }
    else
    {
        printf("\nEnter %d elements\n",iN);
        for(iCnt = 0;iCnt < iN;iCnt++)
        {
            scanf("%d",&iArr[iCnt]);
        }
        printf("\nEnter numbers\t:");
        scanf("%d",&iNo);

        iCount = Frequency(iArr,iN,iNo);
        printf("\nFrequency of %d is %d\n",iNo,iCount);
    }
    free(iArr);
    return 0;
}