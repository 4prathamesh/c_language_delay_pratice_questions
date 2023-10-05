// WAP to create a function name checkanagram(char ch[],char ch1[])
// than string anagram return 0 otherwise 0.
#include<stdio.h>
#include<string.h>
int i,j,p=0,le1,len2;
int checkanagram(char ch[],char ch1[])
{
    int len1=strlen(ch);
    int len2=strlen(ch1);  
    if(len1==len2)
    {
        for(i=0;ch[i]!='\0';i++)
        {
            for(j=0;ch1[j]!='\0';j++)
            {
                if(ch[i]==ch1[j])
                {
                    p++;
                }
            }
        }
        if(p==len1)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char ch[50],ch1[50];
    printf("enter the string :");
    gets(ch);
    gets(ch1);

    int result=checkanagram(ch,ch1);
    if(result)
    {
        printf("\nstring is anagram:");
    }
    else{
        printf("\nstring is not anagram:");
    }
    return 0;
}