/* Programm to accept a number from user and return summation of even and odd digits

*/

#include<stdio.h>

int SumDifference(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    int iSum1 = 0,iSum2 = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;
            {
                iCount++;
            }

        }

        if((iDigit % 2) != 0)
        {
            iSum2 = iSum2 + iDigit;
            {
                iCount++;
            }

        }
            
        iNo = iNo / 10;
    }

   return iSum2 - iSum1;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = SumDifference(iValue);
    
    printf("Differenev of sum of even and odd digits are : %d",iRet);

    return 0;
}