// 19.Write a C program to find sum of first and last digit of a number.
#include<stdio.h>
void sumFLdigit(int no,int a)
{
    if(no>10)
    {
        no=no/10;
        sumFLdigit(no,a);
    }
    else{
        int last=a%10;
        printf("%d + %d =%d",no,last,no+last);
    }
}
int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    int a=num;
    sumFLdigit(num,a);
    return 0;
}