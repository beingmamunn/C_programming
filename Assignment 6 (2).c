#include<stdio.h>
int main()
{
     int n[100];
     int i, x, sum=0, avg;
     printf ("Numbers you want to enter: ");
     scanf("%d", &x);

     for (i=0; i<x; i++)
     {
          scanf("%d", &n[i]);
          sum=sum+n[i];
     }
     avg=sum/x;
     printf ("Average=%d\n", avg);

     return 0;
}
