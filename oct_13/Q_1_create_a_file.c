// write a program to create a file, write a contant, save 
// and coles the file
#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    // create a file
    fptr=fopen("prathamesh.txt","w");
    printf("file is create:\n");

    printf("enter the data in file:\n");
    do{
        scanf("%c",&ch);
        if(ch=='$')
        {
            break;
        }
        fputc(ch,fptr);
    }while(1);
    printf("data is update:");

    fclose(fptr);
    return 0;
}