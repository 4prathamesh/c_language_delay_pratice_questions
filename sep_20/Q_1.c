// wap to sort array in ascending and descending order using calioc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,*ptr,size;
    printf("enter the array size:\n");
    scanf("%d",&size);
    ptr=(int*)calloc(sizeof(int),size);
    printf("\nptr=%u\n",ptr);
    printf("enter the array element :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    
//        ascending

    ptr=ptr-size;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if( *(ptr+i) > *(ptr+j) )
            {
                int temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }

    printf("\nascending array is :\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }

    //                    descending
    ptr=ptr-size;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if( *(ptr+i) < *(ptr+j) )
            {
                int temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    
    printf("\ndescending array is :\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }

}