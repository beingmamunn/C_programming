#include<stdio.h>
int main()
{
     int num, wh;
     double s;
     scanf("%d %d %lf", &num, &wh, &s);
     printf("NUMBER = %d\n", num);
     printf("SALARY = U$ %0.2lf\n", wh*s);

     return 0;
}
