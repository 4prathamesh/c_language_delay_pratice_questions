#include<stdio.h>
int main()
{
    int num1,num2;
    void findSum(int num1, int num2);
    printf("enter the two number is :\n");
    scanf("%d%d",&num1,&num2);
    findSum(num1,num2);
    return 0;
}
void findSum(int n1 ,int n2)
{
    int sum=n1+n2;
    printf("sum is: %d",sum);
}