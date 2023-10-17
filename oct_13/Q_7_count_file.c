//WAP to count character, word and line.
#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("comper1.txt","r");
    printf("file is open for read\n");
    char ch,ch1[100];
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
    return 0;
}