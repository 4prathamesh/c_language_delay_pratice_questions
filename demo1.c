/*#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c;
    system("cls"); //clrsce();
    printf("enter the two number \n",a,b);
    scanf("%f %f",&a,&b);
    c = fmod(a, b);
    printf("reminder no is %f\n",c);
    // scanf(" %f ",&c);
    getch();
    // return 0;
}*/

/*#include<stdio.h>
#include<conio.h>

int main()
{
    int a=10,b;
    b=++a;
    printf("print the value of a %d and %db",a,b);
    getch();
    retu
*/

                     //    3 digit value replacement 

/*
#include<stdio.h>
#include<conio.h>
  int main()
{
    int n;
    printf("enter the values");
    scanf("%d",&n);
    n=(n%10)*100 + ((n/10)%10)*10 + (n/100);
    printf("values is:%d",n);
    getch();
    return 0;

}*/

//                    swapping of two value with-out using  

/*
#include<stdio.h>
#include<conio.h>

void main()
{
    //int a=10,b=20,n=0;
    int a,b,n=0;

    printf("print the value of a and b \n");
    scanf("%d %d",&a,&b);
    n=a*b;
    a=n/a;
    b=n/b;
    printf("after the swaping value : %d %d",a,b);

    getch();
}
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    float b;
    char c;
    printf("print the value of all data type ",a,b,c);
    scanf("%d %f %c",&a,&b,&c);
    getch();
    return 0;
}
