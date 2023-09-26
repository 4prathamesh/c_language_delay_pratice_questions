// 20.Write a C program to swap first and last digits of a number
#include<stdio.h>
#include<math.h>
int count=0,mid,p=1,count1;
void swapFL(int no,int a,int a1)
{

    if(no>10)
    {
        no=no/10;
        count++;
        swapFL(no,a,a1);
    }
    else if(count>1)
    {
        p=p*10;
        count--;
        swapFL(no,a,a1);
    }
    else{
        a=a%10;
        a1=a1/10;

        mid= (a1) % ( p );

        int swapno=(a*p*10) + (mid*10) + (no);
        printf("\n%d",swapno);
    }
}
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    int a=num;
    int a1=num;
    swapFL(num,a,a1);
    return 0;
}