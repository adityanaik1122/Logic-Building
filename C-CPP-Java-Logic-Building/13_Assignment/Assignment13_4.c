/* Programm to accept a number from user di andsplay pattern
    input = iRow-4   iCol-4
    output- 4   4   4   4   
            3   3   3   3   
            2   2   2   2   
            1   1   1   1 
*/

#include<stdio.h>

int Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0, iCount = 0;

    for(iCnt1 = iRow; iCnt1 >= 1; iCnt1--)
    {
       
        for(iCnt2 = 1 ; iCnt2 <= iCol; iCnt2++)
        {
                printf("%d\t", iCnt1);   
                
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