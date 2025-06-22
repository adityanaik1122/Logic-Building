/* Programm to accept a number from user and count even digit

*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) != 0)
        {
            iCount++;
        }
            
        iNo = iNo / 10;
    }

   return iCount;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    
    printf("Count of odd digits are : %d",iRet);
    

    return 0;
}