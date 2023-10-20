// write a program to create function name as checkisomorphic(char ch[],char ch1[])
// then string is isomorphic return value is 1 otherwise 0.
#include<stdio.h>
#include<string.h>
int checkisomorphic(char ch[],char ch1[])
{
    int len1=strlen(ch);
    int len2=strlen(ch1);
    int i,j;
    if(len1==len2)
    {
        for(int i=0;i<len1;i++)
        {
            for(int j=i+1;j<len1;j++)
            {
                if(ch[i]==ch[j])
                {
                    if(ch1[i]==ch1[j])
                    {
                        if(i==len1-1)
                        {
                            return 1;
                        }
                        if(j==len2)
                        {
                            break;
                        }
                         
                    }
                }
            }

        }
    }
    return 0;
}
int main()
{
    char ch[100],ch1[100];
    printf("enter the string :");
    gets(ch);
    gets(ch1);
    int result=checkisomorphic(ch,ch1);
    if(result)
    {
        printf("\nstring is isomorphic");
    }
    else
    {
        printf("\nstring is not isomorphic");
    }
    return 0;
}