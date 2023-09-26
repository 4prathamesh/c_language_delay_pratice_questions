// 23.Write a C program to enter a number and print its reverse.
#include<stdio.h>
int rem,rev=0;
void reverce(int no)
{
    if(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
        reverce(no);
    }
    else{
        printf("\nrev number is %d",rev);
    }
}
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    reverce(num);
    return 0;
}