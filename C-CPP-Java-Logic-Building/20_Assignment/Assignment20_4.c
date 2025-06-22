/* Programm to accept N number from user and accept range and display
all elements in that range.
    input = 6
     start = 60
     End = 90
        elements = 85 66 11 80 93 88 
    output- 66, 80, 88
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0, iRange = 0;

    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d \t",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iStart = 0, iEnd = 0;
    int *p = NULL;
    

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    printf("Enter start of range of elements : ");
    scanf("%d",&iStart);

    printf("Enter end of range of elements : ");
    scanf("%d",&iEnd);

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

    
    Range(p, iSize, iStart, iEnd);
       
    free(p);

    return 0;
}