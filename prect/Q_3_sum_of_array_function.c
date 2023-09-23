// 3. Program to calculate sum of an array
#include<stdio.h>
int i=0,sum1=0;
void sum(int a[])
{
    if(i<5)
    {
        sum1=sum1+a[i];
        i++;
        sum(a);
    }
    else
    {
        printf("%d",sum1);
    }
}
int main()
{
    int a[5],i;
    printf("enter the array element:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a);
    return 0;
}