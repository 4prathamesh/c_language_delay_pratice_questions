#include<stdio.h>

int main()
{
    int a,b,choice;
    printf("enter the two no");
    scanf("%d%d",&a,&b);

    printf("1.addition\n");
    printf("2.Subtraction\n");
    printf("3.multiplication\n");
    printf("4.Division\n");
    printf("5.Modulus\n");

    printf("enter the choice\n");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
        
            printf("add =%d",a+b);
            break ;
        
        case 2:
        {
            printf("sub %d",a-b);
            break ;
        }
        case 3:
        {
            printf("mul %d",a*b);
            break ;
        }
        case 4:
        {
            printf("divide %d",a/b);
            break ;
        }
        case 5:
        {
            printf("modulus %d",a%b);
            break ;
        }
        default :
        {
            printf("invalid chois");
        }
    }
    return 0;
}