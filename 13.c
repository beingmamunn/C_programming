#include<stdio.h>
int main()
{
     int i, j, n;
     scanf("%d", &n);
     for(i=1; i<=n; i++)
     {
          for(j=1; j<=n; j++)
               {
                    if(j==1||j==n||j==2&&i==2||j==8&&i==2||j==3&&i==3) printf("*");
                    else printf(" ");
               }
               printf("\n");
     }

     return 0;
}


/*   i\j= 12345
     1    *****
     2    *****
     3    *****
     4    *****
     5    *****
     123456789
     *       *
     **     **
     * *   * *
     *  * *  *
     *   *   *
     *       *
     *       *



     */
