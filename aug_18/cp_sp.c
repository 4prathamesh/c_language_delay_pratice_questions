#include<stdio.h>
int main()
{
    int cp,sp,P,L;
    printf("enter the cp");
    scanf("%d",&cp);
    printf("enter the sp");
    scanf("%d",&sp);

    if(sp>cp)
    {
        printf("profit %d",sp-cp);
    }
    else{
        printf("loss %d",cp-sp);
    }
    return 0;

}