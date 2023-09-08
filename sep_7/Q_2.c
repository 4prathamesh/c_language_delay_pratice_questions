#include<stdio.h>
int main()
{
    int i,mid,end,l=0,temp,a[5],len;

    len=sizeof(a)/sizeof(a[0]);
    end=len-1;
    printf("enter the array element \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("befor reverce the array element  : \n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]---->%d\n",i,a[i]);
    }

    mid=len/2;

    for(i=0;i<mid;i++)
    {
        temp=a[i];
        a[i]=a[end];
        a[end]=temp;
        end--;
    }

    printf("after revers the array element : \n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]---->%d\n",i,a[i]);
    }

}