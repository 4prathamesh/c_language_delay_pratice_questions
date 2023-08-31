#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            // if(j<=i)
            // {
                
                printf("%d ",k*k);
                k++;
            // }
        }
        printf("\n");
    }
    return 0;
}