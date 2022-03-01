#include<stdio.h>
int main ()
{
     double v, t, s;
     printf("Enter Velocity: ");
     scanf("%lf", &v);
     printf("Enter Time: ");
     scanf("%lf", &t);
     printf("s");
     s=v*2*t;
     printf("At 2t the object cross distance: %0.2lf m", s);
     return 0;
}
