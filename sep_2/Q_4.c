#include<stdio.h>
int main()
{
    int i,a[5];

    printf("enter the array element\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("even no is \n");
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }
    }

    printf("odd no is \n");
    for(i=0;i<5;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\n",a[i]);
        }
    }

    return 0;
}