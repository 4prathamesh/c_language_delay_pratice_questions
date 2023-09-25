// 15. Write a C program to find sum of all odd numbers between 1 to n
#include<stdio.h>
int i=2,sum=0;
void oddSum(int no)
{
    if(i<no)
    {
        if(i%2!=0)
        {
            sum=sum+i;
            i++;
            oddSum(no);
        }
        else{
            i++;
            oddSum(no);
        }
    }
    else{
        printf("\n%d ",sum);
    }
}
int main()
{
    int number;
    printf("enter the nuber :\n");
    scanf("%d",&number);
    oddSum(number);
    return 0;
}