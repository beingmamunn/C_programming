#include<stdio.h>
int main()
{
     int i, j, k, row, col;
     int A[10][10], B[10][10], mul[10][10];
     scanf ("%d %d", &row, &col);

     printf("Enter Matrices A:\n");

     for (i=0; i<row; i++)
     {
          for (j=0; j<col; j++)
          {
               scanf ("%d", &A[i][j]);
          }
     }

     printf ("Enter Matrices B:\n");

     for (i=0; i<row; i++)
     {
          for (j=0; j<col; j++)
          {
               scanf ("%d", &B[i][j]);
          }
     }

     printf ("Result is:\n");
     for (i=0; i<row; i++)
     {
          for (j=0; j<col; j++)
          {
               mul[i][j]=0;
               for(k=0; k<col; k++)
               {
                    mul[i][j]=mul[i][j]+A[i][k]*B[k][j];
               }
               printf ("%d ", mul[i][j]);
          }
          printf ("\n");
     }
     return 0;
}
