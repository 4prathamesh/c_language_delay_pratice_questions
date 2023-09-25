// print all prime number 1 to n using recursion.
#include<stdio.h>
int i=2,j=2;
void prime(int no)
{
    if(i<no)
    {
        if(j<i)
        {
            if(i%j==0)
            {
                i++;
                prime(no);
            }
            else
            {
                j++;
                prime(no);
            }

        }
        else
        {
            printf("%d ",i);
            i++;
            j=2;
            prime(no);
        }
    }
    
}
int main()
{
    int number;
    printf("enter the number :");
    scanf("%d",&number);
    prime(number);
    return 0;
}