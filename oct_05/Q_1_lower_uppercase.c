// WAP to convert fist letter lower case to uppercase in string.
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("enter the string :");
    gets(name);

    int len=strlen(name);
    for(int i=0;i<len;i++)
    {
       if(name[i]>=97 && name[i]<=122 && i==0)
        {
            name[0]=name[0]-32;
        }
        else if(name[i]==' ' && name[i+1]>=97 && name[i+1]<=122)
        {
            name[i+1]=name[i+1]-32;
        }
    }
    printf("%s",name);
    return 0;
}