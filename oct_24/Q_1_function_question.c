// Program 2. Given an array arr of N elements,  A majority element in an array arr 
// of size N is an element that appears more than N/2 times in the array. The task is 
// to write a function say isMajority() that takes an array (arr[] ), array’s size (n) 
// and a number to be searched (x) as parameters and returns true if x is a majority 
// element (present more than n/2 times). 
 
//         Examples:  
//  Input: arr[] = {1, 2, 3, 3, 3, 3, 10}, x = 3 
//  Output: True (x appears more than n/2 times in the given array) 
 
//  Input: arr[] = {1, 1, 2, 4, 4, 4, 6, 6}, x = 4 
//  Output: False (x doesn't appear more than n/2 times in the given array) 
 
//  Input: arr[] = {1, 1, 1, 2, 2}, x = 1 
// Output: True (x appears more than n/2 times in the given array 

#include<stdio.h>
int i,j;
int majority(int arr[],int n,int x)
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    }
    int count=1;
    for(i=0;i<5;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }        
    }
    if(count>(n/2) )
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int i,a[5];
    printf("enter the array element:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int no;
    printf("enter the number:\n");
    scanf("%d",&no);
    int result=majority(a,5,no);
    if(result)
    {
        printf("mejority element");
    }
    else{
        printf("is not ");
    }
    return 0;
}