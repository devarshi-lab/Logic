/*
    Accept N numbers from user and display all such elements which are even and
divisible by 5 and 3.
Input       : N : 6
Elements    : 15 66 3 90 93 80
Output      : 15 90

*/

#include<stdio.h>
#include<stdlib.h>

void FiveThree(int iArr[],int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        if(iArr[iCnt] % 5 == 0 && iArr[iCnt] % 3 == 0)
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
        FiveThree(iArr,iNo);
    }

    return 0;
}