#include<stdio.h>
#include<math.h>
void armstrong(int no)
{
    int rem,i,count=0,num=1,sum=0;
    int temp=no;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    temp=no;
    while(temp>0)
    {
        rem=temp%10;
        // while(count>0)
        // {
        //     num=rem*num;
        //     count--;
        // }
        num=pow(rem,count);
        sum=sum+num;
        temp=temp/10;
    }
    if(sum==no)
    {
        printf("\nthe number is armstrong number:");
    }
    else{
        printf("\nthe number is not a armstrong number:");
    }
}