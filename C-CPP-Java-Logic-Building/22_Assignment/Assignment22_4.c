/* Accept character from user and check whether
   it is small case or not
    input = f
    output = TRUE
    input = &
    output = FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch > 'a' && ch < 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case.\n");
    }
    else
    {
        printf("It is not a small case.\n");
    }

    return 0;
}