//WAP to count character, word and line.
#include<stdio.h>
int main()
{
    FILE *f,*f2;
    f=fopen("comper1.txt","r");
    printf("file is open for read\n");
    char ch;
    int chara=0,lin=1,word=1;
    while((ch=fgetc(f))!=EOF)
    {
        chara++;
        if(ch== '\n')
        {
            lin++;
        }
        if(ch ==' ' || ch == '\n')
        {
            word++;
        }
    }
    printf("character in file =%d",chara);
    printf("\nline in file =%d",lin);
    printf("\nword in file =%d",word);
    fclose(f);
    f=fopen("comper1.txt","r");

    char ch1[100],chc[20];
    int wor=0;
    while((fscanf(f,"%s",ch1))!=EOF)  // duble space
    {
        wor++;
    }
    printf("\nword in file =%d",wor);
    fclose(f);
    return 0;
}