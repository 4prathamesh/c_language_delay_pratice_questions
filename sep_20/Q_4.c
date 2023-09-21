// find the occurrence in each element in array using malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,j,size,count;
    printf("enter the array size :\n");
    scanf("%d",&size);

    ptr=(int*)malloc(size*sizeof(int));

    printf("enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }

    // sort the array element 
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }

    count=1;
    printf("\ncheck the occurrence of element :\n");
    for(i=0;i<size;i++)
    {
        if(ptr[i]==ptr[i+1])
            {
                count++;
            }
        else
        {
            printf("%d--occer-->%d\n",ptr[i],count);
            count=1;
        }
    }
    return 0;
}