/* Programm to accept a number from user and display pattern
    input = iRow-4   iCol-4
    output- 1   2   3   4
            5   6   7   8   
            9   1   2   3   
            4   5   6   7
*/

#include<stdio.h>

int Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0, iCount =1;

    for(iCnt1 = 0; iCnt1 < iRow; iCnt1++)
    {
        for(iCnt2 = 0; iCnt2 < iCol; iCnt2++)
        { 
            printf("%d\t",iCount); 
            iCount++;

            if(iCount > 9)
            {
                iCount  = 1; 
            }       
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