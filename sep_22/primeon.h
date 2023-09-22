#include<stdio.h>
void prime(int no)
{
    int i,count=0;

    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\nit is prime number:\n");
    }
    else{
        printf("\nit is not prime no:\n");
    }

}