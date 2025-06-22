/* Programm to accept N number from user and
   return difference between largest and smallest number.
    input = 6
    elements = 85 66 11 80 93 88 
    output = 11
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0], iMax = Arr[0], iResult = 0;

    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        else if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    iResult = iMin -iMax;

    if (iResult < -1)
    {
        iResult = -(iResult);
    }
    return iResult;
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
    
    iRet = Difference(p, iSize);

    printf("Difference between largest and smallest Number is %d",iRet);
    
    free(p);

    return 0;
}