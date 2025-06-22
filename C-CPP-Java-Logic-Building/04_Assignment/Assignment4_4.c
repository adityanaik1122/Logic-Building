// Programm to accept a number from user and display all non factors .

#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0, iSum= 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        
        }
        
    }
    
return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactRev(iValue);

    printf("Sum of non factors is : %d",iRet);

    return 0;
}