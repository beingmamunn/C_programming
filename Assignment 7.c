#include<stdio.h>
int main()
{
     int i, j, row, col;
     int A[10][10], B[10][10];
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
               printf ("%d ", A[i][j]*B[i][j]);
          }
          printf ("\n");
     }
     return 0;
}
