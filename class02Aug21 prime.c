#include<stdio.h>
int main()
{
    int n, i, isPrime=1;
    scanf("%d", &n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)isPrime=0;
    }

    if(isPrime==1)printf("Prime\n");
    else printf("Not Prime\n");

    return 0;
}
