/* Programm to accept a number from user di andsplay pattern
    input = 5 
    output- 1 * 2 * 3 * 4 * 5 *
*/

#include<stdio.h>

int Pattern(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t * \t",iCnt);   
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