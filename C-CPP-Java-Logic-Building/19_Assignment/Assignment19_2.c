/* Programm to accept N number from user and return 
    diference between frequency of even and odd numbers
    input = 7
            elements - 85 66 3 80 93 88 90
    output- (4-3) = 1
*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCountEven = 0, iCountOdd = 0, iCnt = 0;

    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCountEven = iCountEven + 1;
        }
        else
        {
            iCountOdd = iCountOdd + 1;
        }
       
    }
    return(iCountEven - iCountOdd);

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

    
    iRet = CountEven(p,iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;
}