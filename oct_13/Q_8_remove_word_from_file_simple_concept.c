#include<stdio.h>
#include<string.h>

int main()
{
    FILE *f,*f1;
    f=fopen("comper1.txt","r");
    f1=fopen("p.txt","w");
    printf("file is open for read\n");

    char data[20],ch[200];
    printf("enter data for remove from file:\n");
    scanf("%s",&data);
    //int i=0;

    while((fscanf(f,"%s",ch))!=-1)
    {
        if(strcmp(ch,data)==0)
        {
            continue;
        }
        fputs(ch,f1);
        fputc(' ',f1);
    }
    
    fclose(f);
    fclose(f1);
    return 0;

}