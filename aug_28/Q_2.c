#include<stdio.h>
int main()
{
    int i,number,sum,j;
    printf("enter the number :");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
    if(sum==i)
        {
            printf("is the perfect number %d",i);
        }
    }
    
    return 0;
}