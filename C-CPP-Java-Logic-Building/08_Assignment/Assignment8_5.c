// Programm to accept area in square feet and convert it into squaremeter.
// 1 square feet = 0.0929 square meter

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dMeter = 0;

    dMeter = iNo * 0.0929;

    return dMeter;
    
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter is : %lf\n", dRet);

    return 0;
}