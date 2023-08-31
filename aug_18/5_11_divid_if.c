#include<stdio.h>
int main()
{
    int no;
    printf("enter the no");
    scanf("%d",&no);

    if(no%5==0 && no%11==0)
    {
        printf("the number is divibel ");
    }
    else 
    {
        printf("the number is not divide");
    }
    return 0;
}