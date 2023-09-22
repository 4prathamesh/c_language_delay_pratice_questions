#include<stdio.h>
void perfect(int no)
{
    int i=1,sum=0;
    while(i <no )
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==no)
    {
        printf("\nthe number is perfect no:");
    }
    else
    {
        printf("\nthe number is not perfect no:");
    }
}