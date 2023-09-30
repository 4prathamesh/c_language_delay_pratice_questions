// count white space in string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string \n");
    gets(str);
    int count=0,i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("space in string %d",count);
    return 0;
}
