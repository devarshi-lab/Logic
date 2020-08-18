/*
    We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25
rupees per kilometre .
And if running is more than 100 kilometres then they apply 15
rupees per kilometre after 100 kilometres.
We have to accept number of kilometres from user and return
the estimated rent.
Input : 73      Output : 1825
Input : 132     Output : 2980
Input : 189     Output : 3835
*/

#include<stdio.h>

int Km(int iKm)
{
    int iAns = 0;
    if(iKm <= 0)
    {
        return -1;
    }
    else
    {
        if(iKm <= 100)
        {
            return iKm * 25;
        }
        else
        {
            iAns = iKm - 100;
            return iAns*15+100*25;
        }
    }
    

}
int main()
{

    int iKm = 0,iCharges = 0;
    printf("\nEnter Kilometers\t:");
    scanf("%d",&iKm);

    iCharges = Km(iKm);

    if(iCharges == -1)
    {
        printf("\nError : Invalid Kilometers\n");
    }
    else
    {
        printf("\nCharges for %d km is %d/-\n",iKm,iCharges);
    }
    
    return 0;
}