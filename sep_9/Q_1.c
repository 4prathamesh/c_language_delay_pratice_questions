#include<stdio.h>
int main()
{
    int i,j,k,a[5],temp;

    printf("enter the array element : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;  
            }
        }
      
    }

    printf("ascending  order : \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;  
            }
        }
    }

    printf("decending  order : \n");
    for(i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}