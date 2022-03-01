#include<stdio.h>
int main()
{
     int tk;
     printf("How much TK you have?\n");
     scanf("%d", &tk);
     if (tk>=120+15)
     {
          printf("I'll eat Biriyani\n");
          tk=tk-120;
          printf("You have %d tk left\n", tk);
          if (tk>=80+15)
          {
               printf("Give me a cup of Coffee\n");
               tk=tk-80;
               printf("now you have more %d tk\n", tk);
               if (tk>=50+15)
               {
                    printf("I can drink a Coke\n");
                    tk=tk-50;
                    printf("%d tk left\n", tk);
                    printf("I should go to home\n");
               }

          }
          else if (tk>=15)
                    printf("I should go to home\n");
     }
     else if (tk>=80+15)
          {
               printf("Give me a cup of Coffee\n");
               tk=tk-80;
               printf("now you have more %d tk\n", tk);
               if (tk>=50+15)
               {
                    printf("I can drink a Coke\n");
                    tk=tk-50;
                    printf("%d tk left\n", tk);
                    printf("I should go to home\n");
               }
               else if (tk>=15)
                    printf("I should go to home\n");
          }
          else if (tk>=50+15)
               {
                    printf("I can drink a Coke\n");
                    tk=tk-50;
                    printf("%d tk left\n", tk);
                    printf("I should go to home\n");
               }

     else printf("I should go to home\n");


     return 0;
}
