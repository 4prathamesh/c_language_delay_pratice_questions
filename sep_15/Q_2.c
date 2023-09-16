// write a c program to input and sum of array element using pointer.

#include<stdio.h>
int main()
{
    int i,*ptr,size,sum=0;

    printf("enter the array size:\n");
    scanf("%d",&size);

    int a[size];
    ptr=a;

    printf("enter the array element :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
        sum=sum+(*( ptr+i));
    }
    printf("sum=%d ",sum);

    return 0;
}