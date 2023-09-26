// 31.Write a C program to find HCF (GCD) of two numbers.
#include<stdio.h>
int i=1,hcfno;
void hcfn(int no1,int no2)
{
    if(i<=no1 && i<=no2)
    {
        if(no1%i==0 && no2%i==0)
        {
            hcfno=i;
            i++;
            hcfn(no1,no2);
        }
        else{
            i++;
            hcfn(no1,no2);
        }
    }
    else{
        printf("%d",hcfno);
    }
}
int main()
{
    int num1,num2;
    printf("enter the two number ");
    scanf("%d%d",&num1,&num2);
    hcfn(num1,num2);
    return 0;
}