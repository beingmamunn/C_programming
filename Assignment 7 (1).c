#include<stdio.h>
#include<string.h>
int main()
{
     int i, lenght;
     char name[100];

     gets (name);

     lenght=strlen(name);
     for (i=lenght-1; i>=0; i--)
     {
          printf ("%c ", name[i]);
     }

     return 0;
}
