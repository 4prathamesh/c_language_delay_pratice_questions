#include<stdio.h>

int main()
{
    int rem,rev=0,n;
    printf("enter the no:");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        rev=(rev*10) + rem;
        n=n/10;
    
    }
    printf("reverce %d\n",rev);
    return 0;
}
