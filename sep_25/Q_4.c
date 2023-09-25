// find all even factorial using recurtion
#include<stdio.h>
int i=1;
void EvenFactorial(int no)
{
    if(i<=no && no%i==0)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            i++;
            EvenFactorial(no);
        }
        else
        {
            i++;
            EvenFactorial(no);
        }
    }
}
int main()
{
    int number;
    printf("enter the value :");
    scanf("%d",&number);
    EvenFactorial(number);
    return 0;
}