#include<stdio.h>
int main()
{
    int i,n,a[n];

    printf("enter array size:\n");
    scanf("%d",&n);

    printf("enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        int count=0;
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }
        if(count==0 && a[i]!=1)
        {
            printf("\n%d",a[i]);
        }
    }
    return 0;
}