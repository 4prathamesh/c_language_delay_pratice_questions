#include<stdio.h>
int main()
{
    int odd=0,i=0,number;
    printf("enter the number is :");
    scanf("%d",&number);

    while(i<=number)
    {
        if(i%2!=0)
        {
            odd=odd+i;
        }
        i++;
        
    }
    printf("%d",odd);
    return 0;
}