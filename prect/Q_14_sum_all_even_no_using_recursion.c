// 14. Write a C program to find sum of all even numbers between 1 to n
#include<stdio.h>
int i=1,sum=0;
void evensum(int no)
{
    if(i%2==0 && i<no)
    {
        sum=sum+i;
        i++;
        evensum(no);
    }
}
int main()
{
    int number;
    printf("enter the value:\n");
    scanf("%d",&number);
    evensum(number);
    printf("sum=%d",sum);
    return 0;
}
