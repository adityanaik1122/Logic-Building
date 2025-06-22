/* Programm to accept a number from user and display pattern
    input = iRow-6   iCol-6
    output- 1   2   3   

            
*/

#include<stdio.h>

int Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0, iCount1 = 1, iCount2 = 1;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        iCount1 = 1;
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        { 
            if (iCnt1 == iCnt2)
            {
                printf("%d\t",iCount2);
                iCount2++;
            }

            else if(iCnt2 == 1 || iCnt2 == iCol)
            {
                printf("%d\t",iCnt2);
            }

            else if(iCnt1 == 1 || iCnt1 == iRow ) 
            {
                printf("%d\t",iCount1);
                iCount1++;
            }
    
            else
            {
                printf(" \t",iCnt2);
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