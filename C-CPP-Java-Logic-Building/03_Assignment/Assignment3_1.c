////////////////////////////////
//      Author : Aditya Naik
//     Program : accept one number from user and print that number of even numbers on screen
//        Date : 10/05/2025
///////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 2;

    //write updater
    if(iNo <= 0)
    {
        return;
    }
    printf("\n");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
            printf(" %d ",iEven);
            iEven += 2;
        
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}