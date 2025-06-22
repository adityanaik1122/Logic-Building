/* Programm to accept a number from user and display pattern
    input = iRow-6   iCol-5
    output- 1   2   3   4   5
            1   @   @   @   5
            1   @   @   @   5
            1   @   @   @   5
            1   @   @   @   5
            1   2   3   4   5
*/

#include<stdio.h>

int Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0, iCount =1;

    for(iCnt1 = 0; iCnt1 < iRow; iCnt1++)
    {
        for(iCnt2 = 0; iCnt2 < iCol; iCnt2++)
        { 
            if(iCnt1 == 0 || iCnt1 == iRow -1)
            {
                printf("%d\t",iCnt2 +1);      
            }

            else if ( iCnt2 == 0)
            {
                printf("1\t");
            }
            else if( iCnt2 == iCol -1)
            {
                printf("%d\t",iCol);
            }
            else 
            {
                printf("@\t");
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