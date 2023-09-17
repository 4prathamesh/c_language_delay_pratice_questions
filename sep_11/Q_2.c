// write a c progarm to display next greter element in given unsorted array. 
// element for which no greter element exist. consider next element as -1.

#include<stdio.h>
int main()
{
    int i,a[10],size,no,max,j;
    printf("enter the size of array \n");
    scanf("%d",&size);

    printf("enter the array element : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++)
    {
        max=a[i];
        for(j=i+1;j<size;j++)  //  5 3 10 9 6 13
        {
            if(a[j]>max)
            {
                max=a[j];
                break;
            }
            
        }
        if(max==a[i])
        {
            max=-1;
        }
        printf("%d ",max);
    }
    return 0;
}