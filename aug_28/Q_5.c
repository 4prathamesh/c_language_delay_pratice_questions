#include<stdio.h>
int main()
{
    int no,i,temp,count,sum,temp2,mul,rem,p;

    printf("enter the number");
    scanf("%d",&no);

    for(i=10;i<=no;i++)
    {
        temp=i;
        
        count=0;
        for(;temp>0;)
        {
            temp=temp/10;
            count++;
        }
        //printf("%d ",count);
        sum=0;
        temp2=i;
        for(;temp2>0;)
        {
            mul=1;
            rem=temp2%10;
            p=1;
            while(p<=count)
            {
                mul=mul*rem;
                p++;
            }
            sum=sum+mul;
            temp2=temp2/10;
        }
        if(i==sum)
        {
            printf("%d ",sum);
        }
    }
    return 0;
}