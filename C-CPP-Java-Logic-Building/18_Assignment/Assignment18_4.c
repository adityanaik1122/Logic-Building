/* Programm to accept N number from user and display all elements 
   which are divisible by 5 and divisible by 3
    input = 6
            elements - 85 66 3 80 93 88
    output- 80
*/

#include<stdio.h>
#include<stdlib.h>

int Divisible(int Arr[], int iLength)
{
    int Divide = 0, iCnt = 0, iCount = 0;

    for( iCnt = 0; iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] % 5) == 0 && (Arr[iCnt] % 3) == 0 )
        {
            printf("%d is divisible by 3 and 5\t",Arr[iCnt]);
        }
    }
    return 0;

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

    
    Divisible(p,iSize);
    

    free(p);

    return 0;
}