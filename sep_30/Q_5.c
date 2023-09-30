// WAP to remove duplicate alphabet in string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter th estring \n");
    gets(str);
    int len=strlen(str);
    int i,j,k;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;k<len;k++)
                {
                    str[k]=str[k+1];
                }
                j--;
            }
        }
    }
    printf("\n%s",str);
    return 0;
}