// write c program to find the smallest missing element from a sorted array.

#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,7},i,smiss,diff;

    printf("enter the array element :");
    for(i=0;i<5;i++)
    {
        printf("\na[%d]---->%d\n",i,a[i]);
    }

    printf("smallest missing element\n");
    for(i=0;i<5;i++)
    {
        diff=a[i]+1;
        if(diff>a[i] && a[i+1]!=diff)
        {
            smiss=diff;
            break;
        }
    }
 printf("\n%d",smiss);   //smallest missing element
    







/*
printf("enter the array element :");
     for(i=0;i<5;i++)
    {
        printf("\na[%d]---->%d\n",i,a[i]);
    }

    for(i=0;i<5;i++)
    {
        diff=a[i+1]-a[i];
        if(diff>=2)
        {
            break;
        }
    }
    if(diff!=1)
    {
        printf("%d",diff);
    }*/
    

    return 0;
}