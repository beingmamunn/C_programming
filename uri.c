#include<stdio.h>
int main()
{
     double x, y, z, t;
     scanf("%lf %lf %lf", &x, &y, &z);
     if (x<y)
     {
          t=x;
          x=y;
          y=t;
     }
     if (x<z)
     {
          t=x;
          x=z;
          z=t;
     }
     if (y<z)
     {
          t=y;
          y=z;
          z=t;
     }

     if(x>=y+z)
     {
          printf("NAO FORMA TRIANGULO\n");
     }
     else if ((x*x)==(y*y+z*z))
     {
          printf("TRIANGULO RETANGULO\n");
     }
     else if ((x*x)>(y*y+z*z))
     {
          printf("TRIANGULO OBTUSANGULO\n");
     }
     else if ((x*x)<(y*y+z*z))
     {
          printf("TRIANGULO ACUTANGULO\n");
     }
     if (x==y&&y==z)
     {
          printf("TRIANGULO EQUILATERO\n");
     }
     else if (x==y||y==z)
     {
          printf("TRIANGULO ISOSCELES\n");
     }


     return 0;
}
