// WAP_to_enter_length_in_centimeter_and_convert_it_into_meter_and_kilometer
#include<stdio.h>
#include<conio.h>

int main()
{
    float length_cm,meter,kilometer;
    printf("\nenter the length in centimeter :");
    scanf("%f",&length_cm);

    meter=length_cm/100;
    printf("\nlength convert into meter is :%f",meter);

    kilometer=meter/1000;
    printf("\n length convert meter into kilometer :%f",kilometer);

    return 0;
}