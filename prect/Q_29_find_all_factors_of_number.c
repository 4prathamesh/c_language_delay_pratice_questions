// 29. Write a C program to find all factors of a number.
#include<stdio.h>
int f=1;
void factors(int no)
{
    if(f<=no)
    {
        if(no%f==0)
        {
            printf("%d ",f);
            f++;
            factors(no);
        }
        else{
            f++;
            factors(no);
        }
    }
}
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    factors(num);
    return 0;
}