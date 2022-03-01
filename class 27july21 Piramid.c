#include<stdio.h>
int main()
{
     int i, j, n=5;
     for(i=1; i<=n; i++)
     {
          for(j=1; j<=n-i; j++)
          {
               printf("0");
          }
          for(j=1; j<=i; j++)
          {
               printf("*");
          }
          for(j=1; j<=i-1; j++)
          {
               printf("8");
          }

          printf("\n");
     }
     return 0;
}

/*
i
1  0000*
2  000**8
3  00***88
4  0****888
5  *****8888
j--123456789
*/
