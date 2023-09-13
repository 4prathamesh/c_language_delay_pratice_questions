// writ a program take a pointer, store addres of 
//   another variable into pointer and print its address and value.

#include<stdio.h>
int main()
{
    int a=10,*ptr;

    ptr=&a;

    printf("addres of ptr :%u \n",&ptr);
    printf("addres of a :%u\n",&a);
    printf("value of ptr: %d\n",ptr);
    printf("value of a print using pointer ptr: %d\n",*ptr);
    printf("value of a: %d",a);

return 0;
}