// print all odd number between 1 to 100
#include<stdio.h>
void odd(int i)
{
    if(i%2!=0 && i<100)
    {
        printf("%d\n",i);
        i++;
        odd(i);
    }
    else{
        i++;
        odd(i);
    }
}
int main()
{
    odd(1);
    return 0;
}