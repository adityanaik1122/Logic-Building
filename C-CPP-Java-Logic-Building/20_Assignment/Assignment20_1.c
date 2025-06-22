/* Programm to accept N number from user and accept number as NO,
     and check whether NO is present or not.
    input = 6
     No = 66
        elements = 85 66 11 80 93 88 
    output- TRUE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    printf("Enter number of elements :");
    scanf("%d",&iValue);

    p = (int *) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    
    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is not present",iValue);
    }
    
    free(p);

    return 0;
}