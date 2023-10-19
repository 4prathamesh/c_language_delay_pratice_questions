#include<stdio.h>
int main()
{
    int i,j,size,point,temp;

    printf("enter the array size: \n");
    scanf("%d",&size);

    int a[size];

    printf("enter the erray element :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[i])    // sort the array element
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    for(i=0;i<size;i++)     // print the array 
    {
        printf("%d",a[i]);
    }

    int count=1;
    for(i=0;i<size;i++)
    {
        if(a[i]==a[i+1])   // comper array
        {
            count++;
        }
        else{
            printf("\n%d is occurs %d time",a[i],count);
            count=1;
        }
    }

    return 0;
}