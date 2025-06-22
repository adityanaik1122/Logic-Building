// Programm to accept distance in kilometer and convert it into meter.
// 1 kilometer = 1000 meter

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 1000, iDistance;
    
    iDistance = iNo * iMeter;

    return iDistance;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the distance in kilometer : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %d", iRet);

    return 0;
}