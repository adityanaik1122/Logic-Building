// Programm to accept a number from user and print all odd numbers up to N

#include<stdio.h>

int Odd(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d \t",iCnt);
        }
        
    }
   
}

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    Odd(iValue);

    return 0;
}