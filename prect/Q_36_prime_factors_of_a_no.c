// 36. Write a C program to find all prime factors of a number
#include<stdio.h>
int i=2,j=2;
void primeF(int no)
{
    if(i<no && no%i==0)
    {
        if(j<i && i%j!=0)
        {
            j++;
            primeF(no);
        }
        else if(j==i) {
            printf("%d ",i);
            j=2;
            
        }
        i++;
        primeF(no);
    }
    
}
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    primeF(num);
    return 0;
}