#include<stdio.h>
int main()
{
    int i,j,a[5];

    printf("enter the array element :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    int len=sizeof(a)/sizeof(a[0]);
    int mid=2;
    int flag=0,f=0;
    for(i=0;i<5;i++)
    {
        int count=1;
        int flag=0;
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                if(count>=mid)
                {
                    flag=1;
                    break;
                }
                
            }
            
        }
        if(flag)
        {
            f=1;
            break;
        }
    }

    if(f)
    {
        printf("%d  is Majority",a[i]);
    }
    else
    {
    printf("No majority element...");
    }
    
    return 0;
}