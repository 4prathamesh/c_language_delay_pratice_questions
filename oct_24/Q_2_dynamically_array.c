
// Program 4. Write a program to allocate memory for array dynamically and take 
// input for array and display  2nd max element from array. 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,size,i,j;
    printf("enter the array size:\n");
    scanf("%d",&size);

    ptr=(int*)malloc(sizeof(int)*size);
    printf("enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }

    int max=ptr[0];
    int smax=ptr[1];
    for(i=0;i<size;i++)
    {

            if(ptr[i]>max)
            {
                smax=max;
                max=ptr[i];
            }
            else if(ptr[i]<max && ptr[i]>smax)
            {
                smax=ptr[i];
            }
    }
    printf("secound max: %d\n",smax);
    return 0;
}