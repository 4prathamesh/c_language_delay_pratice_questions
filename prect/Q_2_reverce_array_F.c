// 2. Program to print an array in reverse order
#include<stdio.h>
int i=4;
void reversearr(int *p)
{
    if(i>-1)
    {
        printf("%d",p[i]);
        i--;
        reversearr(p);
    }
}

int main()
{
    int a[5];
    printf("enter the array element:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    reversearr(a);
    return 0;
}