// WAP to print all natural number from 1 to n
#include<stdio.h>
int i=1;
void natural(int n)
{
    if(i<=n)
    {
        printf("%d",i);
        i++;
        natural(n);
    }
}
int main()
{
    int no;
    printf("enter the value:\n");
    scanf("%d",&no);

    natural(no);
return 0;
}