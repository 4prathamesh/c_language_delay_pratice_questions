#include<stdio.h>
int main()
{
    int number,even=0,i=0;
    printf("enter the number is : ");
    scanf("%d",&number);

    while(i<=number)
    {
        if(i%2==0){
        even=even+i;
        }
        i++;
    }
    printf("%d",even);
    return 0;
}