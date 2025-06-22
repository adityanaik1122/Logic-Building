// Programm to accept a number from user and display all non factors .

#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf(" %d\t",iCnt);
        }
        
    }
    return iCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    

    return 0;
}