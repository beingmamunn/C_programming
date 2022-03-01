#include<stdio.h>
int main ()
{
     double A1, A2, B1, B2, C1, C2, X, Y;

     printf("A1= ");
     scanf("%lf", &A1);
     printf("A2= ");
     scanf("%lf", &A2);
     printf("B1= ");
     scanf("%lf", &B1);
     printf("B2= ");
     scanf("%lf", &B2);
     printf("C1= ");
     scanf("%lf", &C1);
     printf("C2= ");
     scanf("%lf", &C2);
     X= (B2*C1-B1*C2)/(A1*B2-A2*B1);
     Y= (A1*C2-A2*C1)/(A1*B2-A2*B1);
     printf("X= %0.2lf, Y= %0.2lf", X, Y);

     return 0;
}
