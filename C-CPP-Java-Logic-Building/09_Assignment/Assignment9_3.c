/* Programm to accept a number from user and count frquency of 2 in it.

*/

#include<stdio.h>

int CountTwo(int iNo)
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
            if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    
    printf("frequency of two is : %d",iRet);
    

    return 0;
}