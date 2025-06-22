// Programm to accept a number from user and print it into word

#include<stdio.h>
int Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    char *words[] = {"Zero","One", "Two", "Three", "Four","Five", "Six", "Seven", "Eight", "Nine"};
    
    if (iNo >= 0 && iNo <= 9) 
    {
        printf("You entered: %s\n", words[iNo]);
    } 
    else 
    {
        printf("Invalid input. Please enter a digit from 0 to 9.\n");
    }
    return 0;
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}