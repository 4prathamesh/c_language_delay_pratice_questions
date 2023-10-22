// WAP to check whether number is positive or negative

#include<stdio.h>

int main()
{
    int no;
    printf("enter the value:");
    scanf("%d",&no);

    if(no>0)
    {
        printf("the number is positive: %d",no);
    }
    if(no<0) 
    {
        printf("the number is negative: %d",no);
    }
    return 0;
}