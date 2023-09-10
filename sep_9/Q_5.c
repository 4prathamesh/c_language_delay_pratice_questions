// write c program find a pair with given sum in array

#include<stdio.h>
int main()
{
    int i,j,size,a[10],b,count=0,sum;

    printf("enter the array size: \n");
    scanf("%d",&size);

    printf("enter the array element : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter any number for check sum: \n");
    scanf("%d",&b);

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            sum=a[i]+a[j];
            if(sum==b)
            {
                count++;
            }
        }
    }
    printf("%d this is the pear of sum",count);

    return 0;
}