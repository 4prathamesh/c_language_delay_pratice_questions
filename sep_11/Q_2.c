// write a c progarm to display next greter element in given unsorted array. 
// element for which no greter element exist. consider next element as -1.

#include<stdio.h>
int main()
{
    int i,a[10],size;
    printf("enter the size of array \n");
    scanf("%d",&size);

    printf("enter the array element : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<size-1;i++)
    {
        if(a[i]<a[i+1])
        {
            printf(" %d ",a[i+1]);
        }
        else{
            printf(" -1 ");
        }
    }
}