// 6.Program to find the second largest element of an array
#include<stdio.h>
int i=0,max=0,smax;
void Slarge(int a[])
{  
    if(i<5){
        if(a[i]>max){  // max=7 ,smax=0
            smax=max;
            max=a[i];
            i++;
            Slarge(a);
        }else if(a[i]>smax && a[i]<max){
               smax=a[i];
               i++;
               Slarge(a);
        }
        else{
            i++;
            Slarge(a);
        }

    } else{
        printf("\nsmax=%d",smax);
    } 

}
int main()
{
    int a[5];     // 7  4  3  2  6
    printf("enter the array element :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    Slarge(a);
    return 0;
}