// WAP to concatenate two string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter the string : ");
    gets(str1);
    gets(str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<len2;i++)
    {
        str1[len1]=str2[i];
        len1++;
    }
    printf("str1=%s",str1);
    return 0;
}