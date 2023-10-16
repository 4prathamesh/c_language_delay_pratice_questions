// write a program to append contend to a file.
#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("prathamesh.txt","a+");
    printf("File is created\n");
    char ch1[20];
    int z=1;
    while(z==1)
    { _flushall();
        printf("\n Enter character");
        scanf("%s",&ch1);
        fputs(ch1,f);
        printf("\n Do you want to ad(1/0)");
        _flushall();
        scanf("%d",&z);
    }
    printf("data is go in file***");
    fclose(f);
    return 0;
}