// * * * * * 
// 1 2 3 4 5 
// * * * * *
// 6 7 8 9 10 
// * * * * *

#include<stdio.h>
int main()
{
    int i,j,k=1;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i%2==0)
            {
                printf("%d ",k);
                k++;
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}