#include<stdio.h>

int main()
{
    int n,rem=0,flag=0,original,rev=0;
    printf("enter the number n\n");
    scanf("%d",&n);

    original=n;

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
        if(original==rev)
        {
            flag=1;
        }
    }
    if(flag)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}