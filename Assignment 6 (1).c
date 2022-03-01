#include<stdio.h>
int main()
{
     int n[100];
     int i, x, sum=0;

     printf("How many Numbers you want to input: ");
     scanf("%d", &x);

     for (i=0; i<x; i++)
     {
          scanf("%d", &n[i]);
          sum=sum+n[i];
     }
     printf("Sum=%d\n", sum);

     return 0;
}
