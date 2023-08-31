#include<stdio.h>
#include<math.h>
int main()
{
    int no,m=1,F=0,mid=0,l,result=1,temp,count=0;
    int p,p1=0,p2=0;

    printf("enter the number ");
    scanf("%d",&no);

    temp=no;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    int count1=count;
    printf("%d\n",count);
    
    l=no%100;
    printf("%d\n",l);

    no=no/100;

    p=pow(10,(count-4));
    mid=no%p;
    printf("%d\n",mid);

   
    F=no/p;
    printf("%d\n",F);

    p1=pow(10, (count-2) );
    printf("p1 %d\n",p1);
    p2=pow(10, (count1-3) );
    printf("p2 %d\n",p2);
    
    result=(l*p1) + (mid*p2) + F ;

    printf("%d",result);

    return 0;
}