#include<stdio.h>

int main()

{
    float b_s;
    float G_salary,ba,hra;
    printf("enter the basic salary of employee : ");
    scanf("%f",&b_s);
    
    //b_s<=10000 ? printf(" HRA= %f and  ba =%f \n",hra=b_s*0.2,ba=b_s*0.8 ):
    // b_s>20000 || b_s<=20000 ? printf("HRA= %f and ba =%f \n",hra=b_s*0.2,ba=b_s*0.8) : 
    // printf("HRA= %f and ba =%f \n ",hra=b_s*0.2,ba=b_s*0.8);
    b_s>20000 ? printf("HRA= %f and ba =%f \n ",hra=0.30*b_s,ba=0.95*b_s):
    b_s<=20000 && b_s>10000 ? printf("HRA= %f and ba =%f \n ",hra=0.25*b_s,ba=0.90*b_s) : printf("HRA= %f and ba =%f \n ",hra=b_s*0.2,ba=b_s*0.8);
    
    G_salary=b_s+ba+hra;
    printf("gross salary%f",G_salary);
    return 0;


}