// 13.Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
int i=1,sum=0;
void neturalsum(int no)
{
    if(i<no)
    {
        sum=sum+i;
        i++;
        neturalsum(no);
    }
    else 
    {
        printf("natural number sum is :%d\n",sum);
    }
}
int main()
{
    int number;
    printf("enter the number :\n");
    scanf("%d",&number);
    neturalsum(number);
    return 0;
}