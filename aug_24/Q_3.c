#include<stdio.h>

int main()
{
    int number_O,i=1,sum=0,PN=0,rem=0;
    printf("enter the number is :");
    scanf("%d",&number_O);

    while(i<number_O)
    {
        rem=number_O%i;
      
        if(rem==0)
        {
             printf("%d\t",i);
           sum=sum+i;
        }
i++;
    }
    if(sum==number_O)
    {
        printf("is perfet number");
    }
    else{
        printf("is not");
    }
    return 0;
}