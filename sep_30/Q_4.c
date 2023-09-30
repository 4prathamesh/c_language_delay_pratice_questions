// WAP calculate sum of digit in string.
#include<string.h>
#include<stdio.h>
int main()
{
    char str[100];
    printf("enter the string \n");
    gets(str);
    int sum=0,i=0,p;
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {   
            p=str[i]-48;
            sum=sum+p;
        }
        i++;
    }
    printf("sum of digit=%d",sum);
    return 0;
}