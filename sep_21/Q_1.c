#include<stdio.h>
int main()
{
    int red;
    void areaofc(int);
    printf("enter the redius:\n");
    scanf("%d",&red);
    areaofc(red);
    return 0;
}
void areaofc(int red)
{
    float area;
    area=3.14*red*red;
    printf("area of circle :%f",area);
}