#include<stdio.h>
int main()
{
    int num1,num2;
    void findMul(int num1, int num2);
    printf("enter the two number is :\n");
    scanf("%d%d",&num1,&num2);
    findMul(num1,num2);
    return 0;
}
void findMul(int n1 ,int n2)
{
    int mul=n1*n2;
    printf("mul is: %d",mul);
}