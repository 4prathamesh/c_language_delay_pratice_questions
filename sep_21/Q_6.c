#include<stdio.h>
int main()
{
    int num1,num2;
    void findDiv(int num1, int num2);
    printf("enter the two number is :\n");
    scanf("%d%d",&num1,&num2);
    findDiv(num1,num2);
    return 0;
}
void findDiv(int n1 ,int n2)
{
    float sum=n1/n2;
    printf("sum is: %f",sum);
}