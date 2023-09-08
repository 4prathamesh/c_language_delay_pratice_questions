#include<stdio.h>
int main()
{
    int i,dif,n;

    printf("enter the size of array:\n");
    scanf("%d",&n);

    int a[n];

    printf("enter the array elament\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("array element is : \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]---->%d\n",i,a[i]);
    }

    for(i=0;i<(a[n]-1);i++)
    {
        dif=a[i+1]-a[i];

        while(dif>1)
        {
            a[i+1]=a[i]+1;
            dif--;
            i++;
        }
    }

    printf("befor array element is : \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]---->%d\n",i,a[i]);
    }

return 0;
}