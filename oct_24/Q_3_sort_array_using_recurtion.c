#include<stdio.h>
int i=0,j=1,k=0;
void sort(int a[])
{
    if(i>4 && k<5)
    {
        printf("%d ",a[k]);
        k++;
        sort(a);
    }
    else if(j>5)
    {
        i++;
        j=i+1;
        sort(a);
    }
    else if(a[i]>a[j])
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j++;
        sort(a);
    }
    else{
        j++;
        sort(a);
    }
}
int main()
{
    int a[5],i;
    printf("enter the array element:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a);
    return 0;
}