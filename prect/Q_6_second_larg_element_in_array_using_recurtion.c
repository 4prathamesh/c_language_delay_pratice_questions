// 6.Program to find the second largest element of an array
// 7.Program to find the smallest element of an array
#include<stdio.h>
int i=0;
void Slarge(int a[])
{
    if(a[i]>a[i+1] && i<4)
    {
        int temp=a[i];  
        a[i]=a[i+1];
        a[i+1]=temp;
        i++;
        Slarge(a);
    }
    else
    {
        i++;
        Slarge(a);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }    

}
int main()
{
    int a[5];     // 1  4  3  2  6
    printf("enter the array element :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    Slarge(a);
    return 0;
}