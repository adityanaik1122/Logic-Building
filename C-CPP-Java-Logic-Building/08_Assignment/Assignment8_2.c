// Programm to accept width and height of rectangle from user and display area.

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea;

    dArea = fWidth * fHeight;

    return dArea;
    
}

int main()
{
    float fValue1 = 0.0f,  fValue2 = 0.0f;
    double dRet = 0.0f;

    printf("Enter the width : ");
    scanf("%f", &fValue1);

    printf("Enter the height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of rectangle is : %f", dRet);

    return 0;
}