/* Programm to accept a number from user and multiplication of all digit

*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iMult = iMult * iDigit;
        {
            iCount++;
        }
            
        iNo = iNo / 10;
    }

   return iMult;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);
    
    printf("multiplication of digits are : %d",iRet);

    return 0;
}