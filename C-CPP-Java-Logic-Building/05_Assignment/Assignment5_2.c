// Programm to accept a number from user and print number till that number

#include<stdio.h>

int Pattern(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -(iNo);   //updater
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}