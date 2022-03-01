#include<stdio.h>
int main()
{
     double v;
     scanf("%lf", &v);
     int n, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01;

     printf("NOTAS:\n");
     n=v*100;
     n100=n/10000;
     n=n%10000;
     printf("%d nota(s) de R$ 100.00\n", n100);
     n50=n/5000;
     n=n%5000;
     printf("%d nota(s) de R$ 50.00\n", n50);
     n20=n/2000;
     n=n%2000;
     printf("%d nota(s) de R$ 20.00\n", n20);
     n10=n/1000;
     n=n%1000;
     printf("%d nota(s) de R$ 10.00\n", n10);
     n5=n/500;
     n=n%500;
     printf("%d nota(s) de R$ 5.00\n", n5);
     n2=n/200;
     n=n%200;
     printf("%d nota(s) de R$ 2.00\n", n2);

     printf("MOEDAS:\n");
     m1=n/100;
     n=n%100;
     printf("%d moeda(s) de R$ 1.00\n", m1);
     m50=n/50;
     n=n%50;
     printf("%d moeda(s) de R$ 0.50\n", m50);
     m25=n/25;
     n=n%25;
     printf("%d moeda(s) de R$ 0.25\n", m25);
     m10=n/10;
     n=n%10;
     printf("%d moeda(s) de R$ 0.10\n", m10);
     m05=n/5;
     n=n%5;
     printf("%d moeda(s) de R$ 0.05\n", m05);
     m01=n/1;
     printf("%d moeda(s) de R$ 0.01\n", m01);


     return 0;
}
