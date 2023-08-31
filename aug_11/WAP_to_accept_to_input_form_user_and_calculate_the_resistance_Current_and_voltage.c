// WAP_to_accept_to_input_form_user_and_calculate_the_resistance._Current_and_voltage

#include<stdio.h>
#include<conio.h>

int main()
{
    // int curr,volt,resis;
    // printf("enter the value of current and voltage :");
    // scanf("%d%d",&curr,&volt);

    // resis=volt/curr;


    // printf("value of resistance is :%d",resis);
    float curr,volt,R,V,C;
    printf("enter the value of current and voltage :");
    scanf("%f%f",&curr,&volt);

    R=volt/curr;
    C=volt/R;
    V=curr*R;
    printf("value of resistance is :%f\n",R);
    printf("value of resistance is :%f\n",C);
    printf("value of resistance is :%f\n",V);
    return 0;
}