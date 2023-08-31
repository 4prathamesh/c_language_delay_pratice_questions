// calculate the avrage of sub
#include<stdio.h>
#include<conio.h>

int main()
{
    float sub1,sub2,sub3,sub4,sub5,total;
    float average,percentage;
    printf("enter the mark of five sub:\n");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    printf("total of sub is : %f\n",total);

    average=total/5;
    printf("average of sub is : %f\n",average);

    percentage=(total/500)*100;
    printf("percentage of total sub is : %f\n",percentage);

    return 0;

}