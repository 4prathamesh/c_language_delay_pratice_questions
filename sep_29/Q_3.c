// WAP to string convert the lowercase to uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int i;
    printf("enter the string :");
    gets(a);

    int len=strlen(a);

    for(i=0;i<len;i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    
    printf("uppercase string is:%s\n",a);
    return 0;
}