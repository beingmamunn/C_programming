#include<stdio.h>
int main()
{
    int d;
    scanf("%d", &d);

    double numerator=0.0;
    for(int i=1; i<=d; i++)
    {
        int percent_i;
        scanf("%d", &percent_i);
        numerator+=percent_i;
    }

    double denominator=d*1.0;
    double fraction=numerator/denominator;

    printf("%lf\n", fraction);


    return 0;
}

