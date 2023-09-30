// WAP to enter two string and the check string is equal or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int len1,len2,count=0,i=0;
    printf("enter two string :\n");
    gets(str1);
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    printf("len1=%d\nlen2=%d",len1,len2);
    if(len1==len2)
    {
        while(i<len1)
        {
            if(str1[i]==str2[i])
            {
                count++;
            }
            i++;
        }
    }
    if(count==len1)
    {
        printf("\nstring is equal:\n");
    }
    else
    {
        printf("\nstring is not equal:\n");
    }
    return 0;
}