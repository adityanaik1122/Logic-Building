/* Programm to accept N number from user and
   return summation of digits of each number.
    input = 6
    elements = 8225 665 3 76 953 858 
    output = 17 17 3 13 17 21
*/

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0;

    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iSum = 0 ;
        int temp = Arr[iCnt];
        
        while(temp > 0 )
        {
            iSum = iSum + (temp % 10);
            temp = temp / 10;
                
        }
        printf("%d ",iSum);
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
    
    DigitSum(p, iSize);

    //printf("Difference between largest and smallest Number is %d",iRet);
    
    free(p);

    return 0;
}