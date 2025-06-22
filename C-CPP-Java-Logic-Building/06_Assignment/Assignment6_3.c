// Programm to accept a number from user and print its factorial

#include<stdio.h>
int Display(int iNo)
{

    int iCnt = 0, iFact = 1;

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Display(iValue);

    printf("Factorial of the number is : %d",iRet);

    return 0;
}