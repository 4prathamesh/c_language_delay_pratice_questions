// WAP to creat function name as checkisogram(char ch[]) 
// then string is isogram return value is 1
#include<stdio.h>
#include<string.h>
int checkisogram(char ch[])
{
    for(int i=0;ch[i]!='\0';i++)
    {
        for(int j=i+1;ch[j]!='\0';j++)
        {
            if(ch[i]==ch[j])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    char ch[20];
    printf("enter the string: ");
    gets(ch);
    int result=checkisogram(ch);
    if(result)
    {
        printf("\nstring is isogram");
    }
    else{
        printf("\nstring is not isogram");
    }
    return 0;
}