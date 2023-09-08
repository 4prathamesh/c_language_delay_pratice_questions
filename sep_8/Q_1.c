#include<stdio.h>
int main()
{
    int a[5],b[5],i,j;

    printf("enter the 1 array element :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the 2 array element :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }

    int len1=sizeof(a)/sizeof(a[0]);
    int len2=sizeof(b)/sizeof(b[0]);
    int len3=len1+len2;

    printf("len1=%d len2=%d len3=%d",len1,len2,len3);

    int c[len3];

    for(i=0;i<len1;i++)
    {
        c[i]=a[i];
        c[i+len1]=b[i];
    }

    printf("merge to array :\n");
    for(j=0;j<len3;j++)
    {
        printf("\n%d\n",c[j]);
    }

    return 0;

}