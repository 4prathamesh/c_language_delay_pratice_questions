// 1 
// 4 9 
// 16 25 36
// 49 64 81 100

#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
                printf("%d ",k*k);
                k++;
        }
        printf("\n");
    }
    return 0;
}