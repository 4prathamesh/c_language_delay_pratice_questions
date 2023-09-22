#include<stdio.h>
//                  palindrome number 

    void palindrome(int a)
    {
        int temp=a,rev=0,rem;
        while(a>0)
        {
            int rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }
        if(rev==temp)
        {
            printf("\nis the palindrome");
        }
        else{
            printf("\nis not the palindrome");
        }
    }