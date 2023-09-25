// 5.Program to find the largest element of an array
#include<stdio.h>

void largest(int a[])
{
    static int i,max;
    if(i<5)
    {
        if(max<a[i])
        {
            max=a[i];
        }
      
        i++;
        largest(a);
    }
    else{
     printf(" largest =%d",max);
    }
    
}
int main()
{
    int a[5],i=0;
    printf("enter the array element:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
   
    largest(a);
    return 0;
}