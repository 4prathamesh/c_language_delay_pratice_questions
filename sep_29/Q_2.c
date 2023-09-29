// WAP to count vowel and consonent in string
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,vowel=0,consonent=0;
    printf("enter the string :");
    gets(a);

    int len=strlen(a);

    for(i=0;i<len;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            vowel++;
        }
        else{
            consonent++;
        }
    }
    printf("vowel=%d \nconsonent=%d\n",vowel,consonent);
    return 0;

}