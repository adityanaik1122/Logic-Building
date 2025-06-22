// Programm to accept a number from user and display it table in reverse order

#include<stdio.h>
int Display(int iNo)
{

    int iCnt = 10, iTable = 1;

    while((iCnt >= 1))
    {
        iTable = iNo * iCnt;
        printf(" %d",iTable);
        iCnt--;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}