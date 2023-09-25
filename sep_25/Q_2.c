// find max and min number in array using recurtion
#include<stdio.h>
int i=0,j=1,mx=0;
void max(int a[])
{
    if(i<5)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            i++;
            max(a);
        }
        else{
            i++;
            max(a);
        }
    }
    else{
        printf("max= %d",mx);
    }
}
void min(int b[], int mn)
{
    if(j<5)
    {
        if(b[j]<mn)
        {
            mn=b[j];
            j++;
            min(b,mn);
        }
        else{
            j++;
            min(b,mn);
        }
    }
    else{
        printf("min=%d",mn);
    }
}

int main()
{
    int a[5];
    printf("enter the array element :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int mn=a[0];
    max(a);
    min(a,mn);
    return 0;
}
