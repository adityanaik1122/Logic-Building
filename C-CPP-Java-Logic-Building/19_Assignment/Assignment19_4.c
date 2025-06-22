/* Programm to accept N number from user and return
    frequency of 11 in it
    input = 6
            elements - 85 66 11 80 93 88 
    output- 11 is present 1 times.
*/

#include<stdio.h>
#include<stdlib.h>


int CheckFrequency(int Arr[], int iLength)
{
    int iCount = 0, iCnt = 0;

    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount = iCount + 1;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    
    iRet = CheckFrequency(p,iSize);
    printf("11 is present %d times.",iRet);
    
    free(p);

    return 0;
}