/* Programm to accept a number from user and count frquency of 4 in it.

*/

#include<stdio.h>

int CountLessThanSix(int iNo)
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
        {
            if(iDigit <= 6)
            {
                iCount++;
            }
            
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

    iRet = CountLessThanSix(iValue);

    
    printf("frequency of numbers less than six are : %d",iRet);
    

    return 0;
}