// write a C program to perform i/o of all basic data type 

#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    float b;
    char c;
    printf("print the value of all data type \n");
    scanf("%d %f %c",&a,&b,&c);
    printf("after enter the value is %d %f %c",a,b,c);
    getch();
    return 0;
}


/*
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    fork();
    printf("prathamesh");
    return 0;
}*/