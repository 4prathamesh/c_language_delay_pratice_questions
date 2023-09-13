//  write a c program to tack 2 input from user and swap number using third varible and 
//  without using third variable.


#include<stdio.h>
int main()
{
    int a,b,c,*ptr1,*ptr2,*ptr3;

    printf("enter the two varible : \n");
    scanf("%d%d",&a,&b);

    ptr1=&a;
    ptr2=&b;
    ptr3=&c;

    *ptr3=(*ptr1);
    *ptr1=(*ptr2);
    *ptr2=(*ptr3);

    printf("with threed variable:\n");

    printf("pointer 1 is :%d\n",*ptr1);
    printf("pointer 2 is :%d\n",*ptr2);

    *ptr1=(*ptr1)+(*ptr2);
    *ptr2=(*ptr1)-(*ptr2);
    *ptr1=(*ptr1)-(*ptr2);
    printf("without threed variable:\n");
    printf("pointer 1 is :%d\n",*ptr1);
    printf("pointer 2 is :%d\n",*ptr2);

    return 0;


}