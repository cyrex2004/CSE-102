#include<stdio.h>
int main()
{
    int n,d,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        p*=d;
        n/=10;
    }
    printf("%d",p);
    return 0;
}