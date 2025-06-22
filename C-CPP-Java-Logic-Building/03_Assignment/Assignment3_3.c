////////////////////////////////
//      Author : Aditya Naik
//     Program : accept one number from user and print even factors 
//        Date : 10/05/2025
///////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    //write updater
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    printf("\n");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf(" %d ",iCnt);

        }
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}