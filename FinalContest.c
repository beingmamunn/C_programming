#include<stdio.h>
int max(int num1, int num2)
{
    if(num1>num2)
        return num1;
    else return num2;
}
int min(int num1, int num2)
{
    if(num1<num2)
        return num1;
    else return num2;
}

int main()
{
    int l, r, l1, r1, l2, r2, k;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2, k);
    l=max(l1,l2);
    r=min(r1,r2);
    if(k>=l && k<=r)
    {
        printf("%d", abs(r-l+1-1));
    }
    else
    {
        printf("%d", abs(r-l+1));
    }


}
