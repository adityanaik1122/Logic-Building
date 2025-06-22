/* Programm to accept a number from user di andsplay pattern
    input = 5 
    output- A B C D E
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

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t", 'A' + iCnt);   
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