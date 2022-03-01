#include<stdio.h>
int main()
{
     int i, j, n=5;
     for(i=1; i<=n; i++)
     {
          for(j=1; j<=n-i; j++)
          {
               printf(" ");
          }
          for(j=1; j<=i; j++)
          {
               printf("*");
          }
          for(j=1; j<=i-1; j++)
          {
               printf("*");
          }

          printf("\n");
     }
     return 0;
}

/*
j-12345  i
    *    1
   ***   2
  *****  3
   ***   4
    *    5

*/
