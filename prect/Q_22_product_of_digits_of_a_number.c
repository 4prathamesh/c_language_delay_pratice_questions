// 22.Write a C program to calculate product of digits of a number.
#include<stdio.h>
int rem,mul=1;
void product(int no)
{
    if(no!=0)
    {
        rem=no%10;
        mul=mul*rem;
        no=no/10;
        product(no);
    }
    else
    {
        printf("%d",mul);
    }
}
int main()
{
    int num;
    printf("enter the number :\n");
    scanf("%d",&num);
    product(num);
    return 0;
}