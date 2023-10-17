// WAP remove word from text file.
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f,*f2;
    f=fopen("comper1.txt","r");
    f2=fopen("p.txt","w");
    char ch,word[20],ch1[10],ch2[100];
    printf("file is open for read\n");

    printf("enter the word you want to remove\n");
    gets(word);
    int i=0;
    while((ch=fgetc(f)))   // 1k 1k char ha ch madhe janar
    {
        if(ch!=' ' && ch!='\n' && ch!=EOF)   // ch jar not equl to ' ' ani \n ani -1  
        {                                    // nas la tr ch at jael
            ch1[i]=ch;
            i++;
        }
        else
        {
            ch1[i]='\0';
            if(strcmp(ch1,word)==0)
            {
                printf("word is found**\n");
                
            }
            else
            {
                 //printf("\n inserted word is %s",ch1);
                fputs(ch1,f2);
            
            }
            i=0;
        }
        if(ch==EOF)break;
    }
    fclose(f);
    fclose(f2);
    remove("comper1.txt");
    rename("p.txt","comper1.txt");
    return 0;

}