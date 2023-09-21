// find the  armstrong number in pointer of array using malloc
// this program is right but can't work in vs code compilar
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int *p,i,j,size,mul=1,rev,sum=0,count=0;
    printf("enter the array size: \n");
    scanf("%d",&size);

    p=(int*)malloc(sizeof(int)*size);

    printf("enter the array element using pointer:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&p[i]);
    }

    for(i=0;i<size;i++)
    {
        int a=p[i];
        count=0;
        while(a>0)
        {
            a=a/10;
            count++;
        }
        a=p[i];
        sum=0;
        while(a>0)
        {
            rev=a%10;
            int p=pow(rev,count);
            sum=sum+p;
            a=a/10;
        }
       // printf("sum=%d\n",sum);
        //printf("p[i]=%d\n",p[i]);
        if(sum==p[i])
        {
            printf("is armstrong =%d\n",p[i]);
        }
    }
    
    return 0;
}