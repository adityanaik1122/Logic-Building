/* Programm to accept N number from user and accept number as NO,
     and return index of first occurrence of that NO.
    input = 6
     No = 66
        elements = 85 66 11 80 93 88 
    output- 1
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    printf("Enter number of elements : ");
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

    
    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("%d is not present.",iValue);
    }
    else
    {
        printf("First occurrence of %d is %d.",iValue, iRet);
    }
    
    free(p);

    return 0;
}