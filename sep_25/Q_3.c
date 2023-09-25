// print reverce array using recurtion
#include<stdio.h>
int i=0;
void revercearr(int a[],int l)
{
    if(l!=-1)
    {
        printf("%d",a[l]);
        l--;
        revercearr(a,l);
    }
}
int main()
{
    int size;
    printf("enter the array size:");
    scanf("%d",&size);
    int a[size];
    printf("enter the array element :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    revercearr(a,size-1);
    return 0;
}