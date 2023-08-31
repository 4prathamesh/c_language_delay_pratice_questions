// WAP to swap two number using bitwise operator
#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the two value a and b");
    scanf("%d\t%d",&a,&b);

    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\t%d",a,b);


    return 0;

}