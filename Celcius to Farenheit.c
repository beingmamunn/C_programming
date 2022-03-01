#include<stdio.h>
int main()
{
     double c, f;
     printf("Enter temperature in celsius: ");
     scanf("%lf", &c);
     printf("Temperature in fahrenheit: %.2lf", (c*9/5)+32);


     return 0;
}
