/* Accept character from user and check whether
   it is alphabet or not (A-Z a-z).
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

BOOL ChkAlpha(char ch)
{
    if((ch > 'A' && ch < 'Z') || (ch > 'a' && ch < 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character.\n");
    }
    else
    {
        printf("It is not a character.\n");
    }

    return 0;
}