//WAP to remove specifice line in file.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *f1,*f2;
    f1=fopen("comper1.txt","r");
    f2=fopen("p.txt","w");
    printf("file is open and ready to work\n");

    char ch,ch1[100];
    int lineno;
    printf("enter the any line for remove\n");
    scanf("%d",&lineno);

    int i=0;
    while(fgets(ch1,100,f1))
    {
        i++;
        if(lineno==i)
        {
            continue;
        }
        else{
            fputs(ch1,f2);
        }
    }
    fclose(f1);
    fclose(f2);
    return 0;
}