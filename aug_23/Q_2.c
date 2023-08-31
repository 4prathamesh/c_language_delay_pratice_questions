#include<stdio.h>

int main()
{
    int n ,i=1 ;
    printf("enter the number is :\n ");
    scanf("%d",&n);

    while(i<n)
    {
        if(i%2==0)
        {
            printf("%d is even\n",i);
        }
        i++;
    }
    i=0;
    while(i<n)
    {
        if(i%2!=0)
        {
            printf("%d is odd\n",i);
        }
        i++;
    }
    return 0;
}