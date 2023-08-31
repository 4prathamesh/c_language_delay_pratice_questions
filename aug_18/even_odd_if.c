// check the number is even or odd
#include<stdio.h>

int main()
{
    int no;
    printf("enter the number ");
    scanf("%d",&no);

    if(no%2==0)
    {
    printf("this is the even no");
    }
    else{
        printf("the no is odd");

    }
    return 0;
}