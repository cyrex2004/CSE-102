#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        printf("%d",d);
        n/=10;
    }
    return 0;
}