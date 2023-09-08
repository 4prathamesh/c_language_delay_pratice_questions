#include<stdio.h>
int main()
{
    int i,no,a[5],index,size=5,ele;

    printf("enter the array element:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the index and element \n");
    scanf("%d%d",&index,&ele);

    for(i=4;i<=index;i--)
    {
        a[i+1]=a[i];

    }
    size++;

    a[index]=ele;

    printf("after adding element : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}