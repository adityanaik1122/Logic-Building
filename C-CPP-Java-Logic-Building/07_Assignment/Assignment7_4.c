// Programm to accept a number from user print its odd factorial

#include<stdio.h>

int OddFact(int iNo)
{
    int iCnt = 0, iFact= 1;

    if(iNo < 0)
    {
        iNo = -iNo;         //updater
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
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

    iRet = OddFact(iValue);

    printf("Value of odd factorial is  : %d",iRet);

    return 0;
}