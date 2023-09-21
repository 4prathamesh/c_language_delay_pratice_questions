#include<stdio.h>
int main()
{
    int length,width;
    void areaofrectangle(int,int);
    printf("enter the length and width of rectangle:\n");
    scanf("%d%d",&length,&width);
    areaofrectangle(length,width);
    return 0;
}
void areaofrectangle(int l, int w)
{
    int areaofR=l*w;
    printf("area of rectangle is=%d",areaofR);
}