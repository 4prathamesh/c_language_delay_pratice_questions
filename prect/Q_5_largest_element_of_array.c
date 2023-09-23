// 5.Program to find the largest element of an array
#include<stdio.h>
int i=0;
void largest(int a[],int lar)
{
    if(lar<a[i] && i<5)
    {
        lar=a[i];
        i++;
        largest(a,lar);
    }
    else{
        printf("%d",lar);
    }
}
int main()
{
    int a[]={1,2,5,4,5};
    int max=0;
    largest(a,max);
    return 0;
}