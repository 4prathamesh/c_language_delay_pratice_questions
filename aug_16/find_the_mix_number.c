/*
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;

    printf("enter the two number a and b:");
    scanf("%d%d",&a,&b);

    a>b ? printf("the number is maximum a: %d",a) : printf("b is maximum number : %d",b);

    return 0;
}*/

// ********************find the max between three number 

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;

    printf("enter the three number ");
    scanf("%d%d%d",&a,&b,&c);

    a>b && a>c ? printf("a is the max number : %d",a) :
    b>a && b>c ? printf("b is the max number : %d",b) : printf("c is the max number : %d",c);
    return 0;
}