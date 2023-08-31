// chack the profit or loss

#include<stdio.h>
#include<conio.h>

int main()
{
    int cp,sp,profit,loss;

    printf("enter the value of cost prise and seling prise");
    scanf("%d%d",&cp,&sp);

    profit = sp-cp;
    loss = cp - sp;

    profit >= 0 ? printf("profit is %d ",profit) : printf("loss is %d ",loss);

    return 0;
    
}