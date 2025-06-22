////////////////////////////////
//      Author : Aditya Naik
//     Program : accept two number from user and display first number in second number of time
//        Date : 10/05/2025
///////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    //write updater
    for(iCnt = 1; iCnt <= iFrequency; iCnt++) 
    {
        printf(" %d ",iNo);
    }

    printf(" \n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter the frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}