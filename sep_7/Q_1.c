#include<stdio.h>
int main()
{
    int i,skey,a[5],flag=0;

    printf("enter the element of array :\n");
    for(i=0;i<5;i++)
    {
         scanf("%d",&a[i]);
    }

    printf("element avalable in array : \n");
    
    for(i=0;i<5;i++)
    {
        printf("a[%d]---->%d\n",i,a[i]);
    }

    printf("enter the serch key\n");
    scanf("%d",&skey);

    for(i=0;i<5;i++)
    {
        if(a[i]==skey)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("element found \n");
    }
    else{
        printf("element is not found");
    }
        return 0;
}