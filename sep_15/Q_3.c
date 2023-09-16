// write a c program to input and print array revesre elements using pointers

#include<stdio.h>
int main()
{
    int i,size,*ptr;

    printf("enter the array size : \n");
    scanf("%d",&size);

    int a[size];
    ptr=a;

    printf("enter the array element :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }

    printf("raverce the array element :\n");
    for(i=size-1;i>=0;i--)
    {
        --ptr;
        printf("%d ",*ptr);
    }
    


    return 0;
}