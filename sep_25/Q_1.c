// find factorial of any number is
#include<stdio.h>
int fact=1;
void factorial(int no)
{
    if(no!=0)
    {
        fact=fact*no;
        no--;
        factorial(no);
    }
    else{
        printf("factoral is =%d",fact);
    }
}
int main()
{
    int number;
    printf("enter the numer is:\n");
    scanf("%d",&number);
    factorial(number);
    return 0;
}