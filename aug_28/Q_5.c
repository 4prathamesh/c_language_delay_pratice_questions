#include<stdio.h>
int main()
{
    int no,i,temp,count,sum,mul,rem,p;

    printf("enter the number");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        temp=i;
        count=0;
        // how many digit are present in the number
        for(;temp>0;)
        {
            temp=temp/10;
            count++;
        }
        sum=0;
        temp=i;
        for(;temp>0;)
        {
            mul=1;
            rem=temp%10;
            p=1;
            while(p<=count)
            {
                mul=mul*rem;
                p++;
            }
            sum=sum+mul;
            temp=temp/10;
        }
        if(i==sum)
        {
            printf("%d ",sum);
        }
    }
    return 0;
}