// WAP to create function name as findsubstring(char ch[], char ch1[])
// find substing in a sting then find string its return vale is 1 otherwise -1,
#include<string.h>
#include<stdio.h>

int findsubstring(char ch[],char ch1[])
{
    int p=0;
    int size = strlen(ch1);
    for(int i=0;ch[i]!='\0';i++)
    {
        for(int j=0;ch1[j]!='\0';j++)
        {
            if(ch[i]==ch1[j])
            {
                p++;
            }
        }
        if(p==size)
        {
            return 1;
        }  
    }
   return -1;
}
int main()
{
    char ch[100],ch1[100];
    printf("enter the string:");
    gets(ch);
    gets(ch1);

    int result=findsubstring(ch,ch1);
    if(result==1)
    {
        printf("sub string is find");
    }
    else{
        printf("sub string is not find");
    }
    
    return 0;
}