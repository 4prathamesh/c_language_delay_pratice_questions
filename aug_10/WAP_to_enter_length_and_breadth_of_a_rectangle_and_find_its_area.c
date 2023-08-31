// WAP_to_enter_length_and_breadth_of_a_rectangle_and_find_its_area
#include<stdio.h>
#include<conio.h>

int main()
{
    int l,b,area;
    printf("enter the length and breadth :");
    scanf("%d %d",&l,&b);
    area=l*b;
    printf("area of rectangle is: %d ",area);
    return 0;
}