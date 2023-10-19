// write a c program to find a perfect number in array.
// perfect number mence is a positive number that is equale to the sum of
// all divisor but excludes the number.
#include<stdio.h>
int main()
{
    int i,n,a[n];

    printf("enter the size of array:\n");
    scanf("%d",&n);

    printf("enter the array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        int sum=0;
        for(int j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==a[i])
        {
            printf("\t%d\n",sum);
        }
    }
    return 0;
}