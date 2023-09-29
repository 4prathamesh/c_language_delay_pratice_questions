// WAP to check whether string is palindrome
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    printf("enter the string :");
    gets(a);
    
    int i,len,flag=0;
    len=strlen(a);    //a s d f g

    for(i=0;i<len;i++)
    {
        if(a[i] != a[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("\nit is not palindrome");
    }
    else
    {
        printf("string is palindrome");
    }


}