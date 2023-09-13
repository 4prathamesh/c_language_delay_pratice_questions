// write a c program to tack 2 input from user and prints its addition,substraction
// multiplcation and division.

#include<stdio.h>
int main()
{
    int a,b,*ptr1,*ptr2;

    printf("enter the value a and b:\n");
    scanf("%d%d",&a,&b);

    ptr1=&a;
    ptr2=&b;

    printf("multiplication of two pointer is :%d\n",(*ptr1)*(*ptr2));
    printf("addition of two pointer is :%d\n",(*ptr1)+(*ptr2));
    printf("division of two pointer is :%d\n",(*ptr1)/(*ptr2));

    return 0;

}