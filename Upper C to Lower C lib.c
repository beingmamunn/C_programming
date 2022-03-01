#include<stdio.h>
int main()
{
     char upp, low;
     printf("enter a uppercase letter: ");
     scanf("%c", &upp);
     low= tolower(upp);
     printf("the lowercase letter is: %c", low);


}
