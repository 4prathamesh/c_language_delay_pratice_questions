// write c program to array is palindrome or not .

#include<stdio.h>
int main()
{
    int i,j,a[10],size;

    printf("enter the size of array :\n");
    scanf("%d",&size);

    printf("enter the array element : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    int mid=size/2;
    int end=size-1;
    int count=0;
   
    for(i=0;i<mid;i++)
    {
        if(a[i]==a[end])
        {
            count++;
        }
        else{
            break;
        }
        end--;
    }

    if(count>=mid)
    {
        printf("array is palindrome: ");
    }
    else{
        printf("array is not palindrome: ");
    }


}