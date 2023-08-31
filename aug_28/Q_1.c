#include<stdio.h>
int main()
{
    int number,i,j,count=0 ;
    printf("enter the number : ");
    scanf("%d",&number);

    for(i=2;i<=number;i++)
    {
        count=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}