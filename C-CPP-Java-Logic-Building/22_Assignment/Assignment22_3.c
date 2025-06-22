/* Accept character from user and check whether
   it is digit or not
    input = 3
    output = TRUE
    input = &
    output = FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch > 48 && ch < 57))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is digit.\n");
    }
    else
    {
        printf("It is not a digit.\n");
    }

    return 0;
}