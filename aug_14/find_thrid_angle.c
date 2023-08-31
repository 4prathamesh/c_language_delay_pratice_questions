//WAP to enter two angles of a triangle and find the third angle
/*
#include<stdio.h>
#include<conio.h>

int main()
{
    int F_ang,S_ang,T_ang;
    printf("enter the value first\n");
    scanf("%d",&F_ang);
    printf("enter the secound angle \n");
    scanf("%d",&S_ang);

    T_ang=180-(F_ang+S_ang);

    printf("the value of third angle is : %d",T_ang);
    return 0;

}*/

// find the area of triangle 

#include<stdio.h>
#include<conio.h>

int main()
{
    int base,height;
    float area;
    printf("enter the base of trangle is: ");
    scanf("%d",&base);

    printf("enter the value of height is: ");
    scanf("%d",&height);

    area=0.5*base*height;

    printf("area of trangel is :%f ",area);
    return 0;
}
