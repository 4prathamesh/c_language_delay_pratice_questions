#include<stdio.h>
int main()
{
    char i='A';
    printf("uppercase\n");
    while(i<='Z')
    {
        printf("%c\n",i);
        i++;
    }

    i='a';

    printf("loercase\n");
    while(i<='z')
    {
        //i++;
        printf("%c\n",i);
        i++;
    }
    return 0;

}