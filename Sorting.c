#include<stdio.h>
int main()
{
     int array[100], n, i;
     printf("Number of element:\n");
     scanf("%d", &n);

     printf("Input %d integer number--\n", n);
     for(i=0; i<n; i++)
     {
          scanf("%d", &array[i]);
     }
     for(i=0; i<n; i++)
     {
          printf("index: %d number: %d\n", i+1, array[i]);
     }
}
