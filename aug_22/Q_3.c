#include<stdio.h>
int main()
{
    int number,a,b,c,choice;

    printf("enter the number \n");
    scanf("%d",&number);

    printf("enter the three no\n");
    scanf("%d%d%d",&a,&b,&c);

    printf("1.check number is positive, negitive or zero\n");
    printf("2.check number is even or odd\n");
    printf("3.check number is max\n");

    printf("enter the choice\n");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
        
            if(number>0)
            {
                printf("the number is positive %d",number);
            }
            else if(number<0)
            {
                printf("the number is negative %d",number);
            }
            else{
                printf("the number is zero");
            }
            break ;
        
        case 2:
        
            if(number%2==0)
            {
                printf("the number is even");
            }
            else{
                printf("odd");
            }
            break ;
        
        case 3:
        
            if(a>b && a>c)
            {
                printf("a is the max");
            }
            else if(b>a && b>c)
            {
                printf("b is max");
            }
            else{
                printf("the c number is max");
            }
            break ;
        
    

    }
return 0;

}