#include<stdio.h>
int main()
{
    int i,a[5],j;

    printf("enter the array elament\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("array element is : \n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]---->%d\n",i,a[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=a[i]+1;j<=(a[i+1])-1;j++)
        {
            printf("%d ",j);
        }
    }
    return 0;
}