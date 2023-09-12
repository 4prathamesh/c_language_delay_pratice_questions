// write c program to multiplication of two square matrices of same size.
#include<stdio.h>
#include<math.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k;

    printf("enter the first array element : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the second array element : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("display first array element : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("display second array element : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }

    printf("\nresult matrices is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*           ***********************OUT PUT*************************************
enter the first array element : 
1
2
3
4
enter the second array element :
5
6
7
8
display first array element :
1 2
3 4
display second array element :
5 6
7 8

result matrices is:
19 22
43 50
*/