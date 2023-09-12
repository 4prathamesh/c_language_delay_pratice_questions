#include<stdio.h>
int main()
{
    int a[]={88,87,73,70,36,87,77,36,83,86,87,77};
    int i;

    int len=sizeof(a)/sizeof(a[0]);
    int mid=len/2;
    int end=len-1;
    printf("%d\n",mid);
    printf("encode msg come form chandran-3 \nThay store in array\n");
    for(i=0;i<len;i++)
    {
        printf("a[%d]--->%d\n",i,a[i]);
    }

    printf("\ndecode this msg :\n");
    for(i=end;i>=0;i--)
    {
        printf("%c",a[i]-4);
    }

    return 0;
}