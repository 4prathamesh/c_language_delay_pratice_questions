// A 
// B C 
// C D E
// E F G H
// H I J K L

#include<stdio.h>
int main()
{
    int A=65,j,i;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",A);
            A++;
        }
        if(i>=2){
            A--;
        }
        
        printf("\n");
    }
    return 0;
}