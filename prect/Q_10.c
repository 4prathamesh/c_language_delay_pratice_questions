#include<stdio.h>
void alphabet(char alp)
{
    if(alp<= 'z')
    {
        printf("%c\n",alp);
        alp++;
        alp(alp);
    }
}

int main()
{
    char alp='a';
    alplphabet(alp);
    return 0;
}