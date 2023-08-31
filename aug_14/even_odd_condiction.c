// chack the value is even or odd
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int no,a;
    printf("enter the number: ");
    scanf("%d",&no);

    no%2==0 ? printf("the no is even") : printf("odd");

    return 0;
}