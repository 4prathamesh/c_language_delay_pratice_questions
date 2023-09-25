// 17. Write a C program to count number of digits in a number.
#include<stdio.h>
int ncount=0;
void count(int no)
{
    if(no!=0)
    {
        no=no/10;
        ncount++;
        count(no);
    }
    else{
        printf("%d ",ncount);
    }
}
int main()
{
    int number;
    printf("enter the number :\n");
    scanf("%d",&number);
    count(number);
    return 0;
}