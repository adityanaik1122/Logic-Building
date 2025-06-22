// Programm to accept a number from user and display factors in decresing order.

#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2 ; iCnt >= 1 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf(" %d\t",iCnt);
        }
        
    }
    return iCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    

    return 0;
}