#include<stdio.h>
int main()
{
    int i,j,row,column;

    int A[10][10],B[10][10];


    scanf("%d %d",&row,&column);


    printf("Enter Matrix A\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter Matrix B\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }


    printf("Result\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d  ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }


    return 0;
}
