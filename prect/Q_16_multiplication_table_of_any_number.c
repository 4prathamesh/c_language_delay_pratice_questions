// 16. Write a C program to print multiplication table of any number.
#include<stdio.h>
int i=1,t;
void table(int no)
{
    if(i<=10)
    {
        t=no*i;
        printf("%d * %d = %d\n",no,i,t);
        i++;
        table(no);
    }
}
int main()
{
    int number;
    printf("enter the number :\n");
    scanf("%d",&number);
    table(number);
    return 0;
}
