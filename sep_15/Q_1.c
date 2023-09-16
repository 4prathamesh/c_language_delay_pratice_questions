// write a c program to input and print array element using pointer.

#include<stdio.h>
int main()
{
    int i,*ptr,size;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    int a[size];
    ptr=a;
    printf("enter the array element :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    
    printf("array element :\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}