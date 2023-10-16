// WAP compare two file
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f1,*f2;
    f1=fopen("comper1.txt","r");
    f2=fopen("comper2.tex","r");
    printf("file is create\n");
    char ch1[90],ch2[90];
    fgets(ch1,90,f1);
    fgets(ch2,90,f2);

    if(strcmp(ch1,ch2)==0)
    {
        printf("same");
    }
    fclose(f1);
    fclose(f2);
    return 0;
}