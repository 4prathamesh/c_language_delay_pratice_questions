// 18 .Write a C program to find first and last digit of a number.
#include<stdio.h>
int last,count=0;
void FLdigit(int no,int a)
{
    if(no>10)
    {
        no=no/10;
        FLdigit(no,a);
    }
    else{
        a=a%10;
        printf("first=%d \nlast=%d",no,a);
    }
}
int main()
{
    int number;
    printf("enter the number:\n");
    scanf("%d",&number);
    int a=number;
    FLdigit(number,a);
    return 0;
}
