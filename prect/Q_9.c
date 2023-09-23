#include<stdio.h>
int i=1;
void neturalRno(int n)
{
    if(n>0)
    {
        printf("%d",n);
        n--;
        neturalRno(n);
    }
}
int main()
{
    int no;
    printf("enter the number is : \n");
    scanf("%d",&no);
    neturalRno(no);
    return 0;
}