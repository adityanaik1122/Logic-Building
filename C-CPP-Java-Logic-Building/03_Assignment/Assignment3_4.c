////////////////////////////////
//      Author : Aditya Naik
//     Program : accept one character from user and convert case of that character 
//        Date : 10/05/2025
///////////////////////////////////

#include<stdio.h>
#include<ctype.h>

void Displayconvert(char CValue)
{
    if(islower(CValue))
    {
        CValue = toupper(CValue);
        printf("Converted charatcer : %c\n",CValue);
    }
    else if (isupper(CValue))
    {
        CValue = tolower(CValue);
        printf("Converted charatcer : %c\n",CValue);
    }
    else
    {
        printf("Not an alphabet character \n");   
    }
    return;


}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Displayconvert(cValue);

    return 0;

}