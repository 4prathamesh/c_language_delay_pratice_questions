// 7.Program to find the smallest element of an array
#include<stdio.h>
int i=0;
void smallest(int a[],int s)
{
    if(i<5 && s>a[i])
    {
        s=a[i];
        i++;
        smallest(a,s);
    }
    else if(i<5) {
        i++;
        smallest(a,s);
    }
    else{
        printf("smallest= %d",s);
    }
}
int main()
{
    int a[5];
    printf("enter the array element: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=a[0];
    smallest(a,s);
}