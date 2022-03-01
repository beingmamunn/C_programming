#include<stdio.h>
#include<math.h>
int main()
{
     int a=-5;
     printf("Absolute value of A: %d\n", abs(a));

     int s=25;
     printf("Square root of S: %.2lf\n", sqrt(s));

     int x=5, p=3;
     printf("5 to the power 4= %.2lf\n", pow(5, 4));

     int l=20;
     printf("Log(%d)= %.2lf\n", l, log(l));

     int l1=20;
     printf("Log10(%d)= %.2lf\n", l1, log10(l1));

     int e=5;
     printf("Exponential %d= %.2lf\n", e, exp(e));

     double ang=90;
     printf("Sin(%.2lf)= %.2lf\n", ang, sin(ang));

     printf("cos(%.2lf)= %.2lf\n", ang, cos(ang));

     printf("tan(%.2lf)= %.2lf\n", ang, tan(ang));

     double r1=5.45, r2=5.55;
     printf("Round(%.2lf)= %.2lf, Round(%.2lf)= %.2lf\n", r1, round(r1), r2, round(r2));

     double t=5.55;
     printf("Trunc(%.2lf)= %.2lf\n", t, trunc(t));

     double c=5.55;
     printf("Ceil(%.2lf)= %.2lf\n", c, ceil(c));

     double f=5.55;
     printf("Floor(%.2lf)= %.2lf\n", f, floor(f));



}
