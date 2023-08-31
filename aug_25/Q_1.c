#include<stdio.h>
int main()
{
    int number,i=0,sum=0;
    printf("enter the number is:\n");
    scanf("%d",&number);

    while(i<=number)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of natural number is :%d ",sum);

    return 0;

}