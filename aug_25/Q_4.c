#include<stdio.h>
int main()
{
    int number,rem=0,sum=0;
    printf("enter the number is :");
    scanf("%d",&number);

    while(number!=0)
    {
        rem=number%10;
        number=number/10;
            sum=sum+rem;
    }
    printf("%d",sum);
    return 0;


}