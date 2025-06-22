// Programm to accept a number from user and print its number line

#include<stdio.h>

int Numberline(int iNo)
{
    int iCnt = 0;
    
    
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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

    Numberline(iValue);

    return 0;
}