#include<stdio.h>
int main()
{
    int i,no,temp,rem=0,flag;

    printf("check the number is duck or not from 1 to no: ");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        flag=0;
        temp=i;
        for(;temp>0;)
        {
            rem=temp%10;
            temp=temp/10;
            if(rem==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ",i);
        }
    }


    return 0;
}



/*#include<stdio.h>
int main()
{
    int i,j,n,rem=0,count=0,a,no;
    printf("enter the no");
    scanf("%d",&n);

    no=n;

    for(;n>0;)
    {
        n=n/10;
        count++;
    }
    printf("co %d",count);

    for (i=1;i<=n;i++)
    {
        a=i;
        for(j=1;j>count;j++)
        {
            rem=i%10;
            i=i/10;
            if(rem==0)
            {
                printf("%d",a);
            }
        }
    }
    return 0;
}*/


/*{
    int i,count=0,rem=0,n;
    printf("enter ");
    scanf("%d",&n);
    for(;n>0;)
    {
        n=n/10;
        count++;
    }
    printf("%d ",count);
    return 0;
}*/