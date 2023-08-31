#include<stdio.h>
#include<conio.h>
int main()
{
    int number;
    printf("enter the number : ");
    scanf("%d",&number);

    number % 5 == 0 && number % 11 == 0 ? printf("the number is divisible by 5 and 11 ") : printf("not divi by 5 and 11");

    return 0;

}