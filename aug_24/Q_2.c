/*#include<stdio.h>

int main()
{
    int number,flag=0,n=2;
    printf("enter the number is :");
    scanf("%d",&number);
    
    while(number>n)
    {
        if(number%n==0)
        {
            flag=1;
            break;
        }
        n++;
    }
    if(flag)
    {
        printf("number is not prime ");

    }
    else{
        printf("is prime");
    }
    return 0;
}*/


#include<stdio.h>
int main()
{
    int num,i=2,j=2,flag=1;
    printf("enter the number is ");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        j=2;
        flag=1;
        while(j<i){
            if(i%j==0)
            {
                flag=0;
                break;
            }
            j++;
        }
        if(flag)
        {
            printf("%d ",i);
        }
    }
    return 0;
}