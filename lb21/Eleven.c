/*
    Accept N numbers from user and display all such elements which are mulitple of 11.
Input       : N : 6
Elements    : 15 66 3 90 99 80
Output      : 66 99

*/

#include<stdio.h>
#include<stdlib.h>

void Eleven(int iArr[],int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        if(iArr[iCnt] % 11 == 0)
        {
            printf("%d\t",iArr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iNo = 0,iCnt = 0;
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
        Eleven(iArr,iNo);
    }
    free(iArr);
    return 0;
}