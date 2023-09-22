// writ a program to check number creat function
/*
case 1) palindrome number 
case 2) prime number 
case 3) armstrong number
case 4)perfect number
using switch case & do-while
*/

#include<stdio.h>
#include<stdlib.h>
#include "palindrome.h"
#include "primeon.h"
#include "armstrongno.h"
#include "perfect.h"


int main()
{
    int choice,number;
    printf("1) palindrome number\n");
    printf("2) prime number\n");
    printf("3) armstrong number\n");
    printf("4) perfect number\n");

    printf("enter the number is :\n");
    scanf("%d",&number);

    do {
    printf("\nenter the choise:\n");
    scanf("%d",&choice); 
    

    switch(choice)
    {
        case 1:
        palindrome(number);
        break;

        case 2:
        prime(number);
        break;

        case 3:
        armstrong(number);
        break;

        case 4:
        perfect(number);
        break;
        }
    }
    while(choice<=4);
}