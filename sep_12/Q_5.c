// write a c program to find the transpose of given matrix.

#include<stdio.h>
int main()
{
    int i,j,a[10][10];

    printf("ente the array element :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("orignal matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("transpose of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

}

/*           ***********************OUT PUT*************************************
ente the array element :
1
2
3
4
5
6
7
8
9
orignal matrix is:
1 2 3
4 5 6
7 8 9
transpose of matrix:
1 4 7
2 5 8
3 6 9*/