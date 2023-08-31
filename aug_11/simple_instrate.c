//WAP to calculate the simple instrate 
// P----principle
// R----rate of instrate
// T----time spac
/*
#include<stdio.h>
#include<conio.h>

int main()
{
    int P,T;
    float R,SI;
    printf("calculate the value of simple intrast ");
    printf("\nenter the value of principle, rate of instrate and time space :");
    scanf("%d%f%d",&P,&R,&T);

    SI=(P*R*T)/100;

    printf("\nthe value of simple instrate:%f",SI);

    return 0;
    
}*/

// **********************compound instrate****************

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float P,N,R;
    float A,CI;
    printf("calculate the value of compound instrate:");

    printf("\nenter the value of principle :\n");
    scanf("%f",&P);
    printf("\nenter the value of number of year :\n");
    scanf("%f",&N);
    printf("\nenter the value of rate :\n");
    scanf("%f",&R);

    A=P*(pow((1+R/100),N));
    //A=P*a;

    printf("\nfirst we calculate the value of amount :%f\n",A);

    CI=A-P;

    printf("\nthe value of compount instrate:%f",CI);

    return 0;
}
/*
#include<stdio.h>
#include<conio.h>

int main()
{
    int D,W,Y;
    printf("enter the D");
    scanf("%d",&D);

    W=D/7;
    Y=W/52;

    printf("the value of W%d and Y is%d",W,Y);
    return 0;
}*/