#include<stdio.h>
#include<conio.h>

int main()
{
    int ang1,ang2,ang3;

    printf("enter the angle of trangel is :\n");
    scanf("%d%d%d",&ang1,&ang2,&ang3);

    ang1==ang2 && ang2==ang3 ? printf("this is equilateral\n") : 
    ang1==ang2 || ang2==ang3 ? printf("this is the isosceles trangle\n") : printf("this is the scalene trangle");

    //ang1==ang2 ? printf("this is the isosceles trangle\n") : printf("this not isosceles");
    //ang3=1 ? printf("this is equilateral\n") : printf("this is the scalene trangle");

    return 0;
}