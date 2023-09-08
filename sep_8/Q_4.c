#include<stdio.h>
int main()
{
    int index,i,n,a[10];

    printf("enter the array size: ");
    scanf("%d",&n);

    printf("enter the array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("remove element in specific index :");
    scanf("%d",&index);

    for(i=index;i<n-1;i++)
    {
        a[i]=a[i+1];     
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}