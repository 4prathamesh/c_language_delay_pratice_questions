// 32.Write a C program to find LCM of two numbers.
#include<stdio.h>
void lcm(int no1,int no2,int i,int p)
{
    if(i%no1==0 && i%no2==0)
    {
        printf("%d",i);
    }
    else{
        i=p+i;
        lcm(no1,no2,i,p);
    }
}
int main()
{
    int num1,num2,i;
    printf("enter the two number ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        i=num1;
    }
    else
    {
        i=num2;
    }
    int p=i;
    lcm(num1,num2,i,p);
    return 0;
}