// print all even number between 1 to 100
#include<stdio.h>
void even(int i)
{
    if(i%2==0 && i<100)
    {
        printf("\n%d",i);
        i++;
        even(i);
    }
    else{
        i++;
        even(i);
    }
}
int main()
{
    even(1);
    return 0;
}
