/* Programm to accept a number from user and display pattern
    input = iRow-4   iCol-4
    output- 2   4   6   8   10
            1   3   5   7   9
            2   4   6   8   10
            1   3   5   7   9
*/

#include<stdio.h>

int Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0, iCount =1;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        if((iCount % 2) == 0)
            {
                iCount = 1;
            } 
        else
            {
                iCount = 2;
            }  

            for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
            { 
                printf("%d\t", iCount);
                iCount += 2;
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