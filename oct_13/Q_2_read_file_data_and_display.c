// to read a file content and display on concol
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("prathamesh.txt","r");
    printf("file is created\n");

    char ch;
    do{
        ch=fgetc(fptr);
        printf("%c",ch);
    }while(ch!=-1);
    printf("data is read:\n");
    fclose(fptr);
    return 0;
}