/* Programm to accept a number from user and display pattern
    input = iRow-4   iCol-4
    output =1   2   3   4
                2   3   4
                    3   4
                        4

*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0, iCount = 0;

    for(iCnt1 = 0; iCnt1 < iRow; iCnt1++)
    {
        // Print leading tabs (spaces)
        for(iCnt2 = 0; iCnt2 < iCnt1; iCnt2++)
        {
            printf("\t");
        }

        // Print numbers starting from iCnt1+1 to iCol
        iCount = iCnt1 + 1;
        for(iCnt2 = iCnt1; iCnt2 < iCol; iCnt2++)
        {
            printf("%d\t", iCount);
            iCount++;
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number rows : ");
    scanf("%d", &iValue1);

    printf("Enter the number column : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}    