#include<stdio.h>
#include<conio.h>
int main(){
    int ang1,ang2,ang3,total;
    printf("enter the angle:\n");
    scanf("%d%d%d",&ang1,&ang2,&ang3);

    total=ang1+ang2+ang3;
    total<=180 ? printf("the rangle is valid") : printf("the is not tringale");
    return 0;


}