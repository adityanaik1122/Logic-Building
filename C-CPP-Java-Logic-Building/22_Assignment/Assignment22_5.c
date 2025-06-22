/* Accpt division of student from user and depends
 on the division display exam timimg.
 There are 4 divisions in the school as A,B,C,D. 
 Exam of division A = 7 AM, b = 8.30 AM, c = 9.20 AM, D = 10.30 AM
 (Application should be case isensitive.)
    input = f
    output = TRUE
    input = &
    output = FALSE
*/

#include<stdio.h>
#include<stdlib.h>


void DisplaySchedule(char ch)
{
    if((ch == 'A') || (ch == 'a'))
    {
        printf("Your exam time is 7 AM");
    }
    else if ((ch == 'B') || (ch == 'b'))
    {
        printf("Your exam time is 8.30 AM");
    }
    else if ((ch == 'C') || (ch == 'c'))
    {
        printf("Your exam time is 9.20 AM");
    }
    else if ((ch == 'D') || (ch == 'd'))
    {
        printf("Your exam time is 10.30 AM");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the division : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}