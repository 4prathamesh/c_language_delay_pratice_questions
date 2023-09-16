// search an element in array using pointer
#include<stdio.h>
int main()
{
    int i,size,no,flag=0,count=0;
    printf("enter the array size:\n");
    scanf("%d",&size);

    printf("enter the value for search:\n");
    scanf("%d",&no);

    int a[size],*ptr;

    ptr=a;

    printf("enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }

    ptr=ptr-size;
    
    for(i=0;i<size;i++)
    {
        if( (*ptr) ==no)
        {
            printf("element is found :\n");
            break;
        }
        else
        {
            count++;
            if(count == (size-1) )
            {
                flag=1;
                break;
            }
        }
        ptr++;
    }
    if(flag)
    {
        printf("element is not found");
    }
    return 0;
}