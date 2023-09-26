// 25.Write a C program to find frequency of each digit in a given integer.
#include<stdio.h>
int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,rem;
void frequency(int no)
{
    if(no!=0)
    {
        rem=no%10;
        no=no/10;
        if(rem==0)
        {
            zero++;
            frequency(no);
        }
        else if(rem==1)
        {
            one++;
            frequency(no);
        }
        else if(rem==2)
        {
            two++;
            frequency(no);
        }
        else if(rem==3)
        {
            three++;
            frequency(no);
        }
        else if(rem==4)
        {
            four++;
            frequency(no);
        }
        else if(rem==5)
        {
            five++;
            frequency(no);
        }
        else if(rem==6)
        {
            six++;
            frequency(no);
        }
        else if(rem==7)
        {
            seven++;
            frequency(no);
        }
        else if(rem==8)
        {
            eight++;
            frequency(no);
        }
        else if(rem==9)
        {
            nine++;
            frequency(no);
        }
        else{
            frequency(no);
        }

    }
    else{
        printf("frequency of 0 is %d\n",zero);
        printf("frequency of 1 is %d\n",one);
        printf("frequency of 2 is %d\n",two);
        printf("frequency of 3 is %d\n",three);
        printf("frequency of 4 is %d\n",four);
        printf("frequency of 5 is %d\n",five);
        printf("frequency of 6 is %d\n",six);
        printf("frequency of 7 is %d\n",seven);
        printf("frequency of 8 is %d\n",eight);
        printf("frequency of 9 is %d\n",nine);
    }
}
int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    frequency(num);
    return 0;
}