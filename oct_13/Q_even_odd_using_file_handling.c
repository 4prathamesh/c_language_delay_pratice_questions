// wreit a program to read a number from file and right 
// even and odd 
#include<stdio.h>
int main()
{
    FILE *fptr,*fptr1,*fptr2;
    fptr=fopen("prathamesh.txt","r");
    fptr1=fopen("even.c","w");
    fptr2=fopen("odd.c","w");
    printf("file is created\n");

    char ch;
    do{
        ch=fgetc(fptr);
        if(ch%2==0)
        {
            fputc(ch,fptr1);
        }
        else if(ch==-1)
        {
            break;
            
        }
        else{
            fputc(ch,fptr2);
        }
    }while(ch!=EOF);
    fclose(fptr);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}