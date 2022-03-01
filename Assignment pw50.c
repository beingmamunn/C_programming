#include<stdio.h>
int main()
{
     int n;
     scanf("%d", &n);
     int arr[n+10];
     int ara[n+10];
     for(int i=0; i<n; i++)
     {
          scanf("%d", &arr[i]);
          ara[i]=arr[i];
     }
     for(int i=0; i<n-1; i++)
     {
          for(int j=i+1; j<n; j++)
          {
               if(arr[i]>arr[j])
               {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
               }
          }
     }
     for(int i=0; i<n; i++)
     {
          if(arr[i]>=0)
          {
               printf("%d ", arr[i]);
          }

     }
     for(int i=0; i<n; i++)
     {
          if(ara[i]<0)
          {
               printf("%d ", ara[i]);
          }
     }


     return 0;
}
