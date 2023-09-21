#include<stdio.h>
int main()
{
    int base,height;
    void areaoftrangle(int base , int height);
    printf("enter the base and height:\n");
    scanf("%d%d",&base,&height);
    areaoftrangle(base,height);
    return 0;
}
void areaoftrangle(int b, int h)
{
    printf("area of trangle is: %f",0.5*b*h);
}