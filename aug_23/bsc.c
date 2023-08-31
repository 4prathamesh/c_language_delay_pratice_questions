#include<stdio.h>

int main()
{
 int i=0, j=1, k=2, m ,l=1; 
 m = i++ || j++ || k++ || l++;
 printf("%d %d %d %d %d", m, i, j,l, k);

return 0;
}