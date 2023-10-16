// WAP copy contant one file to another file
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f1,*f2;
    f1=fopen("comper1.txt","r");     // this file mack for read
    f2=fopen("copy.txt","w");        // this file mack for right
    printf("create file\n");
    char ch;
    while((ch=fgetc(f1))!=EOF)       // tack a character from 
    {                                // f1 pointer 
        fputc(ch,f2);                //put the character in f2 file
    }
    
    fclose(f1);
    fclose(f2);
    printf("\nenter data in file");
    return 0;
}