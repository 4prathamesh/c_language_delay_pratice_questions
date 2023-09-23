// program to print an array
#include<stdio.h>
int i=0;
void arr( int a[])
{
    if(i<5)
    {
        printf("%d ",a[i]);
        i++;
        arr(a);
    }
}
int main()
{
    int a[5];
    printf("enter the array element :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    arr(a);
    return 0;
}