/*
    Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input    :  N : 7
Elements :  85 66 3 80 93 88 90
Output   :  1
*/
#include<stdio.h>
#include<stdlib.h>

int EvenOddFrequency(int iArr[],int iNo)
{
    int iCnt = 0,iAns = 0;
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        if(iArr[iCnt] % 2 == 0)
        {
            iAns += 1;
        }
        else
        {
            iAns -= 1;
        }
    }
    return iAns;
}
int main()
{
    int iNo = 0,iCnt = 0,iSum = 0;
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

        iSum = EvenOddFrequency(iArr,iNo);
        printf("Difference between frequency of even number and odd numbers\t%d\n",iSum);
    }
    free(iArr);
    return 0;
}