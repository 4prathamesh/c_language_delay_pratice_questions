// write a c program to count all distinct pairs for aspecific difference
#include<stdio.h>
int main()
{
    int a[10],i,diff;

    printf("enter the array element : \t");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the difference :\n");
    scanf("%d",&diff);

    for(i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]-a[j]==diff || a[j]-a[i]==diff)
            {
                printf("\n the diffrence of %d - %d = %d",a[i],a[j],diff);
            }
        }
    }
    
    return 0;

}