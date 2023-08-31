#include<stdio.h>
int main()
{
    char alp;
    printf("enter the");
    scanf("%c",&alp);

    if((alp>='a' && alp <='z') || (alp>='A' && alp<='Z'))
    {
        printf("this is the alphabet");
    }
    else 
    {
        printf("this is not alphabet");
    }
    return 0;
}