#include<stdio.h>
int main()
{
     int i, n, x, sum=0;
     scanf("%d %d", &n, &x);

     for(i=1; i<=n; i++)
     {
          sum= sum + pow(i, x);

     }
     printf("1^%d+2^%d+3^%d+...+%d^%d\n", x, x, x, n, x);
     printf("Sum: %d\n", sum);

     return 0;
}
