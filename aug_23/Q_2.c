#include<stdio.h>

int main()
{
    int n ,i=1 ;
    printf("enter the number is :\n ");
    scanf("%d",&n);

    printf("even number is \n");
    while(i<n)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
        i++;
    }
    printf("\nodd number is \n");
    i=1;
    while(i<n)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
        }
        i++;
    }
    return 0;
}