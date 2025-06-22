////////////////////////////////
//      Author : Aditya Naik
//     Program : accept number from user and check weather number is even or odd
//        Date : 10/05/2025
///////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkEven(int iNo)
{
    bool bResult = FALSE;

    if((iNo % 2) == 0)
    {
        bResult = TRUE;        
    }
    else
    {
        bResult = FALSE;
    }
    return bResult;
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    
    if(bRet == TRUE)
    {
        printf("%d is even Number\n");
    }
    else
    {
        printf("%d is odd Number\n");   
    }
    return 0;
}