#include<stdio.h>

int main()
{
    int phy,che,bio,math,comp;
    float percentage,total;
    printf("enter the mark of physics: ");
    scanf("%d",&phy);
    printf("enter the mark of chemistry: ");
    scanf("%d",&che);
    printf("enter the mark of biology: ");
    scanf("%d",&bio);
    printf("enter the mark of mathematics: ");
    scanf("%d",&math);
    printf("enter the mark of computer: ");
    scanf("%d",&comp);

    total=phy+che+bio+math+comp;

    percentage=(total/500)*100;

    percentage>=90 ? printf("Grade A") : 
    percentage>=80 ? printf("Grade B") : 
    percentage>=70 ? printf("Grade C") : 
    percentage>=60 ? printf("Grade D") : 
    percentage>=40 ? printf("Grade E") : printf("Grade F");

    return 0;
}