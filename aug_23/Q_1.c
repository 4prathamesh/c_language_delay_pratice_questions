#include<stdio.h>
int main()
{
    int n,i=0;
    printf("enter the value of n");
    scanf("%d",&n);

    while(i<n)
    {
        //n=i;
        i++;
        printf("%d\t",i);
    }
    return 0;
}