// 26. Write a C program to enter a number and print it in words.     1 to 99
#include<stdio.h>
int count=0;
void word(int no,int no2)
{
    if(no!=0)
    {
        no=no/10;
        count++;
        word(no,no2);
    }
    else if(count==1)    // 1 to 9
    {
        if(no2==1)
        {
            printf("one");
        }
        else if(no2==2)
        {
            printf("two");
        }
        else if(no2==3)
        {
            printf("three");
        }
        else if(no2==4)
        {
            printf("four");
        }
        else if(no2==5)
        {
            printf("five");
        }
        else if(no2==6)
        {
            printf("six");
        }
        else if(no2==7)
        {
            printf("seven");
        }
        else if(no2==8)
        {
            printf("eight");
        }
        else if(no2==9)
        {
            printf("nine");
        }
    }
    else if(count==2)
    {
        int no3=no2;
        no2=no2/10;
        if(no2==1)       // 10 to 19
        {
            no3=no3%10;
            if(no3==1)
            {
                printf("eleven");
            }
            else if(no3==2)
            {
                printf("twelve");
            }
            else if(no3==3)
            {
                printf("thirteen");
            }
            else if(no3==4)
            {
                printf("fourteen");
            }
            else if(no3==9)
            {
                printf("nineteen");
            }
            else if(no3==5)
            {
                printf("fifteen");
            }
            else if(no3==6)
            {
                printf("sixteen");
            }
            else if(no3==7)
            {
                printf("seventeen");
            }
            else if(no3==8)
            {
                printf("eighteen");
            }
            else if(no3==0)
            {
                printf("ten");
            }

        }
        else if(no2==2) //  20 to 29
        {
            no3=no3%10;
            if(no3==0)
            {
                printf("twenty");
            }
            else 
            {
                printf("twenty-");
                count=1;
                no2=no3;
                word(no,no2);
            }
        }
        else if(no2==3) //  30 to 39
        {
            no3=no3%10;
            if(no3==0)
            {
                printf("thirty");
            }
            else 
            {
                printf("thirty-");
                count=1;
                no2=no3;
                word(no,no2);
            }
        }
        else if(no2==4) //  40 to 49
        {
            no3=no3%10;
            if(no3==0)
            {
                printf("forty");
            }
            else 
            {
                printf("forty-");
                count=1;
                no2=no3;
                word(no,no2);
            }
        }
        else if(no2==5) //  50 to 59
        {
            no3=no3%10;
            if(no3==0)
            {
                printf("fifty");
            }
            else 
            {
                printf("fifty-");
                count=1;
                no2=no3;
                word(no,no2);
            }
        }
        else if(no2==6) //  60 to 69
        {
            no3=no3%10;
            if(no3==0)
            {
                printf("sixty");
            }
            else 
            {
                printf("sixty-");
                count=1;
                no2=no3;
                word(no,no2);
            }
        }
        else if(no2==7) //  70 to 79
        {
            no3=no3%10;
            if(no3==0)
            {
                printf("seventy");
            }
            else 
            {
                printf("seventy-");
                count=1;
                no2=no3;
                word(no,no2);
            }
        }
        else if(no2==8) //  80 to 89
        {
            no3=no3%10;
            if(no3==0)
            {
                printf("eighty");
            }
            else 
            {
                printf("eighty-");
                count=1;
                no2=no3;
                word(no,no2);
            }
        }
        else if(no2==9) //  90 to 99
        {
            no3=no3%10;
            if(no3==0)
            {
                printf("ninety");
            }
            else 
            {
                printf("ninety-");
                count=1;
                no2=no3;
                word(no,no2);
            }
        }
    }
}
int main()
{
    int num;
    printf("enter the number is:\n");
    scanf("%d",&num);
    int num2=num;
    word(num,num2);
    return 0;
}