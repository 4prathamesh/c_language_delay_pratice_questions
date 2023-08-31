/*#include<stdio.h>
int main()
{
    int i=1;
    while(i<=256)
    {
        printf("%d=%c\n",i,i);
        i++;
    }
    return 0;
}*/
// #include <stdio.h>
//  int main()
//  {
//  int y = 0;
//  if (1 |(y = 1))
//  printf("y is %d\n", y);
//  else
//  printf("%d\n", y); 
//  return 0;
//  }
#include<stdio.h>
int main()
{ printf("%d %d\n", 32<<1, 32<<0);
 printf("%d %d\n", 32<<-1, 32<<-0);
 printf("%d %d\n", 32>>1, 32>>0);
 printf("%d %d\n", 32>>-1, 32>>-0);
 return 0;
}





