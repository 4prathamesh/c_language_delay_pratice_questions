#include<stdio.h>
int main()
{
    int a[5],i,max;

    printf("enter the array element \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    for(i=1;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }

    }
    printf("max array value is %d",max);
    return 0;
}