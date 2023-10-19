//write a c program find secound highest element in array

#include<stdio.h>
int main()
{
    int i,size,a[10],temp;

    printf("enter the array size :");
    scanf("%d",&size);

    printf("enter the array element :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    int max,sm;

    max=a[0];
    sm=a[1];
    if(max<sm)
    {
        max=a[1];
        sm=a[0];
    }

    for(i=0;i<size;i++)
    {
            if(a[i]>max)
            {
                sm=max;
                max=a[i];
            }
            else if(a[i]<max && a[i]>sm)
            {
                sm=a[i];
            }
    }
    printf("secound highest element in array: %d \n",sm);

    return 0;
}