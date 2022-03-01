#include<stdio.h>
int main()
{
     int st, et, dr;
     scanf("%d %d", &st, &et);
     dr=et-st;

     if(dr<0)
     {
          dr=24+(et-st);
     }
     if (et==st)
     {
          printf("O JOGO DUROU 24 HORA(S)\n");
     }
     else printf("O JOGO DUROU %d HORA(S)\n", dr);


     return 0;
}
