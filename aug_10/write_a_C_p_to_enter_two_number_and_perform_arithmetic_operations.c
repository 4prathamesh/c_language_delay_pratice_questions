//   write_a_C_p_to_enter_two_number_and_perform_arithmetic_operations
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int sum,sub,muli,remider;
    float divide;
    printf("enter the two number : ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    muli=a*b;
    divide=a/b;
    remider=a%b;
    a>b ? printf("a is grater\n") : printf("b is grater\n");
    printf("sum of two number :%d\n",sum);
    printf("sub of two number :%d\n",sub);
    printf("muli of two number :%d\n",muli);
    printf("divide of two number :%f\n",divide);
    printf("remider of two number :%d\n",remider);
    return 0;

}