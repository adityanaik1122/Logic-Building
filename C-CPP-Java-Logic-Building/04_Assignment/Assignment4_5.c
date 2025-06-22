// Programm to accept a number from user and display difference between summation of factors non factors .

#include<stdio.h>

int DifferenceFact(int iNo)
{
    int iCnt = 0, iSum1= 0, iSum2 = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        
        }

        else 
        {
            iSum2 = iSum2 + iCnt;
        
        }
        
    }
    
return iSum1 - iSum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = DifferenceFact(iValue);

    printf("Difference of Sum of factors and non factors is : %d",iRet);

    return 0;
}