// write c program to subtraction of two matrices of same size.
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j;

    printf("enter the first array element : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the second array element : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]=a[i][j]-a[i][j]);
        }
        printf("\n");
    }

    return 0;
}