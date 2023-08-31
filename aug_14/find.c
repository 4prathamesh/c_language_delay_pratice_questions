// WAP to calculate the area of equaliteral triangle
#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
    int side;
    float area;
    printf("side of tringle is : ");
    scanf("%d",&side);

    area=(sqrt(3)/4)*(side*side);

    printf("area of equaliteral triangle is :%f",area);
    return 0;
}