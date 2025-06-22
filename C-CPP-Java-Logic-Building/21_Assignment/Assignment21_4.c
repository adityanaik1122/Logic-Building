/* Programm to accept N number from user and
   return all such numbers which contains 3 digit in it.
    input = 6
    elements = 853 66 113 830 933 88 
    output = 853 113 830 933
*/

#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[], int iLength)
{
    int iCnt = 0 ;

    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d ",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

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
    
    Digit(p, iSize);

    //printf("Difference between largest and smallest Number is %d",iRet);
    
    free(p);

    return 0;
}