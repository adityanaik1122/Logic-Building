/* Programm to accept a number from user and count even digit

*/

#include<stdio.h>

int Count(int iNo)
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
        
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = Count(iValue);

    
    printf("Count of digits are : %d",iRet);
    

    return 0;
}