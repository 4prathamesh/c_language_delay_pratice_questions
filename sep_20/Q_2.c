// count all distinct pairs for a specific diffrence using calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,*p,diff,count=0,size;

    printf("enter the array size:\n");
    scanf("%d",&size);

    printf("enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=p-size; 

    printf("enter the diffrence:\n");
    scanf("%d",&diff);

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            int d=*(p+i)-( *(p+j) );
            if(diff==d)
            {
                count++;
                printf("%d %d\n",p[i],p[j]);
            }
        }
    }

    return 0;
    
}