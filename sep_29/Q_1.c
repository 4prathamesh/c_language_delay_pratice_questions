// write a c program to find the length in string 
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i;
    char a[]={"pratham"};
    for(int i=0;a[i]!= '\0' ;i++)
    {
        count++;
    }
    printf(" length of string =%d",count);
    return 0;
}