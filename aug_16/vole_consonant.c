/*#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("enter the char : ");
    scanf("%c",&ch);

    ch == 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch=='u' ? printf("is the vole :") : printf("is consonant");

    return 0;

}*/

//**************** chack the alphabet is uper or lowew

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("enter the char : ");
    scanf("%c",&ch);

    ch >= 'A' && ch <= 'Z' ? printf("is uper chase") : 
    ch >= 'a' && ch <= 'z' ? printf("is the lower chase") : printf("this is not char ");
    return 0;
}

