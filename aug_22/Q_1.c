#include<stdio.h>
int main()
{
    int A,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    printf("enter the amount ");
    scanf("%d",&A);

    if(A>0)
    {
        if(A>=500)
        {
            n500=A/500;
            A=A-(n500*500);
        }
        if(A>=200)
        {
            n200=A/200;
            A=A-(n200*200);
        }
        if(A>=100)
        {
            n100=A/100;
            A=A-(n100*100);
        }
        if(A>=50)
        {
            n50=A/50;
            A=A-(n50*50);
        }
        if(A>=20)
        {
            n20=A/20;
            A=A-(n20*20);
        }
        if(A>=10)
        {
            n10=A/10;
            A=A-(n10*10);
        }
        if(A>=5)
        {
            n5=A/5;
            A=A-(n5*5);
        }
        if(A>=2)
        {
            n2=A/2;
            A=A-(n2*2);
        }
        if(A>=1)
        {
            n1=A/1;
            A=A-(n1*1);
        }

    }
    printf("min 500 of note is %d\n",n500);
    printf("min 200 of note is %d\n",n200);
    printf("min 100 of note is %d\n",n100);
    printf("min 50 of note is %d\n",n50);
    printf("min 20 of note is %d\n",n20);
    printf("min 10 of note is %d\n",n10);
    printf("min 5 of note is %d\n",n5);
    printf("min 2 of note is %d\n",n2);
    printf("min 1 of note is %d\n",n1);
    return 0;

}