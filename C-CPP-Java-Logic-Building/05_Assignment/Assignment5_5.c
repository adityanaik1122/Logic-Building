// Programm to accept a number from user and print first 5 multiples of N

#include<stdio.h>

int MultipleDisplay(int iNo)
{
    int iCnt = 0, iMult = 1;
    
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMult = iNo *iCnt;
        
        printf("%d \t",iMult);
        
    }
    printf("\n");
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    

    printf("Next 5 multiple of %d are :", iValue);
    MultipleDisplay(iValue);
    
    return 0;
}