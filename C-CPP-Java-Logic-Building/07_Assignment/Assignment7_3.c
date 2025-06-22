// Programm to accept a number from user print its even factorial

#include<stdio.h>

int EvenFact(int iNo)
{
    int iCnt = 0, iFact= 1;

    if(iNo < 0)
    {
        iNo = -iNo;         //updater
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact; 
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = EvenFact(iValue);

    printf("Value of even factorial is  : %d",iRet);

    return 0;
}