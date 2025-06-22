// Programm to accept temperature in fahrenheit and convert it into celsius
// 1 celsius = (Fahrenheit -32) * (5/9)

#include<stdio.h>

double Celsius(float fNo)
{
    double dCelcius = 0;

    dCelcius = (fNo -32) * (5.0/9.0);

    return dCelcius;
    
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the temperature in fahrenheit : ");
    scanf("%f", &fValue);

    dRet = Celsius(fValue);

    printf("Temperature in celcius is : %2lf\n", dRet);

    return 0;
}