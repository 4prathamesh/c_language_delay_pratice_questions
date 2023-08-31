// Q 10 WAP swap two number without using third variable

#include<stdio.h>
int main()
{
    int a=5,b=6;
    printf("before swaping a=%d\tb=%d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("after swaping a=%d\tb=%d",a,b);
    return 0;

}