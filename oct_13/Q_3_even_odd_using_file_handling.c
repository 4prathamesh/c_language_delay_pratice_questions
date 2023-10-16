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
    while( (ch=fgetc(fptr) )!=EOF )
    {
        if(ch>='0'&&ch<='9'){
        if(ch%2==0)
        {
            fputc(ch,fptr1);
        }
        else{
            fputc(ch,fptr2);
        }
        
        int a=ch-48,i=1,count=0;
        //printf("%d ",a);
        while(i<=a)
        {
              //printf("%d  %d\n",a,i);
            if(a%i==0)
            {
                count++;
            }
            i++;
        }
        if(count==2)
        {
              //printf("----> %d\n",a);
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