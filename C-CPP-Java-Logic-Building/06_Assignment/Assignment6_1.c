// Programm to accept a number from user and if number is less than 50 print small, if number is between 50 to 100 print medium, and if its greater than 100 print large.

#include<stdio.h>

int Number(int iNo)
{
    int iCnt = 0;
    if(iNo <= 50)
    {
        printf("\n Small \n");
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("\n Medium \n");
    }
    else if(iNo >= 100)
    {
        printf("\n Large \n");
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