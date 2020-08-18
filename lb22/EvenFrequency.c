/*
    Accept N numbers from user and return frequency of even numbers.
Input       : N : 6
Elements    : 85 66 3 80 93 88
Output      : 3

*/

#include<stdio.h>
#include<stdlib.h>

int EvenFrequency(int iArr[],int iNo)
{
    int iCount = 0,iCnt = 0;
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        if(iArr[iCnt] % 2 == 0)
        {
           iCount++;
        }
    }
    return iCount;
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
        iCount = EvenFrequency(iArr,iNo);
        printf("Frequency of even numbers is %d\n",iCount);
    }
    free(iArr);
    return 0;
}