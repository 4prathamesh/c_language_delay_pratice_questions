// 33.Write a C program to check whether a number is Prime number or not.
#include<stdio.h>
int i=2,flag=1;
void prime(int no)
{
    if(i<no)
    {
        if(no%i!=0)
        {
            i++;
            prime(no);
        }
        else{
            printf("\nno is not prime");
        }
    }
    else
    {
        printf("\nno is prime number");
    }
}
int main()
{
    int num;
    printf("enter the number is\n");
    scanf("%d",&num);
    prime(num);
    return 0;
}