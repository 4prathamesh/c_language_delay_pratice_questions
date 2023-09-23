// 4. Program to calculate average of an array 
#include<stdio.h>
int i=0,sum=0;
void average(int a[])
{
    if(i<5)
    {
        sum=sum+a[i];
        i++;
        average(a);
    }
    else{
        printf("%d",sum);
    }
}
int main()
{
    int a[5];
    printf("enter the array element:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    average(a);
    return 0;
}