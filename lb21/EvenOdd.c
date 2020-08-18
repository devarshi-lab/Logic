/*
    Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input    :  N : 6
Elements :  85 66 3 80 93 88
Output   :  53 (234 - 181)
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int iArr[],int iNo)
{
    int iCnt = 0,iAns = 0;
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        if(iArr[iCnt] % 2 == 0)
        {
            iAns = iAns + iArr[iCnt];
        }
        else
        {
            iAns = iAns - iArr[iCnt];
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

        iSum = Difference(iArr,iNo);
        printf("Difference between sum of even elements and sum of odd elements are %d\n",iSum);
    }
    free(iArr);
    return 0;
}