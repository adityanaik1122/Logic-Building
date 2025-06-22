/* Accept character from user and check whether
   it is capital alphabet or not (A-Z).
    input = F
    output = TRUE
    input = &
    output = FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch > 'A' && ch < 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character.\n");
    }
    else
    {
        printf("It is not a capitaln character.\n");
    }

    return 0;
}