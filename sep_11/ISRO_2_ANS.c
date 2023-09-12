#include<stdio.h>
int main()
{
    int a[]={38,83,90,88,37,88,73,87,70,92,84,89,37,76,83,78,91,84,82,37,49,54,81,37,70,94,89,78,73,70,94,89,78,73,70,37,82,70,37,78};
    int i;

    int len=sizeof(a)/sizeof(a[0]);

    printf("Decrypted message :\n");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",a[i]-5);
    }
    return 0;
}