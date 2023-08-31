/*
#include<stdio.h>
int main()
{
    int fab1=0,fab2=1,fab=0,no,i;
    printf("enter the number is ");
    scanf("%d",&no);
    printf("%d\t",fab1);
    printf("%d\t",fab2);

    for(i=1;i<no;i++)
    {
        fab=fab1+fab2;
        fab1=fab2;
        fab2=fab;
        printf("%d\t",fab);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("enter the no is ");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if((j<=i && i<=c) || (j<=(r+1)-i && i>=c+1) )
            {
            printf("*");
            }
            //else if(j<=10-i)
            else {
                printf(" ");
             }
            
        }
        printf("\n");
        
    }
    return 0;
}
