// Programm to accept a number from user and display below pattern.

#include<stdio.h>

int Number(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;         //updater
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

     for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}