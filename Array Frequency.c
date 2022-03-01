#include<stdio.h>
int main()
{
     int mx, n, i, arr[n+10], freq[mx+10];
     scanf("%d", &n);
     scanf("%d", &mx);
     for (i=0; i<=mx; i++)
     {
          freq[i]=0;
     }
     for (i=0; i<n; i++)
     {
          scanf("%d", &arr[i]);
          freq[arr[i]]++;
     }
     for (i=0; i<n; i++)
     {
          printf("%d %d", arr[i], freq[arr[i]]);
     }


}
