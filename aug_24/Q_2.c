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
    int num,i=2,j=2,flag=0;
    printf("enter the number is ");
    scanf("%d",&num);

    while(i<num)
    {
        j=2;
        while(j<=i){
            if(i%j==0)
            {
                flag=1;
               // break;
            }
            j++;
        }
        
        printf("%d ",i);
        i++;
    }
    return 0;
}