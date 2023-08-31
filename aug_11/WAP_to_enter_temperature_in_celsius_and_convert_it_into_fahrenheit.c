// WAP_to_enter_temperature_in_celsius_and_convert_it_into_fahrenheit

#include<stdio.h>
#include<conio.h>
int main()
{
    float cel,fah;
    printf("enter the temperature in celsius :");
    scanf("%f",&cel);
    
    printf("\n\ncelsius to fahrenheit");
    fah=(cel*9/5)+32;
    printf("after convert the into fahrenheit : %f",fah);
// *****************************************************************
    printf("\n\nfahrenheit to celsius");
    float celsius,fahrenheit;

    printf("enter the value of fahreheit : ");
    scanf("%f",&fahrenheit);

    celsius=(fahrenheit-32)*5/9;

    printf("after the convert into celsius :%f",celsius);

    return 0;
}