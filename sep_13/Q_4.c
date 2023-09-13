//write a c program to calculat factorial of number using pointer.

#include<stdio.h>
int main()
{
    int i,no,*ptr,fact=1;
    printf("enter the number is : \n");
    scanf("%d",&no);

    ptr=&no;

    for(i=1;i<=(*ptr);i++)
    {
        fact=fact*i;
    }
    printf("factorial is =%d\n",fact);
    return 0;
}