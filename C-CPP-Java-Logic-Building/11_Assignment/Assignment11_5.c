/* Programm to accept a number from user di andsplay pattern
    input = 8 
    output = 2 4 6 8 10 12 14 16
*/

#include<stdio.h>

int Pattern(int iNo)
{
    int iDigit = 2;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",2 * iCnt);   
    }

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}