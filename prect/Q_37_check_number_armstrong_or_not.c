// 37.Write a C program to check whether a number is Armstrong number or not
#include<stdio.h>
#include<math.h>
int count=0,rem=0,sum=0,p;
int armstrong(int no,int no1)
{
    if(no!=0)
    {
        no=no/10;
        count++;
        armstrong(no,no1);
    }
    else if(no1!=0)
    {
        rem=no1%10;
        p=pow(rem,count);
        sum=sum+p;
        no1=no1/10;
        armstrong(no,no1);
    }
    return sum;
}
int main()
{
    int num,result,no1;
    printf("enter the number ");
    scanf("%d",&num);
    no1=num;
    int no2=num;
    result=armstrong(num,no1);
    if(no2==result)
    {
        printf("\nIt is a armstrong number %d",result);
    }
    else {
        printf("is not %d",result);
    }
    
    return 0;
}