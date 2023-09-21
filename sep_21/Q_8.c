#include<stdio.h>
int main()
{
    int num1,num2;
    void findfactorial(int num1);
    printf("enter the one number is :\n");
    scanf("%d",&num1);
    findfactorial(num1);
    return 0;
}
void findfactorial(int n1)
{
    int fact=1;
    for(int i=1;i<=n1;i++)
    {
        fact=fact*i;
    }
    printf("fact is: %d",fact);
}