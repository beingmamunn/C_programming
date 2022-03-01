#include<stdio.h>
int main()
{
     int n, i, count=0;
     scanf("%d", &n);
     for(i=2; i<n; i++)
     {
          if(n%i==0)
               count++;
          break;
     }
     if(count>0)
          printf("%d is not a prime Number\n", n);
          else printf("%d is a prime Number\n", n);

}
