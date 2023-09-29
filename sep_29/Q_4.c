// WAP to reverse string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    printf("enter the string:\n");
    gets(a);

    int len=strlen(a);

    for(int i=len-1;i>-1;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}