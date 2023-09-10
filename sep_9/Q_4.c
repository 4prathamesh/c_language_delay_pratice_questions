//write a c program find secound highest element in array

#include<stdio.h>
int main()
{
    int i,size,a[10],temp;

    printf("enter the array size :");
    scanf("%d",&size);

    printf("enter the array element :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("ascending  order : \n");
    for(i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }

    temp=a[size-2];
    printf("secound highest element in array: %d \n",temp);

    return 0;
}