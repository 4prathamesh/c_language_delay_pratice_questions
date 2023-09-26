// 21. Write a C program to calculate sum of digits of a number
#include<stdio.h>
int sum=0,rem;
void digitsum(int no)
{
    if(no!=0)
    {
        rem=no%10;
        sum=sum+rem;
        no=no/10;
        digitsum(no);
    }
    else
    {
        printf("%d",sum);
    }
}
int main()
{
    int num;
    printf("enter the number :\n");
    scanf("%d",&num);
    digitsum(num);
    return 0;
}