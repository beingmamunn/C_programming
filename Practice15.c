#include<stdio.h>
int main()
{
     int ft_marks, st_marks, final_marks;
     double total_marks;
     printf("Enter first term marks: ");
     scanf("%d", &ft_marks);
     printf("Enter second term marks: ");
     scanf("%d", &st_marks);
     printf("Enter Final Marks: ");
     scanf("%d", &final_marks);
     total_marks= ft_marks/4+st_marks/4+final_marks/2;
     printf("Total Mark is: %0.2lf\n", total_marks);

     return 0;
}
