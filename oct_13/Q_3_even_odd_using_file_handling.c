// wreit a program to read a number from file and right 
// even, odd and prime number 
#include<stdio.h>
int main()
{
    FILE *fptr,*fptr1,*fptr2,*f;
    fptr=fopen("prathamesh.txt","r");
    fptr1=fopen("even.c","w");
    fptr2=fopen("odd.c","w");
    f=fopen("prime.txt","w");
    printf("file is created\n");

    int ch;
    while( (ch=fgetc(fptr) )!=EOF ) // check the file is emt or not 
    {                               // file is not emt than loop is execute
        if(ch>='0'&&ch<='9'){
        if(ch%2==0)             // even logic
        {
            fputc(ch,fptr1);      // ch madhala data fptr1 madhly file madhe jael
        }
        else{                      // odd 
            fputc(ch,fptr2);
        }
        
        int a=ch-48,i=1,count=0;
        while(i<=a)           //  prime loop 
        {
            if(a%i==0)
            {
                count++;
            }
            i++;
        }
        if(count==2)
        {
            //fputc(a,f);
            fprintf(f,"%d",a);
        }
        }
    }
    fclose(fptr);
    fclose(fptr1);
    fclose(fptr2);
    fclose(f);
    return 0;
}