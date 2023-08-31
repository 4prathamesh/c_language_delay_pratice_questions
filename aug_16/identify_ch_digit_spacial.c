#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("enter the char : ");
    scanf("%c",&ch);

    ch >= 'A' && ch <= 'Z' || ch >='a' && ch <='z' ? printf("char is the alphabet : ") :
    ch >='0' && ch <= '9' ? printf("this is the degite ") : printf("this is spacial symbole");
    return 0;
}