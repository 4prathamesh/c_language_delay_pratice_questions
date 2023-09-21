// to add element in specific index of array using malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,j,index,ele,size;
    printf("enter the array size:\n");
    scanf("%d",&size);
    printf("enter the index size and element:\n");
    scanf("%d%d",&index,&ele);

    ptr=(int*)malloc(size*sizeof(int));

    printf("enter the array element :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(i=size-1;i>=index;i--)
    {
        ptr[i+1]=ptr[i];
    }

    for(i=0;i<size+1;i++)
    {
        ptr[index]=ele;
        printf("%d ",ptr[i]);
    }

    return 0;
}