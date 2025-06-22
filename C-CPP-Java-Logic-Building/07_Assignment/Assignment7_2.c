// Programm to accept a number from user as a us Dollar and return its corresponding value in indian currency.

#include<stdio.h>

int DollarToInr(int iNo)
{
    int iDollar = 80, iInr= 0;

    if(iNo < 0)
    {
        iNo = -iNo;         //updater
    }
    
    if(iInr = iDollar * iNo)
    {
        printf("Value of 1 doller is : %d\n",iDollar);
        printf("---------------------------------------------\n");
        printf("Conversion of %d doller in Inr is : %d",iNo,iInr);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    DollarToInr(iValue);

    return 0;
}