#include<stdio.h>
int main()
{
    double num1, num2;
    printf ("Enter the number: ");
    scanf ("%f", &num1);
    printf ("Enter another number: ");
    scanf ("%f", &num2);
    printf ("%f+%f=%f\n", num1, num2, num1+num2);
    printf ("%f-%f=%f\n", num1, num2, num1-num2);
    printf ("%f*%f=%f\n", num1, num2, num1*num2);
    printf ("%f/%f=%f\n", num1, num2, num1/num2);

    return 0;
}
