#include<stdio.h>
int main()
{
     int i, j, n;

     scanf("%d", &n);

     for(i=1; i<=n; i++)
     {
          for(j=1; j<=n; j++)
          {
               if(i==1&&j==n||i==n&&j==1||i==j||i==2&&j==4||i==4&&j==2) printf("*");
               else printf(" ");
          }
          printf("\n");

     }

     return 0;
}
