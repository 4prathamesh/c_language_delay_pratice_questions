/*
#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    printf("enter the number is :\n");
    scanf("%d",&number);


    number>=1 ? printf("the number is +ve") :
    number < 0 ? printf("the number is -ve") : printf("the number is zero");

    return 0;
}*/

// WAP to tack the input from user fore digit number and swap last and first digit
/*
#include<stdio.h>
int main(){
    int number,F,L ;
    //number > 999 && number>=1000 ? printf("enter the number :%d",number) : printf("envaled numbr");
    printf("enter the number is ");
    scanf("%d",&number);
    //1234
    L=number%10; //4
    number=number/10; //123
    F=number/100;  //1
    number=number%100;
    number=L*1000+number*10+F;

    printf("swap the number is %d",number);
    return 0;
}*/

// cab servise charge 
#include<stdio.h>
int main()
{
    unsigned int res;
    res=(64>>(2+1-2))&(~(1<<2));
    printf("%d\n",res);
    return 0;
}
