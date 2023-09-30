// WAP to count alphabet ,digit and special symbol in string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    printf("enter the string :\n");
    gets(str1);
    int i=0,alp=0,di=0,spe=0;
    while(str1[i]!='\0')
    {
        if(str1[i]>='a' && str1[i]<='z' || str1[i]>='A' && str1[i]<='z')
        {
            alp++;
        }
        else if(str1[i]>='0' && str1[i]<='9')
        {
            di++;
        }
        else{
            spe++;
        }
        i++;
    }
    printf("alphabet=%d\ndigit=%d\nspecial=%d",alp,di,spe);
    return 0;
}