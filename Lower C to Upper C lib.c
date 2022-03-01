 #include<stdio.h>
 int main()
 {
      char low, upp;
      printf("enter lowercase letter: ");
      scanf("%c", &low);
      upp = toupper(low);
      printf("the uppercase letter is: %c", upp);

 }
