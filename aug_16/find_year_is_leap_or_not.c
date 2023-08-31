#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    printf("enter the year : ");
    scanf("%d",&year);

    year % 4 == 0 ? printf("year is leap yera :") : printf("the yera is not leap year : ");

    return 0;


}