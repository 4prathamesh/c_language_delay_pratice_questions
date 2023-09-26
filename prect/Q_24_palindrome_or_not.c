// 24.Write a C program to check whether a number is palindrome or not.
#include<stdio.h>
int count=0,rem,rev=0;
void palindrome(int no,int temp)
{
    if(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
        palindrome(no,temp);
    }
    else if(rev!=temp)
    {
        printf("not is palindrome:");
    }
    else{
        printf(" is palindrome: ");
    }
}
int main()
{
    int number;
    printf("enter the number is :");
    scanf("%d",&number);
    int t=number;
    palindrome(number,t);
    return 0;
}