/*
    Accept N numbers from user and return frequency of 11 form it.
Input       : N : 6
Elements    : 11 66 11 80 11 88
Output      : 3

Input       : N : 6
Elements    : 85 66 3 80 11 88
Output      : 1

*/

#include<stdio.h>
#include<stdlib.h>

int ElevenFrequency(int iArr[],int iNo)
{
    int iFlag = 0,iCnt = 0;
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        if(iArr[iCnt] == 11)
        {
           iFlag++;
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
        iCount = ElevenFrequency(iArr,iNo);
        printf("\nFrequency of 11 is %d\n",iCount);
    }
    free(iArr);
    return 0;
}