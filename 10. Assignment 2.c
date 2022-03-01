#include<stdio.h>
int main()
{
     int m;
     printf ("Enter students Mark: ");
     scanf ("%d", &m);
     if (m>=80) printf("His result is: A+");
     else if(m>=75) printf ("His result is: A");
     else if(m>=70) printf ("His result is: A-");
     else if(m>=65) printf ("His result is: B+");
     else if(m>=60) printf ("His result is: B");
     else if(m>=55) printf ("His result is: B-");
     else if(m>=50) printf ("His result is: C");
     else if(m>=45) printf ("His result is: D");
     else printf ("His result is: F");


     return 0;
}
