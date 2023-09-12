//// write c progarm to 2D array of size 3*3 and display the matrix

#include<stdio.h>
int main()
{
    int i,j,a[10][10];
    printf("enter the array element: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("display the 2D array: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}