// 34.Write a C program to print all Prime numbers between 1 to n.
#include<stdio.h>
int i=2,j=2;
void primeall(int no)
{
    if(i<no)
    {
        if(j<i && i%j!=0)
        {
            j++;
            primeall(no);
        }
        else if (j==i)
        {
            printf("%d ",j);
            j=2;
        }
        i++;
        primeall(no);
    }
}
int main()
{
    int num;
    printf("enter the number is:\n");
    scanf("%d",&num);
    primeall(num);
    return 0;

}