#include<stdio.h>
int main()
{
    int no,temp,i,rem=1,num=0,rem1,k;
    
    printf("enter the number for check the strong no: ");
    scanf("%d",&no);


// corret code 
    for(i=1;i<=no;i++)
    {
        num=0;
        temp=i;
        for(;temp>0;)
        {
            int fact=1;
            rem=temp%10;
            for(k=1;k<=rem;k++)
            {
                fact=fact*k;
            }
            num=num+fact;
            temp=temp/10;
        }
        if(i==num)
        {
            printf("%d ",num);
        }
    }
    return 0;
}

/*
// this code is run but answer not curret 
    for(i=1;i<=no;i++)
    {
        num=0;
        temp=i;
        for(;temp>0;)
        {
            rem=1;
            rem=temp%10;
            rem1=rem;
            for(k=1;k<=rem1;k++)
            {
                rem=rem*k;
            }
            
            
            
            num=num+rem;
            temp=temp/10;
           // printf("%d ",num);
        }
        if(i==num)
        {
            printf("%d ",num);
        }
    }
    return 0;
}*/




/*
// this code is right but this is smole part of the code
#include<stdio.h>
int main()
{
    int i,no,n;
    printf("enter the number is ");
    scanf("%d",&no);
    n=no;
    for(i=1;i<n;i++)
    {
        no=no*i;
        printf("%d ",no);
    }
    return 0;

}*/