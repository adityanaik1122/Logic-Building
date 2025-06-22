/* Programm to accept a number from user and display its digit in reverse order.
Start
    Accept number from user
    While number is not 0
        Extract last digit using % 10
        Print the digit
        Remove last digit using / 10
End
*/

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    //printf("Area of circle is : %f", dRet);

    return 0;
}