// WAP to copy one string in to another string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    printf("string is: ");
    gets(str);
    gets(str1);
    printf("\nbefore copy string is \nstr=%s\nstr2=%s",str,str1);
    for(int i=0;str[i]!='\0';i++)
    {
        str1[i]=str[i];
    }
    printf("\nafter copy string is \nstr=%s\nstr2=%s",str,str1);
    return 0;
}