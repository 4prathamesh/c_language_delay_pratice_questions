#include<stdio.h>
int main()
{
    int num1,num2;
    void findSub(int num1, int num2);
    printf("enter the two number is :\n");
    scanf("%d%d",&num1,&num2);
    findSub(num1,num2);
    return 0;
}
void findSub(int n1 ,int n2)
{
    int sub=n1-n2;
    printf("sub is: %d",sub);
}