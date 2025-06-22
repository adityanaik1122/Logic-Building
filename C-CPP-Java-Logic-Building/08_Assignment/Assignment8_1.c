// Programm to accept a radius of circle from user and display area.

#include<stdio.h>

double Area(float fNo)
{
    const float PI = 3.14f;
    double dArea;

    dArea = PI * fNo * fNo;

    return dArea;
    
}

int main()
{
    float fRadius = 0.0f;
    double dRet = 0.0f;

    printf("Enter the radius of circle : ");
    scanf("%f", &fRadius);

    dRet = Area(fRadius);

    printf("Area of circle is : %f", dRet);

    return 0;
}