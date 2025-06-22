// Programm to accept a number from user print a difference between its even and odd factorial

#include<stdio.h>

int EvenFact(int iNo)
{
    int iCnt = 0, iFact1 = 1, iFact2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;         //updater
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    return iFact2 - iFact1; 
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = EvenFact(iValue);

    printf("Difference between even and odd factorial is  : %d",iRet);

    return 0;
}