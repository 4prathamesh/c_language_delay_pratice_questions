#include<stdio.h>
int main()
{
    int i,j,k=1,A=65;
    // char A;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i%2==0) && (j<=6-i))
            {
                printf("%c ",A);
                A++;
            }
            else if((i%2==1) && (j<=6-i))
            {
                printf("%d ",k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}