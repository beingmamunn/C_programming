#include<stdio.h>
int main()
{
     int n, i;
     float avg, sum=0;
     scanf("%d", &n);
     int arr[n+5];
     for (i=0; i<n; i++)
     {
          scanf("%d", &arr[i]);
          sum+=arr[i];
     }
     avg=sum/n;
     printf("Avarage: %.2f", avg);

}
