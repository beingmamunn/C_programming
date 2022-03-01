#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i == 5||i==7) continue;
        printf("%d\n",i);
        if(i==11)break;
    }

    return 0;

}
