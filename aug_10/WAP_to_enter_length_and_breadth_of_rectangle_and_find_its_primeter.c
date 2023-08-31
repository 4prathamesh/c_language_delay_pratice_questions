// WAP_to_enter_length_and_breadth_of_rectangle_and_find_its_primeter

#include<stdio.h>
#include<conio.h>

int main()
{
    int length,breadth,primeter=0;
    printf("enter the value of length and breadht\n");
    scanf("%d %d",&length,&breadth);
    primeter=2*(length+breadth);
    printf("primeter of rectiangle is %d: ",primeter);
    return 0;

}