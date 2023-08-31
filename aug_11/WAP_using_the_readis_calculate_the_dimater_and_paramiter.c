// WAP_using_the_readis_calculate_the_dimater_and_paramiter 
#include<stdio.h>
#include<conio.h>

int main()
{
    int r;
    printf("enter the readias of circal \n");
    scanf("%d",&r);

    int dimater;
    dimater=r+r;
    printf("print the dimater of circle %d\n",dimater);

    float parimeter;
    parimeter=2*3.14*r;
    printf("peint the parimeter of :%f\n",parimeter);

    float area;
    area=3.14*r*r;
    printf("area of circle is : %f",area);

    return 0;

}