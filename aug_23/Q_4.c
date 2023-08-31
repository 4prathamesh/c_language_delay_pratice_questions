#include<stdio.h>
int main()
{
    int i=1,n,table;
    printf("enter the no");
    scanf("%d",&n);
    while(i<=10)
    {
        table=i*n;
        printf("%d\n",table);
        i++;
    }
    return 0;
}