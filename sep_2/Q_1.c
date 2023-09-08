// WAP to take input from array of size 5 and display it 

#include<stdio.h>
int main()
{
    int a[5],i;

    printf("enter the array element ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array size %d\n",a[i]);
    printf("array element \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;

}